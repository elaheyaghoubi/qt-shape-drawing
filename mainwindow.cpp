#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    connect(ui->slid,SIGNAL(valueChanged(int)),this,SLOT(on_slid_valueChanged()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_open_webcam_clicked()
{
    qDebug()<<"trying to open the camera";
    cap.open(0);

    if(!cap.isOpened())
    {
        cout << "camera is not open" << endl;
    }
    else
    {
        cout << "camera is open" << endl;

        connect(timer, SIGNAL(timeout()), this, SLOT(update_window()));
        timer->start(1);
    }
}

void MainWindow::on_pushButton_close_webcam_clicked()
{
    disconnect(timer, SIGNAL(timeout()), this, SLOT(update_window()));
    cap.release();
    ui->label->hide();
    cout << "camera is closed" << endl;
}


void MainWindow::update_window()
{
    cap >> frame;
    ui->label->show();

    on_rectangleCheck_clicked();

    on_circleCheck_clicked();

    on_squareCheck_clicked();

    cvtColor(frame, frame, COLOR_BGR2RGB);

    qt_image = QImage((const unsigned char*) (frame.data), frame.cols, frame.rows, QImage::Format_RGB888);

    ui->label->setPixmap(QPixmap::fromImage(qt_image));

    ui->label->resize(ui->label->pixmap()->size());
}

void MainWindow::on_rectangleCheck_clicked()
{
    if (ui->rectangleCheck->isChecked())
    {
        Point start_point(50,350);
        Point end_point(400,400);
        rectangle(frame, start_point, end_point, Scalar(0,0,255), 3, 8, 0);
    }
}

void MainWindow::on_circleCheck_clicked()
{
    if (ui->circleCheck->isChecked())
    {
        Point center(frame.cols/2.0,frame.rows/2.0);
        circle(frame,center,m_circleSize,Scalar(450,185,100), 12, 20, 0);
    }
}

void MainWindow::on_squareCheck_clicked()
{
    if (ui->squareCheck->isChecked())
    {
      Point start_point(200,200);
      Point end_point(300,300);
      rectangle(frame,start_point,end_point,Scalar(230,97,0),3,8,0);
    }
}

void MainWindow::on_slid_valueChanged(int value)
{
    m_circleSize = ui->slid->value();
}




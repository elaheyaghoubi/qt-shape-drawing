#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <QDebug>
#include <QSlider>
#include <QPainter>
#include <iostream>
#include <QPainter>

using namespace std;
using namespace cv;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:

   public slots:

    void on_slid_valueChanged(int value);

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_pushButton_open_webcam_clicked();

    void on_pushButton_close_webcam_clicked();

    void update_window();

    void on_rectangleCheck_clicked();

    void on_circleCheck_clicked();

    void on_squareCheck_clicked();

private:
    Ui::MainWindow *ui;

    QTimer *timer;

    VideoCapture cap;

    Mat frame;

    QImage qt_image;

    int m_circleSize{5};
};

#endif // MAINWINDOW_H

# Welcome to Tool-Task! 👋🏻

Thanks Mr. **Alireza Mohafezatkar** for being the leader and guide of our group for this project.🙏🏻 Group members for this project : **Yegane Almasi Tabar**, **Elahe Yaghoubi** and **Amir Mohammad Parvizi**.

One of the projects of ([MRL-HSL](https://www.bing.com/ck/a?!&&p=b14cb7c50279c4740f8b0c55a298b4824311331e3082172cb69786d536ceb430JmltdHM9MTY1NDkwNTYwMCZpZ3VpZD0yOTg5MWM5ZC1jMzUzLTY3NzUtMGM5Yy0wZDI4YzI4MTY2NDQmaW5zaWQ9NTE2MA&ptn=3&fclid=29891c9d-c353-6775-0c9c-0d28c2816644&u=a1aHR0cHM6Ly9zaXRlcy5nb29nbGUuY29tL3ZpZXcvbXJsLWhzbA&ntb=1)) 🤖
, Email : [MRL-HSL Email](mrl.humanoidrobots@gmail.com)

# Download Qt 📥
Download QT in this site 🔗 ([Download Offline Installers | Source Package Offline Installer | Qt](https://www.qt.io/offline-installers))

## Create files and folders
Move the program from the **Downloads** folder to the desired folder for example **QT Projects** after downloading.

## unzip or unrar 📂
now you should unzip the target file :

* unzip command in **ubuntu**

   ```sh
   unzip filename
   ```
   * unrar command in **ubuntu**

   ```sh
   unrar -e filename
   ```


## If You have Error 🐞
For easily execute the code, it is better to first make sure that the required versions are up-to-date before starting.
run this commands in your **ubuntu terminal** for get necessary package.

1. 
  ```sh
  sudo apt-get install build-essential -y
  ```
2. 
  ```sh
  sudo apt-get install libfontconfig1 -y 
  ```
3. 
  ```sh
  sudo apt-get install mesa-common-dev -y
  ```
  4. 
  ```sh
  sudo apt-get install libglu1-mesa-dev -y
  ```
  5. 
  ```sh
  sudo apt-get install clang -y
  ```

## Don't run this file ! ⚠️

we have write .pro.user in **.gitignore** bacause there is no need to run and that makes with QT.

## Report Link

Report for this task with **PDF** format ([Change Soon](https://www.qt.io/offline-installers))

## License 🤗
[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](https://licenses.com)
All  sources are without special license and copyright [No license]().

## UML diagrams


And this will produce a flow chart:

```mermaid
graph LR
A[PushButton]--> B(opencv)
A --> C(SIGNAL)
C --> D(SLOT)
B --> E{Display live}
D --> E
E --> G(checkbox)
G-->H(Circle)
G-->I(SIGNAL)
I-->J(SLOT)
H -->K(Shape on Screen)
J-->K
K-->F
E --> F(Close Button)


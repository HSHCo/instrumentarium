#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


//class FourAngles
//{
//private:
//    int _a;
//    int _b;
//    int _c;
//    int _d;

//public:
//    FourAngles(int a, int b, int c, int d)
//        : _a(a), _b(b), _c(c), _d(d)
//    {}

//};

//int a;
//FourAngles f(1,2,3,4);




#endif // MAINWINDOW_H

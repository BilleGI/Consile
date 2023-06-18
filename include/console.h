#pragma once
#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CallerMainWindow: public QMainWindow
{
    Q_OBJECT

private:
    QLineEdit *lineEdit = nullptr;
    QLineEdit *lineEdit_2 = nullptr;
    void setLineEdit(int&& count);
public:
    CallerMainWindow(QWidget* parrent);

public slots:
    void add0();
    void add1();
    void add2();
    void add3();
    void add4();
    void add5();
    void add6();
    void add7();
    void add8();
    void add9();
    void plus();
    void minus();
    void back();
    void forward();
    void del();
};

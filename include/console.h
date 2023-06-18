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
    void addnumber();
    void plus();
    void minus();
    void back();
    void forward();
    void del();
};

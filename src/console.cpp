#include "console.h"
#include "../include/ui_console.h"
#include <iostream>

const int count = 500;

CallerMainWindow::CallerMainWindow(QWidget* parrent) : QMainWindow(parrent)
{
    Ui::MainWindow caller;
    caller.setupUi(this);
    this->lineEdit = caller.lineEdit;
    this->lineEdit_2 = caller.lineEdit_2;
    lineEdit->setText("0");
    lineEdit_2->setText("40%");
}

void CallerMainWindow::setLineEdit(int&& channel)
{
    if(channel == 10 || channel == 11)
    {
        int mean = (lineEdit->text().toInt());
        if(channel == 10)
        {
            if (mean == count) lineEdit->setText("0");
            else lineEdit->setText(QString::number(++mean));
        }
        else if (channel == 11)
        {
            if ( mean == 0) lineEdit->setText(QString::number(count));
            else lineEdit->setText(QString::number(--mean));
        }
    }
    else if(lineEdit->text() == "0")
        lineEdit->setText(QString::number(channel));
    else
    {
        int mean = (lineEdit->text().toInt() * 10 + channel);
        if(mean > count)
            lineEdit->setText("0");
        else
            lineEdit->setText(QString::number(mean));
    }
}

void CallerMainWindow::addnumber()
{
    QPushButton *btn = dynamic_cast<QPushButton*>(sender());
    setLineEdit(btn->text().toInt());
}

void CallerMainWindow::forward()
{
    setLineEdit(10);
}

void CallerMainWindow::back()
{
    setLineEdit(11);
}

int volume(QString&& strVolume)
{
    int i = 0;
    for(; strVolume[i] != '%'; ++i){}
    if(i == 3) return 100;
    else return ((strVolume[0].unicode() - 48) * 10);
}

void CallerMainWindow::minus()
{
    int mean = volume(lineEdit_2->text());
    std::cout << mean << std::endl;
    if(mean == 0) lineEdit_2->setText("0%");
    else lineEdit_2->setText(QString::number(mean - 10) + "%");
}

void CallerMainWindow::plus()
{
    int mean = volume(lineEdit_2->text());
    std::cout << mean << std::endl;
    if(mean == 100) lineEdit_2->setText("100%");
    else lineEdit_2->setText(QString::number(mean + 10) + "%");
}

void CallerMainWindow::del()
{
    lineEdit->setText("0");
}

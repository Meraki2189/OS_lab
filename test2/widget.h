#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include "windows.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    Ui::Widget *ui;

private slots:
    void on_startBtn_clicked();
/*
private:
    Ui::Widget *ui; */
};

#endif // WIDGET_H

/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListWidget *Producerlist;
    QListWidget *Consumerlist;
    QPushButton *startBtn;
    QPushButton *exitBtn;
    QLineEdit *ProducerNum;
    QLineEdit *ConsumerNum;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(900, 679);
        Producerlist = new QListWidget(Widget);
        Producerlist->setObjectName(QStringLiteral("Producerlist"));
        Producerlist->setGeometry(QRect(40, 40, 331, 31));
        Consumerlist = new QListWidget(Widget);
        Consumerlist->setObjectName(QStringLiteral("Consumerlist"));
        Consumerlist->setGeometry(QRect(460, 40, 371, 31));
        startBtn = new QPushButton(Widget);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        startBtn->setGeometry(QRect(150, 550, 201, 91));
        exitBtn = new QPushButton(Widget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(550, 550, 191, 91));
        ProducerNum = new QLineEdit(Widget);
        ProducerNum->setObjectName(QStringLiteral("ProducerNum"));
        ProducerNum->setGeometry(QRect(80, 200, 711, 61));
        ConsumerNum = new QLineEdit(Widget);
        ConsumerNum->setObjectName(QStringLiteral("ConsumerNum"));
        ConsumerNum->setGeometry(QRect(80, 370, 711, 61));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 130, 161, 51));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 310, 161, 51));

        retranslateUi(Widget);
        QObject::connect(exitBtn, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        startBtn->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\347\224\237\344\272\247\350\200\205\346\225\260\351\207\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\266\210\350\264\271\350\200\205\346\225\260\351\207\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

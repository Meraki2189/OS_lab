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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *fcfsBtn;
    QPushButton *rrBtn;
    QPushButton *sjfBtn;
    QPushButton *hrnBtn;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QPushButton *exitBtn;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1600, 1200);
        Widget->setMaximumSize(QSize(2000, 1601));
        fcfsBtn = new QPushButton(Widget);
        fcfsBtn->setObjectName(QStringLiteral("fcfsBtn"));
        fcfsBtn->setGeometry(QRect(20, 970, 151, 81));
        rrBtn = new QPushButton(Widget);
        rrBtn->setObjectName(QStringLiteral("rrBtn"));
        rrBtn->setGeometry(QRect(270, 970, 151, 91));
        sjfBtn = new QPushButton(Widget);
        sjfBtn->setObjectName(QStringLiteral("sjfBtn"));
        sjfBtn->setGeometry(QRect(580, 970, 141, 91));
        hrnBtn = new QPushButton(Widget);
        hrnBtn->setObjectName(QStringLiteral("hrnBtn"));
        hrnBtn->setGeometry(QRect(890, 970, 141, 91));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 130, 1121, 51));
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(80, 300, 1421, 521));
        exitBtn = new QPushButton(Widget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(1180, 970, 181, 91));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 190, 971, 41));

        retranslateUi(Widget);
        QObject::connect(exitBtn, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        fcfsBtn->setText(QApplication::translate("Widget", "FCFS\347\256\227\346\263\225", Q_NULLPTR));
        rrBtn->setText(QApplication::translate("Widget", "RR\347\256\227\346\263\225", Q_NULLPTR));
        sjfBtn->setText(QApplication::translate("Widget", "SJF\347\256\227\346\263\225", Q_NULLPTR));
        hrnBtn->setText(QApplication::translate("Widget", "HRN\347\256\227\346\263\225", Q_NULLPTR));
        lineEdit->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\350\277\233\347\250\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\345\210\260\350\276\276\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\345\256\214\346\210\220\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\345\221\250\350\275\254\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\345\270\246\346\235\203\345\221\250\350\275\254\346\227\266\351\227\264", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\350\257\267\346\214\211\346\254\241\345\272\217\350\276\223\345\205\245\345\220\204\350\277\233\347\250\213\347\232\204\345\220\215\347\247\260\343\200\201\345\210\260\350\276\276\346\227\266\351\227\264\344\270\216\346\234\215\345\212\241\346\227\266\351\227\264\357\274\214\344\273\245\347\251\272\346\240\274\351\227\264\351\232\224", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

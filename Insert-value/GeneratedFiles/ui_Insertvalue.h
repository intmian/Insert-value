/********************************************************************************
** Form generated from reading UI file 'Insertvalue.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTVALUE_H
#define UI_INSERTVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertvalueClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *InsertvalueClass)
    {
        if (InsertvalueClass->objectName().isEmpty())
            InsertvalueClass->setObjectName(QStringLiteral("InsertvalueClass"));
        InsertvalueClass->resize(1287, 850);
        centralWidget = new QWidget(InsertvalueClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        InsertvalueClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(InsertvalueClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1287, 26));
        InsertvalueClass->setMenuBar(menuBar);

        retranslateUi(InsertvalueClass);

        QMetaObject::connectSlotsByName(InsertvalueClass);
    } // setupUi

    void retranslateUi(QMainWindow *InsertvalueClass)
    {
        InsertvalueClass->setWindowTitle(QApplication::translate("InsertvalueClass", "\346\217\222\345\200\274\346\274\224\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InsertvalueClass: public Ui_InsertvalueClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTVALUE_H

/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *wordTraEn_label;
    QTextEdit *wordTraEn_textEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *wordSrcAr_label;
    QTextEdit *wordSrcAr_textEdit;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *arToEng_pushButton;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *wordTraAr_label;
    QTextEdit *wordTraAr_textEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *wordSrcEng_label;
    QTextEdit *wordSrcEng_textEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *engToAr_pushButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(594, 259);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setLocale(QLocale(QLocale::Arabic, QLocale::Egypt));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        wordTraEn_label = new QLabel(tab);
        wordTraEn_label->setObjectName(QStringLiteral("wordTraEn_label"));

        verticalLayout_3->addWidget(wordTraEn_label);

        wordTraEn_textEdit = new QTextEdit(tab);
        wordTraEn_textEdit->setObjectName(QStringLiteral("wordTraEn_textEdit"));

        verticalLayout_3->addWidget(wordTraEn_textEdit);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        wordSrcAr_label = new QLabel(tab);
        wordSrcAr_label->setObjectName(QStringLiteral("wordSrcAr_label"));

        verticalLayout_4->addWidget(wordSrcAr_label);

        wordSrcAr_textEdit = new QTextEdit(tab);
        wordSrcAr_textEdit->setObjectName(QStringLiteral("wordSrcAr_textEdit"));

        verticalLayout_4->addWidget(wordSrcAr_textEdit);


        gridLayout_3->addLayout(verticalLayout_4, 0, 2, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        arToEng_pushButton = new QPushButton(tab);
        arToEng_pushButton->setObjectName(QStringLiteral("arToEng_pushButton"));

        gridLayout_3->addWidget(arToEng_pushButton, 1, 1, 1, 2);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        wordTraAr_label = new QLabel(tab_2);
        wordTraAr_label->setObjectName(QStringLiteral("wordTraAr_label"));

        verticalLayout->addWidget(wordTraAr_label);

        wordTraAr_textEdit = new QTextEdit(tab_2);
        wordTraAr_textEdit->setObjectName(QStringLiteral("wordTraAr_textEdit"));

        verticalLayout->addWidget(wordTraAr_textEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        wordSrcEng_label = new QLabel(tab_2);
        wordSrcEng_label->setObjectName(QStringLiteral("wordSrcEng_label"));

        verticalLayout_2->addWidget(wordSrcEng_label);

        wordSrcEng_textEdit = new QTextEdit(tab_2);
        wordSrcEng_textEdit->setObjectName(QStringLiteral("wordSrcEng_textEdit"));

        verticalLayout_2->addWidget(wordSrcEng_textEdit);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        engToAr_pushButton = new QPushButton(tab_2);
        engToAr_pushButton->setObjectName(QStringLiteral("engToAr_pushButton"));

        gridLayout->addWidget(engToAr_pushButton, 1, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\331\205\330\252\330\261\330\254\331\205", 0));
        wordTraEn_label->setText(QApplication::translate("Widget", "\330\252\330\261\330\254\331\205\330\252\331\207\330\247 (\330\245\331\206\330\254\331\204\331\212\330\262\331\212\330\251)", 0));
        wordTraEn_textEdit->setPlaceholderText(QString());
        wordSrcAr_label->setText(QApplication::translate("Widget", "\330\247\331\204\331\203\331\204\331\205\330\251 (\330\271\330\261\330\250\331\212\330\251)", 0));
        wordSrcAr_textEdit->setPlaceholderText(QString());
        arToEng_pushButton->setText(QApplication::translate("Widget", "\330\252\330\261\330\254\331\205", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "\331\205\331\206 \330\247\331\204\330\271\330\261\330\250\331\212 \330\245\331\204\331\211 \330\247\331\204\330\245\331\206\330\254\331\204\331\212\330\262\331\212", 0));
        wordTraAr_label->setText(QApplication::translate("Widget", "\330\252\330\261\330\254\331\205\330\252\331\207\330\247 (\330\271\330\261\330\250\331\212\330\251)", 0));
        wordTraAr_textEdit->setPlaceholderText(QString());
        wordSrcEng_label->setText(QApplication::translate("Widget", "\330\247\331\204\331\203\331\204\331\205\330\251 (\330\245\331\206\330\254\331\204\331\212\330\262\331\212\330\251)", 0));
        wordSrcEng_textEdit->setPlaceholderText(QString());
        engToAr_pushButton->setText(QApplication::translate("Widget", "\330\252\330\261\330\254\331\205", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "\331\205\331\206 \330\247\331\204\330\245\331\206\330\254\331\204\331\212\330\262\331\212 \330\245\331\204\331\211 \330\247\331\204\330\271\330\261\330\250\331\212", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

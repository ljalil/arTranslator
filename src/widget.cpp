#include "widget.h"
#include "ui_widget.h"
#include "translator.h"
Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_engToAr_pushButton_clicked()
{
    Dic.setQuery(translator::englishToArabic, ui->wordSrcEng_textEdit->toPlainText());
    ui->wordTraAr_textEdit->setText(Dic.translateWord());
}

void Widget::on_arToEng_pushButton_clicked()
{
    Dic.setQuery(translator::arabicToEnglish, ui->wordSrcAr_textEdit->toPlainText());
    ui->wordTraEn_textEdit->setText(Dic.translateWord());
}

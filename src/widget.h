#ifndef WIDGET_H
#define WIDGET_H
#include "translator.h"
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    translator Dic;
private slots:
    void on_engToAr_pushButton_clicked();

    void on_arToEng_pushButton_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

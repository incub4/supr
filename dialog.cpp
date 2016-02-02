#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QPixmap pixmap("D:/Desktop/page.png");
    ui->label->setPixmap(pixmap);
    // открытие нового окна при нажатие на кнопку препроцессора
    connect(ui->PB_preprocessor,SIGNAL(clicked(bool)),pr,SLOT(show()));

    connect(ui->PB__processor,SIGNAL(clicked(bool)),SLOT(newmenu()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::newmenu()
{
    clean();
}

void Dialog::clean( )
{
    QLayoutItem *child;
     while ((child = this->layout()->takeAt(0)) != 0)
     {
         delete child->widget();
         delete child;
     }
}

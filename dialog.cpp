#include "dialog.h"
#include "ui_dialog.h"

//////////////////////КОНСТРУКТОР////////////////////////////////////
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setFixedSize(220,300);
    ui->label->setFixedSize(220,300);


    preprocessor *pr = new preprocessor;
    connect(ui->PB_preprocessor,SIGNAL(clicked(bool)),pr,SLOT(show()));

}

Dialog::~Dialog()
{
    delete ui;
}
///////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

//////////////////////СЛОТЫ///////////////////////////////////
void Dialog::newmenu() //
{
    clean();
}
///////////////////////////////////////////////////////////////


////////////////////функции\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

void Dialog::clean( )
{/*
    QLayoutItem *child;
     while ((child = this->layout()->takeAt(0)) != 0)
     {
         delete child->widget();
         delete child;
     }*/
}

///////////////////////////////////////////////////////////////

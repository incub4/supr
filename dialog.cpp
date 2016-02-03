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
    connect(ui->PB_preprocessor,SIGNAL(clicked(bool)),this,SLOT(close()));
//    connect(ui->PB_preprocessor,SIGNAL(clicked(bool)),this,SLOT(hide()));


//    connect(ui->PB__processor,SIGNAL(clicked(bool)),SLOT(newmenu()));
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::newmenu() //
{
    clean();
}


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

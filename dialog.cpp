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
//    connect(ui->PB_preprocessor,SIGNAL(clicked(bool)),this,SLOT(hide()));
    ui->PB_preprocessor->setStyleSheet("QPushButton:enabled { background-color: #d8c1ba; border-radius:5px;}"
                                       "QPushButton:hover { background-color: gray; color: white; }"
                                       "QPushButton:pressed { background-color: black; color: white;}"
                                       "QPushButton:disabled { background-color: white; border-radius:5px;}");

    ui->PB__processor->setStyleSheet("QPushButton:enabled { background-color: #d8c1ba; border-radius:5px;}"
                                     "QPushButton:hover { background-color: gray; color: white; }"
                                     "QPushButton:pressed { background-color: black; color: white;}"
                                     "QPushButton:disabled { background-color: white; border-radius:5px;}");

    ui->PB_postproc->setStyleSheet("QPushButton:enabled { background-color: #d8c1ba; border-radius:5px;}"
                                   "QPushButton:hover { background-color: gray; color: white; }"
                                   "QPushButton:pressed { background-color: black; color: white;}"
                                   "QPushButton:disabled { background-color: white; border-radius:5px;}");


    QPixmap pixmap("D:/Desktop/background.png");
    ui->label->setPixmap(pixmap);

//    connect(ui->PB__processor,SIGNAL(clicked(bool)),SLOT(newmenu()));
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

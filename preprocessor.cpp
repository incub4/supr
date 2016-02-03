#include "preprocessor.h"
#include "ui_preprocessor.h"

preprocessor::preprocessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preprocessor)
{
    line=1;
    q=0;
    F=0;
    opora=0;
    ui->setupUi(this);
    ui->table_kernel->setFixedSize(600,175);
    ui->plus_minus->setFixedSize(44,20);
    ui->table_kernel->resizeColumnsToContents();
    ui->table_load_q->resizeColumnsToContents();

    ui->up_line->setFixedSize(620,21);
    ui->middle_line->setFixedSize(620,21);
    ui->middle_line_2->setFixedSize(620,21);



    connect(ui->PB_back,SIGNAL(clicked(bool)),this,SLOT(backToMenu()));
    connect(ui->PB_back,SIGNAL(clicked(bool)),this,SLOT(close()));

    connect(ui->add_line,SIGNAL(clicked(bool)),this,SLOT(addline())); // Добавляем стержень
    connect(ui->delite_line,SIGNAL(clicked(bool)),this,SLOT(deliteline())); //Удалить стержень

    connect(ui->PB_plus_q,SIGNAL(clicked(bool)),this,SLOT(addLoad_q()));
    connect(ui->PB_plus_q,SIGNAL(clicked(bool)),this,SLOT(delLoad_q()));

    //    connect(ui->PB_close,SIGNAL(clicked(bool)),widget,SLOT(show()));
    //    ui->table_kernel->setRowCount(10);


}

preprocessor::~preprocessor()
{
    delete ui;
}

void preprocessor::backToMenu()
{
    Dialog *win = new Dialog;
    win->show();
}

void preprocessor::addline()
{
    line++;
    ui->table_kernel->setRowCount(line);
    qDebug() << line;
}

void preprocessor::deliteline()
{
    if(line>=2)
        line--;
    ui->table_kernel->setRowCount(line);
    qDebug() << line;
}

void preprocessor::addLoad_q()
{
    q++;
    ui->table_load_q->setRowCount(q);
    qDebug() << q;
}

void preprocessor::delLoad_q()
{
    if(q>=1)
        q--;
    ui->table_load_q->setRowCount(q);
    qDebug() << q;
}



#include "preprocessor.h"
#include "ui_preprocessor.h"
#include <QDebug>
#include <QIcon>
preprocessor::preprocessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preprocessor)
{
    line=1;
    ui->setupUi(this);
    ui->table_kernel->setFixedSize(600,175);
    ui->plus_minus->setFixedSize(44,20);
    ui->table_kernel->resizeColumnsToContents();
    ui->table__load->resizeColumnsToContents();

    ui->up_line->setFixedSize(620,21);
    ui->middle_line->setFixedSize(620,21);
    ui->middle_line_2->setFixedSize(620,21);




    connect(ui->add_line,SIGNAL(clicked(bool)),this,SLOT(addline()));
    connect(ui->delite_line,SIGNAL(clicked(bool)),this,SLOT(deliteline()));
    connect(ui->PB_close,SIGNAL(clicked(bool)),this,SLOT(close()));

//    connect(ui->PB_close,SIGNAL(clicked(bool)),widget,SLOT(show()));
    //    ui->table_kernel->setRowCount(10);


}

preprocessor::~preprocessor()
{
    delete ui;
}

void preprocessor::addline()
{

    //    static int i=1;

    line++;
    ui->table_kernel->setRowCount(line);
    qDebug() << line;
}

void preprocessor::deliteline()
{

    //    static int i = ui->table_kernel->rowCount();
    if(line>=2)
        line--;
    ui->table_kernel->setRowCount(line);
    qDebug() << line;
}



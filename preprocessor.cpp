#include "preprocessor.h"
#include "ui_preprocessor.h"
#include <QDebug>
preprocessor::preprocessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preprocessor)
{
    line=1;
    ui->setupUi(this);
    ui->table_kernel->resizeColumnsToContents();
    ui->table__load->resizeColumnsToContents();
    connect(ui->add_line,SIGNAL(clicked(bool)),this,SLOT(addline()));
    connect(ui->delite_line,SIGNAL(clicked(bool)),this,SLOT(deliteline()));
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
    if(line>=1)
        line--;
    ui->table_kernel->setRowCount(line);
    qDebug() << line;
}



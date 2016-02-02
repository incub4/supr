#include "preprocessor.h"
#include "ui_preprocessor.h"
#include <QDebug>
preprocessor::preprocessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preprocessor)
{
    line=1;
    ui->setupUi(this);
    ui->tableWidget->resizeColumnsToContents();
    connect(ui->add_line,SIGNAL(clicked(bool)),this,SLOT(addline()));
    connect(ui->delite_line,SIGNAL(clicked(bool)),this,SLOT(deliteline()));
//    ui->tableWidget->setRowCount(10);

}

preprocessor::~preprocessor()
{
    delete ui;
}

void preprocessor::addline()
{

//    static int i=1;
    line++;
    ui->tableWidget->setRowCount(line);
qDebug() << line;
}

void preprocessor::deliteline()
{

//    static int i = ui->tableWidget->rowCount();
    if(line>=1)
        line--;
    ui->tableWidget->setRowCount(line);
qDebug() << line;
}



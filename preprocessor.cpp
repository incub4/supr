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
    ui->plus_minus_2->setFixedSize(44,20);
    ui->plus_minus_3->setFixedSize(44,20);
    ui->plus_minus_4->setFixedSize(44,20);

    ui->table_kernel->resizeColumnsToContents();
    ui->table_load_q->resizeColumnsToContents();

    ui->up_line->setFixedSize(620,21);
    ui->middle_line->setFixedSize(620,21);
    ui->middle_line_2->setFixedSize(620,21);



    connect(ui->PB_back,SIGNAL(clicked(bool)),this,SLOT(backToMenu())); // открытие выбора процессора

    // Добавление стержней
    connect(ui->add_line,SIGNAL(clicked(bool)),this,SLOT(addline())); // Добавляем стержень
    connect(ui->delite_line,SIGNAL(clicked(bool)),this,SLOT(deliteline())); //Удалить стержень

    // добавление нагрузок
    connect(ui->PB_plus_q,SIGNAL(clicked(bool)),this,SLOT(addLoad_q()));//add
    connect(ui->PB_minus_q,SIGNAL(clicked(bool)),this,SLOT(delLoad_q()));//delite

    connect(ui->PB_plus_F,SIGNAL(clicked(bool)),this,SLOT(addLoad_F()));//add
    connect(ui->PB_minus_F,SIGNAL(clicked(bool)),this,SLOT(delLoad_F()));//delite

    connect(ui->PB_plus_opora,SIGNAL(clicked(bool)),this,SLOT(addLoad_opora()));//add
    connect(ui->PB_minus_opora,SIGNAL(clicked(bool)),this,SLOT(delLoad_opora()));//delite

}

void preprocessor::backToMenu()
{
    Dialog *win = new Dialog;
    win->show();
    this->close();
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
    qDebug() <<"q:" << q;
}

void preprocessor::delLoad_q()
{
    if(q>=1)
        q--;
    ui->table_load_q->setRowCount(q);
    qDebug() <<"q:" << q;
}

void preprocessor::addLoad_F()
{
    F++;
    ui->table_load_F->setRowCount(F);
    qDebug() <<"F:" << F;
}

void preprocessor::delLoad_F()
{
    if(F>=1)
        F--;
    ui->table_load_F->setRowCount(F);
    qDebug() <<"F:" << F;
}

void preprocessor::addLoad_opora()
{
    opora++;
    ui->table_load_opora->setRowCount(opora);
    qDebug() <<"opora:" << opora;
}

void preprocessor::delLoad_opora()
{
    if(opora>=1)
        opora--;
    ui->table_load_opora->setRowCount(opora);
    qDebug() <<"opora:" << opora;
}

preprocessor::~preprocessor()
{
    delete ui;
}

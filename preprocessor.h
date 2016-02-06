#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <QDialog>
#include <QDebug>
#include <QIcon>
#include "dialog.h"
#include "construction.h"

namespace Ui {
class preprocessor;
}

class preprocessor : public QDialog
{
    Q_OBJECT

public:
    explicit preprocessor(QWidget *parent = 0);
    ~preprocessor();

private:
    Ui::preprocessor *ui;
    int line,q,F,opora; // кол-во строк втаблицах стержней и нагрузок
    Construction* constr; //Виджет конструкции, где и происходитвся отрисовка

private slots:
//    void saveFile(); //Сохранение файла
//    void openFile(); //Открытие файла

    void addline();   //добавить стержень
    void deliteline();//удалить стержень

    void backToMenu(); //Возврат в меню выбора процессоров
    void addLoad_q(); //Добавляем нагрузку q
    void addLoad_F(); //Добавляем нагрузку F
    void addLoad_opora(); //Добавляем нагрузку opora
    void delLoad_q(); //Удалить нагрузку q
    void delLoad_F(); //Удалить нагрузку F
    void delLoad_opora(); //Удалить нагрузку opora
};

#endif // PREPROCESSOR_H

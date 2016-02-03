#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <QDialog>
#include <QDebug>
#include <QIcon>
#include "dialog.h"

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
     int line; // кол-во строк
     int q;
     int F;
     int opora;

public slots:
    void addline();
    void deliteline();
    void backToMenu(); //Возврат в меню выбора процессоров
    void addLoad_q(); //Добавляем нагрузку
//    void addLoad_F(); //Добавляем нагрузку
//    void addLoad(); //Добавляем нагрузку
    void delLoad_q(); //Удалить нагрузку
//    void delLoad_F(); //Удалить нагрузку
//    void delLoad(); //Удалить нагрузку
};

#endif // PREPROCESSOR_H

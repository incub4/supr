#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

#include <QDialog>


#include "ui_dialog.h"
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
     int line;
     Ui::Dialog *widget;
public slots:
    void addline();
    void deliteline();
};

#endif // PREPROCESSOR_H

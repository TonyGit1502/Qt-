#ifndef THREEFORM_H
#define THREEFORM_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFormLayout>
#include <QLineEdit>

class ThreeForm : public QWidget
{
    Q_OBJECT
public:
    explicit ThreeForm(QWidget *parent = 0);
    
    QLineEdit *name;
    QPushButton *okEmet;
signals:
    void onOkSaveToHide();
    
public slots:
};

#endif // THREEFORM_H

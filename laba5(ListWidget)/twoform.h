#ifndef TWOFORM_H
#define TWOFORM_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include <QListWidgetItem>
#include <QFormLayout>
#include <QLineEdit>

#include "threeform.h"

class TwoForm : public QWidget
{
    Q_OBJECT
public:
    explicit TwoForm(QWidget *parent = 0);
    
    QListWidget *m_list;
    QPushButton *add_Item;
    QPushButton *del_item;
    QPushButton *saveForm;
    QLineEdit *nameFamily;
    QVector <ThreeForm*> m_threeForm;
signals:
    void SAVE();
public slots:
    void onAddItem();
    void onDelItem();
    void appendVector();
};

#endif // TWOFORM_H

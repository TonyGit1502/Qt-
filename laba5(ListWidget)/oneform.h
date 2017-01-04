#ifndef ONEFORM_H
#define ONEFORM_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include <QListWidgetItem>

#include "twoform.h"

class OneForm : public QWidget
{
    Q_OBJECT
    
public:
    OneForm(QWidget *parent = 0);
    ~OneForm();
    QListWidget *m_list;
    QPushButton *add_item;
    QVector <TwoForm*> m_twoForm;
    TwoForm *new_TwoForm;
public slots:
    void onAddItem();
    void onNewItem();
};

#endif // ONEFORM_H

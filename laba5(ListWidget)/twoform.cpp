#include "twoform.h"

TwoForm::TwoForm(QWidget *parent) : QWidget(parent)
{
    m_list =new QListWidget();
    nameFamily =new QLineEdit();
    add_Item =new QPushButton("addItem");
    del_item =new QPushButton("delItem");
    saveForm =new QPushButton("saveForm");
    QVBoxLayout *lay_this =new QVBoxLayout;
    
    QFormLayout *lay_familyName =new QFormLayout;
    lay_familyName->addRow("Фамилия: ", nameFamily);
    lay_this->addLayout(lay_familyName);
    
    lay_this->addWidget(m_list);
    lay_this->addWidget(add_Item);
    lay_this->addWidget(del_item);
    lay_this->addWidget(saveForm);
    this->setLayout(lay_this);
    
    
    connect(add_Item, SIGNAL(clicked(bool)), this, SLOT(onAddItem()));
    connect(del_item, SIGNAL(clicked(bool)), this, SLOT(onDelItem()));
    connect(saveForm, SIGNAL(clicked(bool)), this, SIGNAL(SAVE()));
}


void TwoForm::onAddItem()
{    
     m_threeForm.append(new ThreeForm());
     m_threeForm.last()->show();
     connect(m_threeForm.last(), SIGNAL(onOkSaveToHide()), this, SLOT(appendVector()));
}

void TwoForm::onDelItem()
{
    delete m_list->currentItem();
}

void TwoForm::appendVector()
{    
    m_threeForm.last()->okEmet->hide();
    QListWidgetItem *item =new QListWidgetItem(m_list);
    item->setSizeHint(m_threeForm.last()->size());
    
    m_list->setItemWidget(item, m_threeForm.last());
    m_threeForm.last()->hide();
}

#include "oneform.h"

OneForm::OneForm(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *lay_this =new QVBoxLayout;
    
    m_list =new QListWidget();
    add_item =new QPushButton("add");
    
    lay_this->addWidget(m_list);
    lay_this->addWidget(add_item);
    this->setLayout(lay_this);

    connect(add_item, SIGNAL(clicked(bool)), this, SLOT(onAddItem()));
}

OneForm::~OneForm()
{
    
}

void OneForm::onAddItem()
{
    m_twoForm.append(new TwoForm());
    connect(m_twoForm.last(), SIGNAL(SAVE()), this, SLOT(onNewItem()));

    m_twoForm.last()->show();
}

void OneForm::onNewItem()
{

    QListWidgetItem *item =new QListWidgetItem(m_list);
    item->setSizeHint(QSize(200,300));
    m_list->setItemWidget(item, m_twoForm.last());
    m_twoForm.last()->saveForm->hide();
    m_twoForm.last()->hide();
}


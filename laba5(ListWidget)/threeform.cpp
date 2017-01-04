#include "threeform.h"

ThreeForm::ThreeForm(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *lay_this =new QVBoxLayout;
    
    name =new QLineEdit();
    okEmet =new QPushButton("Save");
    
    lay_this->addWidget(name);
    lay_this->addWidget(okEmet);
    
    this->setLayout(lay_this);
    connect(okEmet, SIGNAL(clicked(bool)), this, SIGNAL(onOkSaveToHide()));
}

#include "city.h"

city::city(QWidget *parent)
    : QWidget(parent)
{/*
    hbl_1 = new QHBoxLayout();
    hbl_2 = new QHBoxLayout();*/
    vbl_1 = new QFormLayout();
    ln_1 = new QLineEdit();
    ln_2 = new QLineEdit();
    ln_3 = new QLineEdit();
    label_1 = new QLabel("Название:");
    label_2 = new QLabel("Дата основания:");
    label_3 = new QLabel("Население:");
    label_4 = new QLabel("Площадь:");
    label_5 = new QLabel("Герб:");
    cBox_1 = new QComboBox();
    clw_1 = new QDateEdit();
    button_1 =new QPushButton("Выберите файл");


    vbl_1->addWidget(label_1);
    vbl_1->addWidget(ln_1);
    vbl_1->addWidget(label_2);
    vbl_1->addWidget(clw_1);
    vbl_1->addWidget(label_3);
    vbl_1->addWidget(ln_2);
    vbl_1->addWidget(label_4);
    vbl_1->addWidget(ln_3);
    vbl_1->addWidget(label_5);
    vbl_1->addWidget(button_1);


    this->setLayout(vbl_1);
}

city::~city()
{
}

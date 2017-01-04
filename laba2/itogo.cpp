#include "itogo.h"
#include "city.h"
#include "sights.h"


#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

itogo::itogo(QWidget *parent) : QWidget(parent)
{
    city *c1 = new city();
    sights *s1 = new sights();
    b1 = new QPushButton("Click me");

    QHBoxLayout *h1 = new QHBoxLayout;
    QHBoxLayout *h2 = new QHBoxLayout;
    h1->addWidget(c1);
//    h1->addWidget(s1);
    h1->addWidget(b1);

    QLabel *label_1 = new QLabel("Историческое название");
    QLabel *label_2 = new QLabel("Адрес");

    h2->addWidget(label_1);
    h2->addWidget(label_2);

    v1 = new QVBoxLayout;
    v1->addLayout(h1);
    v1->addLayout(h2);
    this->setLayout(v1);

    connect(b1, SIGNAL(clicked()), this, SLOT(qwerty()));
}

void itogo::qwerty(){
    v1->addWidget(new sights());
}

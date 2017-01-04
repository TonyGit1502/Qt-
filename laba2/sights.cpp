#include "sights.h"

sights::sights(QWidget *parent) : QWidget(parent)
{
    g = new QGridLayout();
    e1 = new QLineEdit();
    e2 = new QLineEdit();

    g->addWidget(e1, 0, 0);
    g->addWidget(e2, 0, 1);

    this->setLayout(g);
}

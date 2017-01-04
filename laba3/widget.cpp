#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    ln1 = new QLineEdit(this);
    ln2 = new QLineEdit(this);
    ln3 = new QLineEdit(this);
    //ln4 = new QLineEdit(this);
    label = new QLabel("Hello");
    b1 =new QPushButton("Separate");
    b2 =new QPushButton("Unite");
    b3 =new QPushButton("Enlarge");
    b4 =new QPushButton("Reduse");
    b5 =new QPushButton("Change color");
    b6 =new QPushButton("Fill");

    connect(b1, SIGNAL(clicked()), this, SLOT(separate()));
    connect(b2, SIGNAL(clicked()), this, SLOT(unite()));
    connect(b3, SIGNAL(clicked()), this, SLOT(sizeUp()));
    connect(b4, SIGNAL(clicked()), this, SLOT(sizeDown()));
    connect(b5, SIGNAL(clicked()), this, SLOT(textColorChange()));
    connect(b6, SIGNAL(clicked()), this, SLOT(fill()));

    gd1 = new QGridLayout;
    hb1 = new QHBoxLayout;
    hb2 = new QHBoxLayout;
    hb3 = new QHBoxLayout;
    vb1 = new QVBoxLayout;

    hb1->addWidget(ln1);
    hb1->addWidget(ln2);
    hb1->addWidget(ln3);

    hb2->addWidget(b1);
    hb2->addWidget(b2);

//    hb3->addWidget(ln4);
    hb3->addWidget(label);
    hb3->addWidget(b3);
    hb3->addWidget(b4);
    hb3->addWidget(b5);

    vb1->addLayout(hb1);
    vb1->addLayout(hb2);
    vb1->addLayout(hb3);
    vb1->addWidget(b6);

    this->setLayout(vb1);

}

Widget::~Widget()
{

}

void Widget::separate(){
    QString a1 = ln1->text();
    QString arr1;
    QString arr2;

    if(a1.length() % 2==0){
        arr1 = a1.mid(0, a1.length()/2);
        arr2 = a1.right(a1.length()/2);
    }
    else{
        arr1 = a1.mid(0, a1.length()/2 + 1);
        arr2 = a1.right(a1.length()/2);
    }
    ln2->setText(arr1);
    ln3->setText(arr2);

}

void Widget::unite(){
    QString q1 = ln2->text();
    QString q2 = ln3->text();

    QString q3 = q1+q2;
    ln1->setText(q3);
}

void Widget::sizeUp(){
//    QString w1 = ln4->text();
    QFont font = label->font();
    font.setPointSize(26);
    label->setFont(font);
}

void Widget::sizeDown(){
    QFont font = label->font();
    font.setPointSize(14);
    label->setFont(font);
}

void Widget::textColorChange(){
    label->setStyleSheet("color:red;");
}

void Widget::fill(){
    label->setStyleSheet("background: green;");
}


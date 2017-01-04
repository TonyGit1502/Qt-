#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setting = new QSettings("C:/Users/Anton/Desktop/setting.ini", QSettings::IniFormat);
    //обяъвлениеPushButton'ов
    mButton = new QPushButton("Сохранить");
    rButton = new QPushButton("Чтение из файла");
    b1 = new QPushButton("Выбрать");
    b2 = new QPushButton("Выбрать");
    b3 = new QPushButton("Выбрать");

    //объявление Checkbox'ов
    cb1 = new QCheckBox("1");
    cb2 = new QCheckBox("2");
    cb3 = new QCheckBox("3");
    cb4 = new QCheckBox("4");
    cb5 = new QCheckBox("5");
    cb6 = new QCheckBox("6");

    //объявление RadioButton'ов
    rb1 = new QRadioButton("Red");
    rb2 = new QRadioButton("Green");
    rb3 = new QRadioButton("Blue");
    rb4 = new QRadioButton("Light");

    // объявление label'ов
    label_1 = new QLabel("RadioButton");
    label_2 = new QLabel("Images");
    label_3 = new QLabel("Checkbox");
    l1 = new QLabel;
    l2 = new QLabel;
    l3 = new QLabel;
    l4 = new QLabel;

    // объявление layout'ов
    vbl1 = new QVBoxLayout;
    vbl2 = new QVBoxLayout;
    vbl3 = new QVBoxLayout;
    vbl4 = new QVBoxLayout;

    hbl1 = new QHBoxLayout;
    hbl2 = new QHBoxLayout;
    hbl3 = new QHBoxLayout;
    hbl4 = new QHBoxLayout;
    hbl5 = new QHBoxLayout;
    hbl6 = new QHBoxLayout;
    hbl7 = new QHBoxLayout;
    hbl8 = new QHBoxLayout;

    //компановка
    hbl1->addWidget(label_1);
    hbl1->addWidget(label_2);
    hbl1->addWidget(label_3);

    vbl1->addWidget(rb1);
    vbl1->addWidget(rb2);
    vbl1->addWidget(rb3);
    vbl1->addWidget(rb4);

    hbl2->addWidget(l1);
    hbl2->addWidget(b1);
    vbl2->addLayout(hbl2);
    hbl3->addWidget(l2);
    hbl3->addWidget(b2);
    vbl2->addLayout(hbl3);
    hbl4->addWidget(l3);
    hbl4->addWidget(b3);
    vbl2->addLayout(hbl4);

    hbl5->addWidget(cb1);
    hbl5->addWidget(cb2);
    vbl3->addLayout(hbl5);
    hbl6->addWidget(cb3);
    hbl6->addWidget(cb4);
    vbl3->addLayout(hbl6);
    hbl7->addWidget(cb5);
    hbl7->addWidget(cb6);
    vbl3->addLayout(hbl7);
    vbl3->addWidget(b3);

    hbl8->addLayout(vbl1);
    hbl8->addLayout(vbl2);
    hbl8->addLayout(vbl3);

    vbl4->addLayout(hbl1);
    vbl4->addLayout(hbl8);
    vbl4->addWidget(mButton);
    vbl4->addWidget(rButton);

    this->setLayout(vbl4);

    // connect'ы
    connect(mButton, SIGNAL(clicked()), this, SLOT(writeToFile()));
    connect(rButton, SIGNAL(clicked()), this, SLOT(readFromFile()));
    connect(b1, SIGNAL(clicked()), this, SLOT(selectFile()));
    connect(b2, SIGNAL(clicked()), this, SLOT(selectFile()));
    connect(b3, SIGNAL(clicked()), this, SLOT(selectFile()));

}

Widget::~Widget()
{

}
void Widget::writeToFile(){

    setting->setValue("rb1", rb1->isChecked());
    setting->setValue("rb2", rb2->isChecked());
    setting->setValue("rb3", rb3->isChecked());
    setting->setValue("rb4", rb4->isChecked());

    setting->setValue("cb1", cb1->isChecked());
    setting->setValue("cb2", cb2->isChecked());
    setting->setValue("cb3", cb3->isChecked());
    setting->setValue("cb4", cb4->isChecked());
    setting->setValue("cb5", cb5->isChecked());
    setting->setValue("cb6", cb6->isChecked());
}

void Widget::readFromFile(){

    rb1->setChecked(setting->value("rb1").toBool());
    rb2->setChecked(setting->value("rb2").toBool());
    rb3->setChecked(setting->value("rb3").toBool());
    rb4->setChecked(setting->value("rb4").toBool());

    cb1->setChecked(setting->value("cb1").toBool());
    cb2->setChecked(setting->value("cb2").toBool());
    cb3->setChecked(setting->value("cb3").toBool());
    cb4->setChecked(setting->value("cb4").toBool());
    cb5->setChecked(setting->value("cb5").toBool());
    cb6->setChecked(setting->value("cb6").toBool());
}

//void Widget::selectFile(){
//    QObject *bName = QObject::sender();

//    if(bName == b1){
//        fileName_1 = QFileDialog::getOpenFileName(this,
//                                                QString::fromUtf8("Открыть файл"),
//                                                QDir::currentPath(),
//                                                "Images (*.png *.xpm *.jpg);;All files (*.*)");
//        QPixmap pix_1;
//        pix_1.load(fileName_1);
//        l1->setPixmap(pix_1);
//    }

//    if(bName == b2){
//        fileName_2 = QFileDialog::getOpenFileName(this,
//                                                QString::fromUtf8("Открыть файл"),
//                                                QDir::currentPath(),
//                                                "Images (*.png *.xpm *.jpg);;All files (*.*)");
//        QPixmap pix_2;
//        pix_2.load(fileName_2);
//        l2->setPixmap(pix_2);
//    }

//    if(bName == b3){
//        fileName_3 = QFileDialog::getOpenFileName(this,
//                                                QString::fromUtf8("Открыть файл"),
//                                                QDir::currentPath(),
//                                                "Images (*.png *.xpm *.jpg);;All files (*.*)");
//        QPixmap pix_3;
//        pix_3.load(fileName_3);
//        l3->setPixmap(pix_3);
//    }
//}

#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    tableWidget = new QTableWidget();
    vbl_1 = new QVBoxLayout();
    hbl_1 = new QHBoxLayout();
    label = new QLabel("Table of car sales");
    label->setStyleSheet("font-style:italic; text-transform:uppercase; font-weight:bold; font-size:18px;");
    label->setAlignment(Qt::AlignCenter);
    button1 = new QPushButton("Save");
    button2 = new QPushButton("Load");

    tableWidget->setColumnCount(3);
    tableWidget->setRowCount(4);
    tableWidget->setHorizontalHeaderLabels(columnName<<"Mark1"<<"Mark2"<<"Mark3");
    tableWidget->setVerticalHeaderLabels(rowName<<"Mr.Green"<<"Mr.Blue"<<"Mr.Brown"<<"Mrs.White");

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            QTableWidgetItem *twi_1 = new QTableWidgetItem();
            twi_1->setText("Click me");
            tableWidget->setItem(i,j,twi_1);
        }
    }

    hbl_1->addWidget(button1);
    hbl_1->addWidget(button2);
    vbl_1->addWidget(label);
    vbl_1->addWidget(tableWidget);
    vbl_1->addLayout(hbl_1);

    this->setLayout(vbl_1);

    connect(button1, SIGNAL(clicked()), this, SLOT(saveFile()));
    connect(button2, SIGNAL(clicked()), this, SLOT(loadFile()));
    connect(tableWidget, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(cellChange()));
}

Widget::~Widget()
{

}

void Widget::saveFile(){
    QFile file("C://Users//Anton//Desktop//file.txt");

    if(!file.open(QIODevice::WriteOnly)){
        QMessageBox::information(this, "Error", "Fatality!!!");
    }
    else{
        QTextStream tStream(&file);
        QString m_text;
        for(int i=0; i<rowName.length(); i++){
            for(int j=0; j<columnName.length(); j++){
                m_text.clear();
                QTableWidgetItem *u = new QTableWidgetItem;
                u->setText(QString("%1").arg(tableWidget->item(i,j)->text()));
                if(NULL != u){
                    m_text = u->text();
                }
                tStream<<m_text;
                tStream<<";";
                tStream<<"\r\n";
            }
            tStream<<"\n";
        }
        file.close();
        QMessageBox::information(this, "", "File successfully written");
    }
}

void Widget::loadFile(){

    QFile file("C://Users//Anton//Desktop//file.txt");
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(this, "Error", "Fatality!!!");
    }
    else{
        QString str = file.readAll();
        QStringList arr = str.split(";");

        int k=0;

        for(int i=0; i<rowName.length(); i++){
            for(int j=0; j<columnName.length(); j++){
                QTableWidgetItem *twi1 = new QTableWidgetItem();
                twi1->setText(arr.at(k));
                tableWidget->setItem(i,j,twi1);
                k++;
            }
        }
        file.close();
        QMessageBox::information(this, "", "File read successfully");
    }
}

void Widget::cellChange(){
    //объявление диалогового окна и его компонентов
    dialogWidget = new QWidget();
    listWidget = new QListWidget();
    QVBoxLayout *dialogVBL_1 = new QVBoxLayout();
    QHBoxLayout *dialogHBL_1 = new QHBoxLayout();
    QHBoxLayout *dialogHBL_2 = new QHBoxLayout();
    QPushButton *button_1 = new QPushButton("Select a picture");
    QPushButton *button_2 = new QPushButton("Close");
    QLabel *label_1 = new QLabel();
    QLabel *label_2 = new QLabel();
    QLabel *titleDialogWidget = new QLabel("The picture of the car");
    titleDialogWidget->setStyleSheet("font-style:italic; font-size:18px; font-weight: bold;");

    //компановка
    dialogVBL_1->addWidget(titleDialogWidget);
    dialogHBL_1->addWidget(label_1);
    dialogHBL_1->addWidget(label_2);
    dialogVBL_1->addLayout(dialogHBL_1);
    dialogVBL_1->addWidget(listWidget);
    dialogHBL_2->addWidget(button_1);
    dialogHBL_2->addWidget(button_2);
    dialogVBL_1->addLayout(dialogHBL_2);

    dialogWidget->setLayout(dialogVBL_1);
    dialogWidget->show();

    //connect'ы
    connect(button_1, SIGNAL(clicked()), this, SLOT(changeImage()));
    connect(button_2, SIGNAL(clicked()), this, SLOT(closeForm()));

    // вывод фамилии продавца и марки авто
    currentColumn = tableWidget->currentColumn();
    currentRow = tableWidget->currentRow();

    for(int i=0; i<columnName.length(); i++){
        if(i==currentColumn)
            autoName=columnName.at(i);
    }
    for(int i=0; i<rowName.length(); i++){
        if(i==currentRow)
            sellerName=rowName.at(i);
    }
    label_1->setText(QString("Seller: %1").arg(sellerName));
    label_2->setText(QString("Car brend: %1").arg(autoName));

}

void Widget::changeImage(){
    filePath.clear();
    filePath = QFileDialog::getOpenFileName(this, tr("Open File"),
                                            "/home",
                                            tr("Images (*.png *.xpm *.jpg)"));
    QListWidgetItem *lwi_1 = new QListWidgetItem();
    lwi_1->setIcon(QIcon(filePath));
    lwi_1->setText(filePath);
    listWidget->insertItem(0, lwi_1);
}

void Widget::closeForm(){
    tableWidget->item(currentRow, currentColumn)->setBackground(QBrush(QImage(filePath)));
    tableWidget->currentItem()->setText(filePath);
    dialogWidget->close();
}

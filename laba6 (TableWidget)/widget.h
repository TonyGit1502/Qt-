#ifndef WIDGET_H
#define WIDGET_H

#include <QFile>
#include <QLabel>
#include <QWidget>
#include <QDataStream>
#include <QTextStream>
#include <QMessageBox>
#include <QStringList>
#include <QFileDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include <QTableWidget>
#include <QListWidgetItem>
#include <QTableWidgetItem>


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
    QVBoxLayout *vbl_1, *vbl_2, *vbl_3, *vbl_4;
    QHBoxLayout *hbl_1, *hbl_2, *hbl_3, *hbl_4;
    QPushButton *button1, *button2;
    QTableWidget *tableWidget;
    QListWidget *listWidget;
    QStringList columnName, rowName;
    QString autoName, sellerName, filePath;
    QLabel *label;
    QWidget *dialogWidget;
    int currentRow, currentColumn;

signals:
    void sendData(QString, QString);

public slots:
    void saveFile();
    void loadFile();
    void cellChange();
    void changeImage();
    void closeForm();
};

#endif // WIDGET_H

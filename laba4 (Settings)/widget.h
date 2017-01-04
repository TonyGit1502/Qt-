#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QObject>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QRadioButton>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QPixmap>
#include <QSettings>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private slots:
    void writeToFile();
    ///void selectFile();
    void readFromFile();

private:
    QPushButton *mButton, *rButton, *b1, *b2, *b3;
    QCheckBox *cb1, *cb2, *cb3, *cb4, *cb5, *cb6;
    QRadioButton *rb1, *rb2, *rb3, *rb4;
    QLabel *label_1, *label_2, *label_3;
    QLabel *l1, *l2, *l3, *l4;
    QString fileName_1, fileName_2, fileName_3;
    QVBoxLayout *vbl1, *vbl2, *vbl3, *vbl4;
    QHBoxLayout *hbl1, *hbl2, *hbl3, *hbl4, *hbl5, *hbl6, *hbl7, *hbl8;
    QSettings *setting;

};

#endif // WIDGET_H

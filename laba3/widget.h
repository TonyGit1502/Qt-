#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QFont>
#include <QFontInfo>
#include <QStringList>
#include <QGridLayout>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
public slots:

    void separate();
    void unite();
    void sizeUp();
    void sizeDown();
    void textColorChange();
    void fill();

private:

    QPushButton *b1, *b2, *b3, *b4, *b5, *b6;
    QLineEdit *ln1, *ln2, *ln3, *ln4;
    QVBoxLayout *vb1;
    QHBoxLayout *hb1, *hb2, *hb3;
    QGridLayout *gd1;
    QLabel *label;
};

#endif // WIDGET_H

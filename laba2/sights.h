#ifndef SIGHTS_H
#define SIGHTS_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

class sights : public QWidget
{
    Q_OBJECT
    public:
        explicit sights(QWidget *parent = 0);
        QGridLayout *g;
        QLineEdit *e1, *e2;
        QPushButton *b1;

    signals:

    public slots:
};

#endif // SIGHTS_H

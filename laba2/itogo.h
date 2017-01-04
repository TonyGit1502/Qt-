#ifndef ITOGO_H
#define ITOGO_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

class itogo : public QWidget
{
    Q_OBJECT
public:
    explicit itogo(QWidget *parent = 0);
    QVBoxLayout *v1;
private:
    QPushButton *b1;
private slots:
    void qwerty();
signals:

public slots:
};

#endif // ITOGO_H

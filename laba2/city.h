#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFormLayout>
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include <QDateEdit>
#include <QComboBox>
#include <QLineEdit>


class city : public QWidget
{
    Q_OBJECT
    private:

//        QHBoxLayout *hbl_1, *hbl_2;
        QFormLayout *vbl_1;
        QLabel *label_1, *label_2, *label_3, *label_4, *label_5;
        QComboBox *cBox_1;
        QLineEdit *ln_1, *ln_2, *ln_3;
        QDateEdit *clw_1;
        QPushButton *button_1;

    public:
        explicit city(QWidget *parent = 0);
        ~city();

    signals:

    public slots:
};

#endif // WIDGET_H

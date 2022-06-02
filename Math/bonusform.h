#ifndef BONUSFORM_H
#define BONUSFORM_H

#include <QWidget>
#include "shape.h"
#include "factorymaker.h"

namespace Ui {
class BonusForm;
}

class BonusForm : public QWidget
{
    Q_OBJECT

public:
    explicit BonusForm(QWidget *parent = nullptr);
    ~BonusForm();

    FactoryType get_factory();
    ShapeType get_shape();

private slots:
    void on_btn_OK_clicked();

signals:
    void btn_OK();

private:
    Ui::BonusForm *ui;
    FactoryType factory_type;
    ShapeType shape_type;
};

#endif // BONUSFORM_H

#include "shape2dcircle.h"
#include <QDebug>
#include "shape2dcircledialog.h"

bool Shape2DCircle::getCoordinate()
{
    Shape2DCircleDialog dialog;
    dialog.setModal(true);
    if (dialog.exec() == QDialog::Accepted)
    {
        qDebug() << stamp << dialog.x << "; " << dialog.y << "; " << dialog.radius;
        x = dialog.x;
        y = dialog.y;
        radius = dialog.radius;
        return true;
    }
    return false;
}

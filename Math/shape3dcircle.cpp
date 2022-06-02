#include "shape3dcircle.h"
#include <QDebug>
#include "shape3dcircledialog.h"

bool Shape3DCircle::getCoordinate()
{
    Shape3DCircleDialog dialog;
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

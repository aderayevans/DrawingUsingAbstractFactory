#include "shape3drect.h"
#include <QDebug>
#include "shape3drectdialog.h"
#include <QRectF>

bool Shape3DRect::getCoordinate()
{
    Shape3DRectDialog dialog;
    dialog.setModal(true);
    if (dialog.exec() == QDialog::Accepted)
    {
        qDebug() << stamp << dialog.x << "; " << dialog.y
                 << "; " << dialog.width << "; " << dialog.height;
        x = dialog.x;
        y = dialog.y;
        width = dialog.width;
        height = dialog.height;
        return true;
    }
    return false;
}

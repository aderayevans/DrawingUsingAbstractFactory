#include "shape2drect.h"
#include <QDebug>
#include "shape2drectdialog.h"

bool Shape2DRect::getCoordinate()
{
    Shape2DRectDialog dialog;
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

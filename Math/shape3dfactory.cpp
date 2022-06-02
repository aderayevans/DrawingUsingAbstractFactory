#include "shape3dfactory.h"
#include "shape3dcircle.h"
#include "shape3drect.h"
#include <QDebug>

Shape* Shape3DFactory::get_shape(ShapeType type)
{
    Shape* shape = nullptr;

    switch (type)
    {
        case Circle:
            shape = new Shape3DCircle();
            shape->stamp = this->stamp + "Circle";
            break;

        case Rect:
            shape = new Shape3DRect();
            shape->stamp = this->stamp + "Rect";
            break;
        default:
            break;
    }
    return shape;
}

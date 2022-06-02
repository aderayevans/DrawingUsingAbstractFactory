#include "shape2dfactory.h"
#include "shape2dcircle.h"
#include "shape2drect.h"

Shape* Shape2DFactory::get_shape(ShapeType type)
{
    Shape* shape = nullptr;

    switch (type)
    {
        case Circle:
            shape = new Shape2DCircle();
            shape->stamp = this->stamp + "Circle";
            break;

        case Rect:
            shape = new Shape2DRect();
            shape->stamp = this->stamp + "Rect";
            break;
        default:
            break;
    }
    return shape;
}

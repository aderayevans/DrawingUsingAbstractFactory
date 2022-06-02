#ifndef SHAPE2DRECT_H
#define SHAPE2DRECT_H

#include "shape.h"

class Shape2DRect : public Shape
{
public:
    bool getCoordinate() final;
//    float x, y, width, height;
};

#endif // SHAPE2DRECT_H

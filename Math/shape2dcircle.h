#ifndef SHAPE2DCIRCLE_H
#define SHAPE2DCIRCLE_H

#include "shape.h"

class Shape2DCircle : public Shape
{
public:
    bool getCoordinate() final;
//    float x, y, radius;
};

#endif // SHAPE2DCIRCLE_H

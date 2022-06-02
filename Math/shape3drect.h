#ifndef SHAPE3DRECT_H
#define SHAPE3DRECT_H

#include "shape.h"

class Shape3DRect : public Shape
{
public:
    bool getCoordinate() final;
//    float x, y, width, height;
};

#endif // SHAPE3DRECT_H

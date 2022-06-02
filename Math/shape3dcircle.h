#ifndef SHAPE3DCIRCLE_H
#define SHAPE3DCIRCLE_H

#include "shape.h"

class Shape3DCircle : public Shape
{
public:
    bool getCoordinate() final;
//    float x, y, radius;
};

#endif // SHAPE3DCIRCLE_H

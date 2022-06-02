#ifndef SHAPE_H
#define SHAPE_H

#include <QString>

enum ShapeType
{
    Circle,
    Rect
};

class Shape
{
public:
    virtual bool getCoordinate() = 0;

    float x, y, z, radius, width, height;

    QString stamp;
};

#endif // SHAPE_H

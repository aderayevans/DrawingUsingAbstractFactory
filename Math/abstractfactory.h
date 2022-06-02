#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "shape.h"

class AbstractFactory
{
public:
    virtual Shape* get_shape(ShapeType type) = 0;
};

#endif // ABSTRACTFACTORY_H

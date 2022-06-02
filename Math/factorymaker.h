#ifndef FACTORYMAKER_H
#define FACTORYMAKER_H

#include "shape.h"
#include "abstractfactory.h"

enum FactoryType
{
    Shape2D,
    Shape3D
};

class FactoryMaker
{
public:
    AbstractFactory* get_factory(FactoryType type);
};

#endif // FACTORYMAKER_H

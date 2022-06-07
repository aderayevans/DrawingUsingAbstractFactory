#ifndef FACTORYMAKER_H
#define FACTORYMAKER_H

#include "shape.h"
#include "abstractfactory.h"
#include "shape2dfactory.h"
#include "shape3dfactory.h"

enum FactoryType
{
    Shape2D,
    Shape3D
};

class FactoryMaker
{
public:
    AbstractFactory* get_factory(FactoryType type);

    Shape2DFactory shape2dfactory;
    Shape3DFactory shape3dfactory;
};

#endif // FACTORYMAKER_H

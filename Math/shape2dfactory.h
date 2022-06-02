#ifndef SHAPE2DFACTORY_H
#define SHAPE2DFACTORY_H

#include "shape.h"
#include "abstractfactory.h"
#include <QString>

class Shape2DFactory : public AbstractFactory
{
public:
    Shape* get_shape(ShapeType type) final;

    QString stamp = "Shape2D";
};

#endif // SHAPE2DFACTORY_H

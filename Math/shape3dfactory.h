#ifndef SHAPE3DFACTORY_H
#define SHAPE3DFACTORY_H

#include "shape.h"
#include "abstractfactory.h"
#include <QString>

class Shape3DFactory : public AbstractFactory
{
public:
    Shape* get_shape(ShapeType type) final;

    QString stamp = "Shape3D";
};

#endif // SHAPE3DFACTORY_H

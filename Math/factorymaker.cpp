#include "factorymaker.h"
#include "shape2dfactory.h"
#include "shape3dfactory.h"

AbstractFactory* FactoryMaker::get_factory(FactoryType type)
{
    AbstractFactory *factory = nullptr;
    switch (type)
    {
        case Shape2D:
            factory = new Shape2DFactory();
            break;
        case Shape3D:
            factory = new Shape3DFactory();
            break;
        default:
            break;
    }
    return factory;
}

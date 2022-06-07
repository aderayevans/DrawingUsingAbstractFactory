#include "factorymaker.h"

AbstractFactory* FactoryMaker::get_factory(FactoryType type)
{
//    AbstractFactory *factory = nullptr;
    switch (type)
    {
        case Shape2D:
            return &shape2dfactory;
        case Shape3D:
            return &shape3dfactory;
    }
    return &shape2dfactory;
}

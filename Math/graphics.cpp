#include "graphics.hpp"
#include <QPainter>
#include <QDebug>
#include "shape.h"

Graphics::Graphics(QWidget *parent)
    : QWidget{parent}
{
}

void Graphics::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
//    QRectF rect(0, 0, 100, 200);
//    painter.drawRect(rect);

//    QRectF rect2(200, 200, 100, 200);
//    painter.drawEllipse(QPointF(200, 100), 30, 30);

    for (auto shape:vectorOfShape)
    {
        if (shape->stamp == "Shape2DCircle")
        {
            painter.setBrush(QColor(255, 255, 255, 50));
//            qDebug() << "Drawing " << shape->stamp;
            painter.drawEllipse(QPointF(shape->x, shape->y), shape->radius, shape->radius);
        }
        else if (shape->stamp == "Shape2DRect")
        {
//            qDebug() << "Drawing " << shape->stamp;
            painter.setBrush(QColor(255, 255, 255, 50));
            painter.drawRect(shape->x, shape->y, shape->width, shape->height);
        }
        else if (shape->stamp == "Shape3DCircle")
        {
//            qDebug() << "Drawing " << shape->stamp;
            painter.setBrush(QColor(255, 0, 255, 50));
            painter.drawEllipse(QPointF(shape->x, shape->y), shape->radius, shape->radius);
        }
        else if (shape->stamp == "Shape3DRect")
        {
//            qDebug() << "Drawing " << shape->stamp;
            painter.setBrush(QColor(255, 0, 255, 50));
            painter.drawRect(shape->x, shape->y, shape->width, shape->height);
        }
    }

}

void Graphics::update(std::vector<Shape*> vectorOfShape)
{
    this->vectorOfShape.clear();
    for (auto shape:vectorOfShape)
        this->vectorOfShape.push_back(shape);

    this->repaint();
}
//void Graphics::paint2dCircle(float x, float y, float radius);
//static void paint3dCircle(float x, float y, float radius);
//static void paint2dRect(float x, float y, float width, float height);
//static void paint3dRect(float x, float y, float width, float height);

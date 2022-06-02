#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include <QWidget>
#include "shape.h"
#include <QPainter>
#include <vector>

class Graphics : public QWidget
{
    Q_OBJECT
public:
    explicit Graphics(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    void update(std::vector<Shape*>);

    std::vector<Shape*> vectorOfShape;

signals:

};

#endif // GRAPHICS_HPP

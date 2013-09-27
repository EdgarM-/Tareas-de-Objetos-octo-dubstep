#include <iostream>
#include "gui_fig.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>

Figura::Figura()
{
  setPos(posx,posy);
  setFlag(ItemIsFocusable);
  grabKeyboard();
}

QRectF Figura::boundingRect() const
{
  return QRectF(0,0,20,20);
}

QPainterPath Figura::shape() const
{
    QPainterPath path;
    path.addRect(0, 0, 20, 20);
    return path;
}

void Figura::paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
{
  painter->setBrush(QColor(5,5,210));
  QPen myPen(QColor(5,210,5));
  painter->setPen(myPen);
  //QRectF rect(0,0,20,20);
  painter->drawRect(0, 0, 20, 20);
  painter->setBrush(Qt::white);
  painter->drawRect(7, 1, 6, 6);

}

void Figura::moveDerecha()
{
  posx+=5;
}

void Figura::moveIzquierda()
{
  posx-=5;
}

void Figura::advance(int step)
{
  if (!step)
    return;
  posy+=1;
  setPos(posx,posy);
  if (posy>450)
    posy=100;
}

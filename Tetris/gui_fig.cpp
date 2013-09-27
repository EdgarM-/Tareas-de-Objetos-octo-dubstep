#include <iostream>
#include "gui_fig.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QStyleOption>

G_Figura::G_Figura()
{
  setPos(posx,posy);
  setFlag(ItemIsFocusable);
  grabKeyboard();
}

QRectF G_Figura::boundingRect() const
{
  return QRectF(0,0,20,20);
}

QPainterPath G_Figura::shape() const
{
    QPainterPath path;
    path.addRect(0, 0, 20, 20);
    return path;
}

void G_Figura::paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
{
  painter->setBrush(QColor(5,5,210));
  QPen myPen(QColor(5,210,5));
  painter->setPen(myPen);
  //QRectF rect(0,0,20,20);
  painter->drawRect(0, 0, 20, 20);
  painter->setBrush(Qt::white);
  painter->drawRect(7, 1, 6, 6);

}

void G_Figura::moveDerecha()
{
  posx+=5;
}

void G_Figura::moveIzquierda()
{
  posx-=5;
}

void G_Figura::advance(int step)
{
  if (!step)
    return;
  posy+=1;
  setPos(posx,posy);
  if (posy>450)
    posy=100;
}

#pragma once
#include <QtWidgets>
#include "gui_fig.h"
#include "ctrl.h"

class G_tablero
  : public QGraphicsView
{
  Q_OBJECT

  Controller ctrl;
  QGraphicsScene scene;
  QTimer timer;
  Figura currentFig;

public:
  G_tablero();
  virtual ~G_tablero() {}

protected:
  void keyPressEvent(QKeyEvent* event);

};

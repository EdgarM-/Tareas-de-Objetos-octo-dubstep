#pragma once
#include <QtWidgets>
#include "gui_fig.h"
#include "ctrl.h"

class G_tablero
  : public QGraphicsView
{
  Q_OBJECT

  QGraphicsScene scene;
  QTimer timer;
  G_Figura currentFig;

public:
  Controller ctrl;
  G_tablero();
  virtual ~G_tablero() {}

protected:
  void keyPressEvent(QKeyEvent* event);

};

#include <iostream>
#include "gui_tab.h"

G_tablero::G_tablero()
{
  scene.setSceneRect(0, 0, 400, 500);
  setScene(&scene);
  scene.addItem(&currentFig);
  setRenderHint(QPainter::Antialiasing);
  setWindowTitle("T3TRIS");
  resize(400,500);
  show();
  QObject::connect(&timer, &QTimer::timeout, &scene, &QGraphicsScene::advance);
  timer.start(1000 / 33);

}

void G_tablero::keyPressEvent(QKeyEvent *event)
{
//  std::cout << "key: " << event->key() << std::endl;

  switch (event->key()) {
    case Qt::Key_Left:
        currentFig.moveIzquierda();
        break;
    case Qt::Key_Right:
        currentFig.moveDerecha();
        break;
    default:
      QWidget::keyPressEvent(event);
  }
}

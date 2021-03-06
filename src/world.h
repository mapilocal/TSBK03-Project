/*****************************************************************
 * World is the class handling all objects that the game includes
*****************************************************************/

#ifndef WORLD_H
#define WORLD_H

#include "object.h"
#include "body.h"
#include "camera.h"

class World {
 protected:
 public:
  Camera cam;
  Body o;
  Body p;
  Body ground;

  Body test_shade;
  void update();
  void draw(int);
  // void choseObject();
  // void moveObject();
  // void removeObject();
  // void addObject(int);
  World();
};

#endif

#ifndef _Snake_Guy_
#define _Snake_Guy_

#include"common.h"

#include"functions.h"
#include"particle.h"

class SnakeGuy{
private:
  vitaRect rect1, rect2, rect3, rect4, rect5, rect6, rect7, rect8;
  vitaRect realTarget;
  bool rect1Active, rect2Active, rect3Active, rect4Active, rect5Active, rect6Active, rect7Active, rect8Active;
  bool spawning, pause, dying;
  int spawnCount, spawnRadius;
  int moveInterval, head;
  int targetTimer;
  Particle particles[15];
public:
  void init();
  void spawn(vitaRect levelRect);
  void spawn(vitaRect levelRect, int x, int y);
  void preSpawn();
  bool getSpawning();
  void die();
  vitaRect getRect1();
  vitaRect getRect2();
  vitaRect getRect3();
  vitaRect getRect4();
  vitaRect getRect5();
  vitaRect getRect6();
  vitaRect getRect7();
  vitaRect getRect8();
  bool getActive();
  bool getParticlesActive();
  int chooseDirection(vitaRect target);
  void move(vitaRect target);
  void moveRect1(vitaRect target);
  void moveRect2(vitaRect target);
  void moveRect3(vitaRect target);
  void moveRect4(vitaRect target);
  void moveRect5(vitaRect target);
  void moveRect6(vitaRect target);
  void moveRect7(vitaRect target);
  void moveRect8(vitaRect target);
  void moveBackX();
  void moveBackY();
  void moveBackX(double playerxVel);
  void moveBackY(double playeryVel);
  int newHead();
  bool takeDamage(vitaRect bullet, vitaRect target);
  bool hit(vitaRect bullet);
  void doStuff(vitaRect target, bool pause, vitaRect levelRect);
};

#endif

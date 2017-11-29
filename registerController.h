#ifndef _REGISTERCONTROLLER_H_
#define _REGISTERCONTROLLER_H_
#include "cashierView.h"
#include "StoreInventory.h"
#include "order.h"

class registerController: public Observable
{
private:
  StoreInventory *database;
  order *cart;
  cashierView screen;
  AnInt current;
  AlertView alerts;
public:
  registerController(StoreInventory *, order *);
  void processOrder();
  void update();
};

#endif

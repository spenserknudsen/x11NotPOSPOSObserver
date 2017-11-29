#ifndef _KEYPADCONTROLLER_H_
#define _KEYPADCONTROLLER_H_
#include "order.h"
#include "customerView.h"

class keypadController: public Observable
{
private:
  order *cart;
  customerView display;
  AnInt current;
  AlertView alerts;
public:
  keypadController(order *);
  void update();
};

#endif

#include "keypadController.h"

keypadController::keypadController(order * items)
{
  cart = items;
  display.refresh(*cart);
}

void keypadController::update(){
  output.showNum(current.getNum());
  alerts.checkAlerts(current.getNum());
}

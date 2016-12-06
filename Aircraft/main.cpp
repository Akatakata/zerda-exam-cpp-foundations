#include <iostream>

#include "F16.h"
#include "F35.h"
int main() {
  F16 aircraft1;
  F35 aircraft2;

  int ammo_rack = 27;
  aircraft1.refill(ammo_rack);
  std::cout << aircraft1.fight() << std::endl;
  std::cout << aircraft1.get_type() << std::endl;

  return 0;
}
#include <iostream>

#include "Carrier.h"
#include "F16.h"
#include "F35.h"

int main() {
  F16 aircraft1;
  F35 aircraft2;

  int ammo_rack = 44;
  std::cout << "refill" << std::endl;
  aircraft1.refill(ammo_rack);
  std::cout << aircraft1.get_ammo_amount() << std::endl;
  std::cout << aircraft1.get_status() << std::endl;
  /*std::cout << "fight" << std::endl;
  std::cout << aircraft1.fight() << std::endl;
  std::cout << aircraft1.get_status() << std::endl;
  std::cout << "refill" << std::endl;
  aircraft1.refill(ammo_rack);
  std::cout << aircraft1.get_status() << std::endl;*/

  Carrier carrier(200, 5000);
  return 0;
}
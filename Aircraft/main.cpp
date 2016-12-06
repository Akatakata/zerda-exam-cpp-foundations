#include <iostream>

#include "Carrier.h"
#include "F16.h"
#include "F35.h"

int main() {
  int ammo_rack = 44;
  Carrier carrier(200, 5000);
  carrier.add_aircraft("F36");

  /*
  std::cout << "refill" << std::endl;
  aircraft1.refill(ammo_rack);
  std::cout << "Only ammo:" << aircraft1.get_ammo_amount() << std::endl;
  std::cout << aircraft1.get_status() << std::endl;
  std::cout << "fight" << std::endl;
  std::cout << aircraft1.fight() << std::endl;
  std::cout << aircraft1.get_status() << std::endl;
  std::cout << "refill" << std::endl;
  aircraft1.refill(ammo_rack);
  std::cout << aircraft1.get_status() << std::endl;*/


  return 0;
}
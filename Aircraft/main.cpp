#include <iostream>

#include "Carrier.h"
#include "F16.h"
#include "F35.h"

int main() {
  Carrier carrier1(200, 800);
  carrier1.add_aircraft("F36");
  carrier1.add_aircraft("F35");
  carrier1.add_aircraft("F16");

  Carrier carrier2(120, 300);
  carrier2.add_aircraft("F35");
  carrier2.add_aircraft("F16");

  carrier1.fill();
  carrier1.get_status();
  carrier2.fill();
  carrier2.get_status();

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
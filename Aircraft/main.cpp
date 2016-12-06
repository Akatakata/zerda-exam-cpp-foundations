#include <iostream>

#include "Carrier.h"
#include "F16.h"
#include "F35.h"

int main() {
  // Checking fight and stats
  Carrier carrier1(200, 800);
  carrier1.add_aircraft("F16");
  carrier1.add_aircraft("F35");
  carrier1.add_aircraft("F35");

  Carrier carrier2(100, 700);
  carrier2.add_aircraft("F35");
  carrier2.add_aircraft("F16");

  std::cout << "Carrier1   attacking   Carrier2 - starting conditions:" << std::endl << std::endl;
  std::cout << "Carrier1:" << std::endl;
  carrier1.fill();
  carrier1.get_status();
  std::cout << "Carrier2:" << std::endl;
  carrier2.fill();
  carrier2.get_status();

  std::cout  << "---------->>>  FIGHT  <<<----------" << std::endl << std::endl;
  carrier1.fight(carrier2);

  std::cout << "Carrier1:" << std::endl;
  carrier1.get_status();
  std::cout << "Carrier2:" << std::endl;
  carrier2.get_status();

  //Checking no ammo exception
  Carrier carrier3(0, 200);
  std::cout << std::endl << "Filling Carrier3" << std::endl;
  carrier3.fill();

  return 0;
}
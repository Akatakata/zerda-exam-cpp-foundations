#include <iostream>

#include "Carrier.h"
#include "F16.h"
#include "F35.h"

int main() {
  Carrier carrier1(500, 800);
  carrier1.add_aircraft("F35");
  carrier1.add_aircraft("F35");
  carrier1.add_aircraft("F16");

  Carrier carrier2(120, 300);
  carrier2.add_aircraft("F35");
  carrier2.add_aircraft("F16");

  std::cout << "Carrier1   vs   Carrier2 - starting conditions:" << std::endl << std::endl;
  carrier1.get_status();
  carrier2.get_status();
  std::cout  << "FIGHT" << std::endl << std::endl;
  carrier1.fight(carrier2);
  carrier1.get_status();
  carrier2.get_status();

  return 0;
}
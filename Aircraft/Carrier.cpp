#include <iostream>
#include "Carrier.h"


Carrier::Carrier(int ammo_to_store, int initial_health_point) {
  ammo_storage = ammo_to_store;
  health_point = initial_health_point;
}

Carrier::~Carrier() { 
  for (int i = 0; i < carried_aircrafts.size(); i++) {
    delete carried_aircrafts[i];
  }
}

void Carrier::add_aircraft(std::string type) {
  if (type == "F35") {
    carried_aircrafts.push_back(new F35);
  } else if (type == "F16") {
    carried_aircrafts.push_back(new F16);
  }
}

void Carrier::fill() { // ADD EXCEPTION
  for (int i = 0; i < carried_aircrafts.size(); i++) {
    carried_aircrafts[i]->refill(ammo_storage);
  }
}

int Carrier::get_total_damage() {
  int total_damage = 0;
  for (int i = 0; i < carried_aircrafts.size(); i++) {
    total_damage += carried_aircrafts[i]->calculate_damage();
  }
  return total_damage;
}

void Carrier::shoot() {
  for (int i = 0; i < carried_aircrafts.size(); i++) {
    carried_aircrafts[i]->fight();
  }
}

void Carrier::fight(Carrier& carrier_to_fight) {
  while (ammo_storage > 0 && carrier_to_fight.get_health_point() > 0) {
    fill();
    carrier_to_fight.health_point -= get_total_damage();
    shoot();
  }
}

int Carrier::get_health_point() {
  return health_point;
}
void Carrier::get_status() {
  if (health_point <= 0) {
    std::cout << "It's dead, Jim :(" << std::endl;
  } else {
    std::cout << "Aircraft count: " << carried_aircrafts.size() << ", Ammo Storage: " << ammo_storage << ", Total damage: " << get_total_damage() << std::endl;
    std::cout << "Aircrafts: " << std::endl;
    for (int i = 0; i < carried_aircrafts.size(); i++) {
      std::cout << carried_aircrafts[i]->get_status() << std::endl;
    }
    std::cout << std::endl;
  }
}
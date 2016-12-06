// #pragma once
#ifndef CARRIER_H
#define CARRIER_H
#include <vector>
#include "Aircraft.h"
#include "F16.h"
#include "F35.h"

class Carrier {
private:
  std::vector<Aircraft*> carried_aircrafts;
  int ammo_storage;
  int health_point;
public:
  Carrier(int ammo_to_store, int health_point);
  ~Carrier();
  void add_aircraft(std::string aircraft);
};

#endif

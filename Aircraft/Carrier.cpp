#include "Carrier.h"


Carrier::Carrier(int ammo_to_store, int initial_health_point) {
  ammo_storage = ammo_to_store;
  health_point = initial_health_point;
}

Carrier::~Carrier() {
}

void Carrier::add_aircraft(std::string type) {
  if (type == "F35") {
    carried_aircrafts.push_back(new F35);
  } else if (type == "F16") {
    carried_aircrafts.push_back(new F16);
  }
}

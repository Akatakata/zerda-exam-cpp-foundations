// #pragma once
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class Aircraft {
protected:
  int ammo_amount;
  int max_ammo;
  unsigned int base_damage;
public:
  Aircraft();
  ~Aircraft();
  void reset_ammo_amount();
  int fight();
  void refill(int& ammo_in_storage);
};

#endif
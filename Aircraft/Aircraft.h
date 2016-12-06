// #pragma once
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

class Aircraft {
protected:
  int ammo_amount;
  unsigned int max_ammo;
  unsigned int base_damage;
public:
  Aircraft();
  ~Aircraft();
};

#endif
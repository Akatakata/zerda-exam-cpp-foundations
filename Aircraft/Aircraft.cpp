#include "Aircraft.h"

Aircraft::Aircraft() : ammo_amount(0) {
}

Aircraft::~Aircraft() {
}

void Aircraft::reset_ammo_amount() {
  ammo_amount = 0;
}

int Aircraft::fight() {
  int damage = base_damage * ammo_amount;
  reset_ammo_amount();
  return damage;
}

void Aircraft::refill(int& ammo_in_storage) {
  if (ammo_in_storage >= max_ammo) {
    ammo_amount = max_ammo;
    ammo_in_storage -= max_ammo;
  } else {
    ammo_amount = ammo_in_storage;
    ammo_in_storage = 0;
  }
}
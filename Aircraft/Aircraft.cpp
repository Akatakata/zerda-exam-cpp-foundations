#include "Aircraft.h"
#include <string>
Aircraft::Aircraft() {
  ammo_amount = 0;
}

Aircraft::~Aircraft() {
}

void Aircraft::reset_ammo_amount() {
  ammo_amount = 0;
}

int Aircraft::calculate_damage() {
  int possible_damage = base_damage * ammo_amount;
  return possible_damage;
}

int Aircraft::fight() {
  int damage = calculate_damage();
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

std::string Aircraft::get_type() {
  return type;
}

int Aircraft::get_ammo_amount() {
  return ammo_amount;
}

std::string Aircraft::get_status() {
  return "Type " + type + ", Ammo: " + std::to_string(get_ammo_amount()) + ", Base Damage : "
    + std::to_string(base_damage) + ", All Damage: " + std::to_string(calculate_damage());
}
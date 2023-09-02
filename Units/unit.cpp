#include "unit.hpp"

Weapon::Weapon(std::string name, std::string distanceType, std::string type, int baseDamage, int damageMultiplier)
    : Name(name), DistanceType(distanceType), Type(type), BaseDamage(baseDamage), DamageMultiplier(damageMultiplier) {}

std::string Weapon::getName() const { return Name; }
std::string Weapon::getType() const { return Type; }
int Weapon::getBaseDamage() const { return BaseDamage; }
int Weapon::getDamageMultiplier() const { return DamageMultiplier; }

Unit::Unit(std::string type, int hp, int moves, const Weapon &primaryWeapon, const Weapon &secondaryWeapon)
    : Type(type), HP(hp), Moves(moves), PrimaryWeapon(primaryWeapon), SecondaryWeapon(secondaryWeapon) {}

Unit::~Unit() {}

std::string Unit::getType() const { return Type; }
int Unit::getHP() const { return HP; }
int Unit::getMoves() const { return Moves; }
Weapon Unit::getPrimaryWeapon() const { return PrimaryWeapon; }
Weapon Unit::getSecondaryWeapon() const { return SecondaryWeapon; }

DrakeBurner::DrakeBurner()
    : Unit("Drake Burner", 42, 5,
           Weapon("Claws", "Melee", "Blade", 7, 2),
           Weapon("Fire Breath", "Ranged", "Fire", 6, 4)) {}

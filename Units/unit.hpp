#ifndef UNIT_HPP
#define UNIT_HPP

#include <string>

class Weapon
{
private:
    std::string Name;
    std::string DistanceType;
    std::string Type;
    int BaseDamage;
    int DamageMultiplier;

public:
    Weapon(std::string name, std::string distanceType, std::string type, int baseDamage, int damageMultiplier);
    std::string getName() const;
    std::string getType() const;
    int getBaseDamage() const;
    int getDamageMultiplier() const;
};

class Unit
{
private:
    std::string Type;
    int HP;
    int Moves;
    Weapon PrimaryWeapon;
    Weapon SecondaryWeapon;

public:
    Unit(std::string type, int hp, int moves, const Weapon &primaryWeapon, const Weapon &secondaryWeapon);
    ~Unit();

    std::string getType() const;
    int getHP() const;
    int getMoves() const;
    Weapon getPrimaryWeapon() const;
    Weapon getSecondaryWeapon() const;
};

class DrakeBurner : public Unit
{
public:
    DrakeBurner();
};

#endif

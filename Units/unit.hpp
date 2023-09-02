#ifndef UNIT_HPP
#define UNIT_HPP
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
private:
    string Name;
    string Type;
    int Damage;

public:
    Weapon(string n, string t, int d) : Name(n), Type(t), Damage(d) {}
    string getName()const{return Name;}
    string getType()const{return Type;}
    int getDamage()const{return Damage;}
};

class Unit
{
private:
    string Type;
    int HP;
    int Moves;
    Weapon PrimaryWeapon;
    Weapon SecondaryWeapon;

public:
    // Konstruktor
    Unit(string type, int hp, int moves, Weapon& primaryWeapon, Weapon& secondaryWeapon);
    virtual ~Unit();
    // Setter & Getter

    string getType() const { return Type; }
    int getHP() const { return HP; }
    int getMoves() const { return Moves; }
    Weapon getPrimaryWeapon()const {return PrimaryWeapon;}
    Weapon getSecondaryWeapon()const {return SecondaryWeapon;}
};

#endif
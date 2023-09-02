#ifndef UNIT_HPP
#define UNIT_HPP
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Unit
{
private:
    string Type;
    int HP;
    int Moves;

public:
    // Konstruktor
    Unit(string type, int hp, int moves) : Type(type), HP(hp), Moves(moves) {}
    ~Unit();
    // Setter & Getter
    string getType() const { return Type; }
    int getHP() const { return HP; }
    int getMoves() const { return Moves; }
};

#endif
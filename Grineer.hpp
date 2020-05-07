#ifndef GRINEER_HPP_INCLUDED
#define GRINEER_HPP_INCLUDED

#include "Enemy.hpp"

enum Armor_Type {Ferrite, Alloy};
enum Grineer_Weapon {Ignis, Grakata};

class Grineer : public Enemy
{
private:
    int Armor;
    int Max_Armor;
    Armor_Type AType;
    Grineer_Weapon GWeapon;
public:
    Grineer() {}
    Grineer(int a, Armor_Type atype, Grineer_Weapon gw, int h, int l)
    {
        Armor = a;
        AType = atype;
        GWeapon = gw;
        Health = h;
        Level = l;
    }
    Grineer(const Grineer &g)
    {
        Armor = g.Armor;
        AType = g.AType;
        GWeapon = g.GWeapon;
        Health = g.Health;
        Level = g.Level;
    }
    ~Grineer() {}
///GET:
    int getArmor() const
    {
        return Armor;
    }
    Armor_Type getArmorType() const
    {
        return AType;
    }
    Grineer_Weapon getGWeapon() const{
        return GWeapon;
    }
    int getHealth() const
    {
        return Health;
    }
    int getLevel() const
    {
        return Level;
    }

///SET:
    void setArmor(const int a)
    {
        Armor = a;
    }
    void setArmorType(const Armor_Type t)
    {
        AType = t;
    }
    void setGWeapon(const Grineer_Weapon gw){
        GWeapon = gw;
    }

    void setLevel(const int l)
    {
        Level = l;
    }
    void setHealth(const int h)
    {
        Health = h;
    }
};


#endif // GRINEER_HPP_INCLUDED

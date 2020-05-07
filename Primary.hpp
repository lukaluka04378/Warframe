#ifndef PRIMARY_HPP_INCLUDED
#define PRIMARY_HPP_INCLUDED

#include "Weapon.hpp"

enum Primary_Type {Rifle, Shotgun, Sniper, Bow, Launcher, Spearguns, Special};

class Primary : public Weapon
{
private:
    int Ammo;
    int Magazine;
    bool Noise;
    Primary_Type PType;
public:
    Primary() : Weapon(){
        Ammo = 60;
        Magazine = 60;
        Noise = false;
        PType = Rifle;


    }
    Primary(int a, int m, bool n, Primary_Type pt, Trigger t, float sd, float id, float pd, int sc, int cc, float cm)
    {
        Ammo = a;
        Magazine = m;
        Noise = n;
        PType = pt;
        TType = t;
        Slash_Damage = sd;
        Impact_Damage = id;
        Puncture_Damage = pd;
        Status_Chance = sc;
        Critical_Chance = cc;
        Critical_Multiplier = cm;
    }
    Primary(const Primary &p)
    {
        Ammo = p.Ammo;
        Magazine = p.Magazine;
        Noise = p.Noise;
        PType = p.PType;
        TType = p.TType;
        Slash_Damage = p.Slash_Damage;
        Impact_Damage = p.Impact_Damage;
        Puncture_Damage = p.Puncture_Damage;
        Status_Chance = p.Status_Chance;
        Critical_Chance = p.Critical_Chance;
        Critical_Multiplier = p.Critical_Multiplier;
    }
    ~Primary() {}



    ///GET
    int getAmmo() const
    {
        return Ammo;
    }
    int getMagazine() const
    {
        return Magazine;
    }
    bool getNoise() const
    {
        return Noise;
    }
    Primary_Type getPType() const
    {
        return PType;
    }
    Trigger getTType() const
    {
        return TType;
    }
    float getSDamage() const
    {
        return Slash_Damage;
    }
    float getIDamage() const
    {
        return Impact_Damage;
    }
    float getPDamage() const
    {
        return Puncture_Damage;
    }
    int getSChance() const
    {
        return Status_Chance;
    }
    int getCChance() const
    {
        return Critical_Chance;
    }
    float getCMultiplier() const
    {
        return Critical_Multiplier;
    }
///SET

    void setAmmo(const int a)
    {
        Ammo = a;
    }
    void setMagazine(const int m)
    {
        Magazine = m;
    }
    void setNoise(const bool n)
    {
        Noise = n;
    }
    void setPType(const Primary_Type pt )
    {
        PType = pt;
    }
    void setTType(const Trigger t)
    {
        TType = t;
    }
    void setSDamage(const float sd)
    {
        Slash_Damage = sd;
    }
    void setIDamage(const float id)
    {
        Impact_Damage = id;
    }
    void setPDamage(const float pd)
    {
        Puncture_Damage = pd;
    }
    void setSChance(const int sc)
    {
        Status_Chance = sc;
    }
    void setCChance(const int cc)
    {
        Critical_Chance = cc;
    }
    void setCMultiplier(const float cm)
    {
        Critical_Multiplier= cm;
    }
};

#endif // PRIMARY_HPP_INCLUDED

#ifndef SECONDARY_HPP_INCLUDED
#define SECONDARY_HPP_INCLUDED

#include "Weapon.hpp"

enum Secondary_Held_Type {Single, Dual};



class Secondary : public Weapon
{
private:
    int Ammo;
    int Magazine;
    bool Noise;
    Secondary_Held_Type SHType;
public:
    Secondary() : Weapon(){
        Ammo = 60;
        Magazine = 4;
        Noise = true;
        SHType = Dual;

    }
    Secondary(int a, int m, bool n, Secondary_Held_Type sht, Trigger t, float sd, float id, float pd, int sc, int cc, float cm)
    {
        Ammo = a;
        Magazine = m;
        Noise = n;
        SHType = sht;
        TType = t;
        Slash_Damage = sd;
        Impact_Damage = id;
        Puncture_Damage = pd;
        Status_Chance = sc;
        Critical_Chance = cc;
        Critical_Multiplier = cm;
    }
    Secondary(const Secondary &s)
    {
        Ammo = s.Ammo;
        Magazine = s.Magazine;
        Noise = s.Noise;
        SHType = s.SHType;
        TType = s.TType;
        Slash_Damage = s.Slash_Damage;
        Impact_Damage = s.Impact_Damage;
        Puncture_Damage = s.Puncture_Damage;
        Status_Chance = s.Status_Chance;
        Critical_Chance = s.Critical_Chance;
        Critical_Multiplier = s.Critical_Multiplier;
    }
    ~Secondary() {}
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
    Secondary_Held_Type getSHType() const
    {
        return SHType;
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
    void setSHType(const Secondary_Held_Type sht )
    {
        SHType = sht;
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


#endif // SECONDARY_HPP_INCLUDED

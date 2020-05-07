#ifndef MELEE_HPP_INCLUDED
#define MELEE_HPP_INCLUDED

#include "Weapon.hpp"

enum Melee_Type {Whips, Dagger, Claw, Heavy, Hammer, Polearm, Sword};

class Melee : public Weapon
{
private:
    int Combo_Multiplier;
    int Combo;
    float Heavy_Damage;
    float Slam_Damage;
    Melee_Type MType;
public:
    Melee() {}
    Melee(int com, int c, float hd, float slamd, float sd, float id, float pd, int sc, int cc, float cm, Melee_Type mt)
    {
        Combo_Multiplier = com;
        Combo = c;
        Heavy_Damage = hd;
        Slam_Damage = slamd;
        Slash_Damage = sd;
        Impact_Damage = id;
        Puncture_Damage = pd;
        Status_Chance = sc;
        Critical_Chance = cc;
        Critical_Multiplier = cm;
        MType = mt;

    }
    Melee(const Melee &m)
    {
        Combo_Multiplier = m.Combo_Multiplier;
        Combo = m.Combo;
        Heavy_Damage = m.Heavy_Damage;
        Slam_Damage = m.Slam_Damage;
        Slash_Damage = m.Slash_Damage;
        Impact_Damage = m.Impact_Damage;
        Puncture_Damage = m.Puncture_Damage;
        Status_Chance = m.Status_Chance;
        Critical_Chance = m.Critical_Chance;
        Critical_Multiplier = m.Critical_Multiplier;
        MType = m.MType;

    }
    ~Melee() {}
///GET
    Melee_Type getMType() const
    {
        return MType;
    }
    int getComboMultiplier() const
    {
        return Combo_Multiplier;
    }
    int getCombo() const
    {
        return Combo;
    }
    float getHeavyDamage() const
    {
        return Heavy_Damage;
    }
    float getSlamDamage() const
    {
        return Slam_Damage;
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
    void setMType (const Melee_Type mt)
    {
        MType = mt;
    }
    void setComboMultiplier(const int cm)
    {
        Combo_Multiplier = cm;
    }
    void setCombo(const int c)
    {
        Combo = c;
    }
    void setHeavyDamage(const float hd)
    {
        Heavy_Damage = hd;
    }
    void setSlamDamage(const float sd)
    {
        Slam_Damage = sd;
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

#endif // MELEE_HPP_INCLUDED

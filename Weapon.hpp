#ifndef WEAPON_HPP_INCLUDED
#define WEAPON_HPP_INCLUDED

enum Trigger {Semi, Automatic, Burst, Charge};


class Weapon
{
protected:
    float Slash_Damage;
    float Impact_Damage;
    float Puncture_Damage;
    int Status_Chance;
    int Critical_Chance;
    float Critical_Multiplier;
    Trigger TType;
public:
    Weapon() {
        Slash_Damage = 40;
        Impact_Damage = 40;
        Puncture_Damage = 40;
        Status_Chance = 20;
        Critical_Chance = 30;
        Critical_Multiplier = 3.0;
        TType = Semi;

    }
    Weapon(float sd, float id, float pd, int sc, int cc, float cm, Trigger t)
    {
        Slash_Damage = sd;
        Impact_Damage = id;
        Puncture_Damage = pd;
        Status_Chance = sc;
        Critical_Chance = cc;
        Critical_Multiplier = cm;
        TType = t;
    }
    Weapon(const Weapon &w)
    {
        Slash_Damage = w.Slash_Damage;
        Impact_Damage = w.Impact_Damage;
        Puncture_Damage = w.Puncture_Damage;
        Status_Chance = w.Status_Chance;
        Critical_Chance = w.Critical_Chance;
        Critical_Multiplier = w.Critical_Multiplier;
        TType = w.TType;
    }
    ~Weapon() {}
///GET

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

#endif // WEAPON_HPP_INCLUDED

#ifndef ABILITY_HPP_INCLUDED
#define ABILITY_HPP_INCLUDED

#include "dinstring.hpp"

enum AbilityType {First, Second, Third, Fourth};

class Ability
{
private:
    DinString Name;
    int Cost;
    float Strenght;
    float Range;
    float Duration;
    AbilityType AType;
    int Activation;
public:
    Ability() {
        Name = "Boom";
        Cost = 25;
        Strenght = 100;
        Range = 15;
        Duration = 2;
        AType = Second;
        Activation = 2;

    }
    Ability(DinString n, int c, float s, float r, float d, AbilityType t, int a)
    {
        Name = n;
        Cost = c;
        Strenght = s;
        Range = r;
        Duration = d;
        AType = t;
        Activation = a;
    }
    Ability(const Ability &a)
    {
        Name = a.Name;
        Cost = a.Cost;
        Strenght = a.Strenght;
        Range = a.Range;
        Duration = a.Duration;
        AType = a.AType;
        Activation = a.Activation;
    }
    ~Ability() {}
    /// GET
    DinString getName() const
    {
        return Name;
    }
    int getCost() const
    {
        return Cost;
    }
    float getStrenght() const
    {
        return Strenght;
    }
    float getRange() const
    {
        return Range;
    }
    float getDuration() const
    {
        return Duration;
    }
    AbilityType getAType() const
    {
        return AType;
    }
    int getActivation() const
    {
        return Activation;
    }
    /// SET
    void setName(const DinString n)
    {
        Name = n;
    }
    void setCost(const int c)
    {
        Cost = c;
    }
    void setStrenght(const float s)
    {
        Strenght = s;
    }
    void setRange(const float r)
    {
        Range = r;
    }
    void setDuration(const float d)
    {
        Duration = d;
    }
    void setType(const AbilityType t)
    {
        AType = t;
    }
    void setActivation(const int a)
    {
        Activation = a;
    }

    friend ostream& operator << (ostream &out, Ability &a)
    {
        out << "******************************************************" << endl;
        out << "ABILITY" << endl;
        out << "NAME: " << a.getName() << "ACTIVATION: " << a.getActivation() << "COST: " << a.getCost() << endl;
        out << "STRENGHT: " << a.getStrenght() << " DURATION: " << a.getDuration() << "RANGE: " << a.getRange() << endl;
        switch(a.getAType())
        {
        case 0:
            cout << "TYPE: First" << endl;
            break;
        case 1:
            cout << "TYPE: Second" << endl;
            break;
        case 2:
            cout << "TYPE: Third" << endl;
            break;
        case 3:
            cout << "TYPE: Forth" << endl;
            break;
        }
        return out;
    }

};

#endif // ABILITY_HPP_INCLUDED

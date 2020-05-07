#ifndef ROBOTIC_HPP_INCLUDED
#define ROBOTIC_HPP_INCLUDED

#include "Companion.hpp"

enum Robotic_Type {Taxon, Helios, Carrier};
enum Robotic_Gun{Artax, Deconstructor, Sweeper};

class Robotic : public Companion
{
private:
    Robotic_Type RType;
    Robotic_Gun GType;
public:
    Robotic() {}
    Robotic(Robotic_Type rt, Robotic_Gun gt, bool u, int mh, int ms, int ma, bool d)
    {
        RType = rt;
        GType = gt;
        Using = u;
        Max_Health = mh;
        Max_Shield = ms;
        Max_Armor = ma;
        Dead = d;
    }
    Robotic(const Robotic &r)
    {
        RType = r.RType;
        GType = r.GType;
        Using = r.Using;
        Max_Health = r.Max_Health;
        Max_Shield = r.Max_Shield;
        Max_Armor = r.Max_Armor;
        Dead = r.Dead;


    }
    ~Robotic() {}
/// GET:

    Robotic_Type getRType() const{
        return RType;
    }
    Robotic_Gun getGType() const{
        return GType;
    }
    bool getUsing() const
    {
        return Using;
    }
    int getMaxHealth() const
    {
        return Max_Health;
    }
    int getMaxShield() const
    {
        return Max_Shield;
    }
    int getMaxArmor() const
    {
        return Max_Armor;
    }
    bool getDead() const
    {
        return Dead;
    }

/// SET:
    void setRType(const Robotic_Type rt){
         RType = rt;
    }
    void setGType(const Robotic_Gun gt){
        GType = gt;
    }
    void setUsing(const bool u)
    {
        Using = u;
    }
    void setMaxHealth(const int mh)
    {
        Max_Health = mh;
    }
    void setMaxShield(const int ms)
    {
        Max_Shield = ms;
    }
    void setMaxArmor(const int ma)
    {
        Max_Armor = ma;
    }
    void setDead(const bool d)
    {
        Dead = d;
    }


};

#endif // ROBOTIC_HPP_INCLUDED

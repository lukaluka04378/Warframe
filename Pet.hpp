#ifndef PET_HPP_INCLUDED
#define PET_HPP_INCLUDED

#include "Companion.hpp"
#include "dinstring.hpp"


enum Kubrow_Type {Huras, Raksa, Sahasa, Sunika, Chesa, Helminth_Charger};

class Pet : public Companion
{
private:
    DinString Name;
    int GeneticStability;
    int Loyalty;
    bool Maturity;
    Kubrow_Type KubrowType;
    bool Bleeding;
public:
    Pet() {}
    Pet(DinString n, int g, int l, bool m, Kubrow_Type t, bool b, bool u, int mh, int ms, int ma, bool d)
    {
        Name = n;
        GeneticStability = g;
        Loyalty = l;
        Maturity = m;
        KubrowType = t;
        Using = u;
        Max_Health = mh;
        Max_Shield = ms;
        Max_Armor = ma;
        Dead = d;


    }
    Pet(const Pet &p)
    {
        Name = p.Name;
        GeneticStability = p.GeneticStability;
        Loyalty = p.Loyalty;
        Maturity = p.Maturity;
        KubrowType = p.KubrowType;
        Bleeding = p.Bleeding;
        Using = p.Using;
        Max_Health = p.Max_Health;
        Max_Shield = p.Max_Shield;
        Max_Armor = p.Max_Armor;
        Dead = p.Dead;

    }
    ~Pet() {}

    /// GET:

    DinString getName() const
    {
        return Name;
    }
    Kubrow_Type getKubrowType() const
    {
        return KubrowType;
    }
    bool getBleeding() const
    {
        return Bleeding;
    }
    int getGeneticStability() const
    {
        return GeneticStability;
    }
    int getLoyalty() const
    {
        return Loyalty;
    }
    bool getMaturity() const
    {
        return Maturity;
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
    void getName(const DinString n)
    {
        Name = n;
    }
    void setKubrowType(const Kubrow_Type kt)
    {
        KubrowType = kt;
    }
    void setBleeding(const bool b)
    {
        Bleeding = b;
    }
    void setGeneticStability(const int gs)
    {
        GeneticStability = gs;
    }
    void setLoyalty(const int l)
    {
        Loyalty = l;
    }
    void setMaturity(const bool m)
    {
        Maturity = m;
    }
    void setName(const DinString n)
    {
        Name = n;
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


#endif // PET_HPP_INCLUDED

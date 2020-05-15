#ifndef MOD_HPP_INCLUDED
#define MOD_HPP_INCLUDED

#include "dinstring.hpp"

enum Mod_Rarity {Bronze, Silver, Gold, Primed, Riven};
enum Type {Warframe_Mod, Primary_Mod, Secondary_Mod, Melee_Mod, Companion_Mod, Archwing_Mod};

class Mod
{
private:
    DinString Name;
    Mod_Rarity rarity;
    Type type;
    int Rank;
public:
    Mod() {}
    Mod(DinString n, Mod_Rarity r, Type t, int R)
    {
        Name = n;
        rarity = r;
        type = t;
        Rank = R;
    }
    Mod(const Mod &m)
    {
        Name = m.Name;
        rarity = m.rarity;
        type = m.type;
        Rank = m.Rank;
    }
    ~Mod() {}
///GET:
    DinString getName() const
    {
        return Name;
    }

    Mod_Rarity getRarity() const
    {
        return rarity;
    }
    Type getType() const
    {
        return type;
    }
    int getRank() const
    {
        return Rank;
    }
///SET
    void setName(const DinString n)
    {
        Name = n;
    }
    void setRarity(const Mod_Rarity r)
    {
        rarity = r;
    }
    void setType(const Type t)
    {
        type = t;
    }
    void setRank(const int r)
    {
        Rank = r;
    }

    friend ostream& operator<< (ostream &out, Mod &m)
    {
        out << "******************************************************" << endl;
        out << "MOD: " << endl;
        out << "Name: " << m.getName() << "Rarity: " << m.getRarity() << "Type: " << m.getType() << "Rank: " << m.getRank()  << endl;
        return out;
    }

};

#endif // MOD_HPP_INCLUDED

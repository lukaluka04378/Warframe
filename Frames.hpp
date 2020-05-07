#ifndef FRAMES_HPP_INCLUDED
#define FRAMES_HPP_INCLUDED

#include "dinstring.hpp"
#include "list.hpp"
#include "Ability.hpp"
#include "Skin.hpp"

class Warframe
{
private:
    int Level;
    DinString Name;
    int Health;
    int Shield;
    int Energy;
    List<Ability> abilities;
    List<Skin> skins;
public:
    Warframe() : abilities(), skins(){
        Level = 30;
        Name = "Locky";
        Health = 300;
        Shield = 500;
        Energy = 200;

    }
    Warframe(int l, DinString n, int h, int s, int e, List<Ability> Abilities, List<Skin> Skins)
    {
        Level = l;
        Name = n;
        Health = h;
        Shield = s;
        Energy = e;
        abilities = Abilities;
        skins = Skins;

    }
    Warframe(const Warframe &w)
    {
        Level = w.Level;
        Name = w.Name;
        Health = w.Health;
        Shield = w.Shield;
        Energy = w.Energy;
        abilities = w.abilities;
        skins = w.skins;
    }
    ~Warframe() {}


    /// GET
    int getLevel() const
    {
        return Level;
    }
    DinString getName() const
    {
        return Name;
    }
    int getHealth() const
    {
        return Health;
    }
    int getShield() const
    {
        return Shield;
    }
    int getEnergy() const
    {
        return Energy;
    }
    List<Ability> getAbilities() const
    {
        return abilities;
    }
    List<Skin> getSkins() const
    {
        return skins;
    }
    /// SET
    void setLevel(const int l)
    {
        Level = l;
    }
    void setName(const DinString n)
    {
        Name = n;
    }
    void setHealth(const int h)
    {
        Health = h;
    }
    void setShield(const int s)
    {
        Shield = s;
    }
    void setEnergy(const int e)
    {
        Energy = e;
    }
    void setAbilities(const List<Ability> a)
    {
        abilities = a;
    }
    void setSkins(const List<Skin> s)
    {
        skins = s;
    }

    bool addSkin(const Skin &skin)
    {
        return skins.add(skins.size() + 1, skin);
    }
    bool addAbility(const Ability &ability)
    {
        return abilities.add(abilities.size() + 1, ability);
    }


    void listSkins()
    {
        if(skins.size() == 0)
            cout << "NO SKINS" << endl;
        else
        {
            Skin s;
            for(int i = 1; i <= skins.size(); ++i)
            {
                skins.read(i, s);
                cout << s;
            }
        }
    }

    void listAbilities()
    {
        if(abilities.size() == 0)
            cout << "NO ABILITIES" << endl;
        else
        {
            Ability a;
            for(int i = 1; i <= abilities.size(); ++i)
            {
                abilities.read(i, a);
                cout << a;
            }
        }
    }

    friend ostream& operator<< (ostream &out, Warframe &w)
    {
        out << "******************************************************" << endl;
        out << "WARFRAME" << endl;
        out << "Name: " << w.getName() << "HEALTH: " << w.getHealth() << "SHIELDS: " << w.getShield() << "ENERGY: " << w.getEnergy()  << endl;
        w.listSkins();
        w.listAbilities();
        return out;
    }

};

#endif // FRAMES_HPP_INCLUDED

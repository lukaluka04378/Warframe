#ifndef CORPUS_HPP_INCLUDED
#define CORPUS_HPP_INCLUDED

#include "Enemy.hpp"

enum Corpus_Weapon {Dera, Detron};

class Corpus : public Enemy
{
private:
    int Shield;
    Corpus_Weapon CWeapon;
public:
    Corpus() {}
    Corpus(int s, Corpus_Weapon cw, int h, int l)
    {
        Shield = s;
        CWeapon = cw;
        Health = h;
        Level = l;
    }
    Corpus(const Corpus &c)
    {
        Shield = c.Shield;
        CWeapon = c.CWeapon;
        Health = c.Health;
        Level = c.Level;
    }
    ~Corpus() {}
///GET:
    int getShield() const
    {
        return Shield;
    }
    Corpus_Weapon getCWeapon() const{
        return CWeapon;
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
    void setShield(const int s)
    {
        Shield = s;
    }
    void setcWeapon(const Corpus_Weapon cw){
        CWeapon = cw;
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


#endif // CORPUS_HPP_INCLUDED

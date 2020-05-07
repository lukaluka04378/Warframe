#ifndef RELIC_HPP_INCLUDED
#define RELIC_HPP_INCLUDED

#include "dinstring.hpp"

enum Relic_Era {Lith, Meso, Neo, Axi, Requiem};
enum Relic_Lvl {Intact, Exceptional, Flawless, Radiant};

class Relic
{
private:
    Relic_Era Era;
    DinString Name;
    Relic_Lvl lvl;
    DinString Common1;
    DinString Common2;
    DinString Common3;
    DinString Uncommon1;
    DinString Uncommon2;
    DinString Rare;
public:
    Relic() {}
    Relic(DinString n, Relic_Era e, Relic_Lvl l, DinString c1, DinString c2, DinString c3, DinString u1, DinString u2, DinString r)
    {
        Era = e;
        Name = n;
        lvl = l;
        Common1 = c1;
        Common2 = c2;
        Common3 = c3;
        Uncommon1 = u1;
        Uncommon2 = u2;
        Rare = r;

    }
    Relic(const Relic &r)
    {
        Era = r.Era;
        Name = r.Name;
        lvl = r.lvl;
        Common1 = r.Common1;
        Common2 = r.Common2;
        Common3 = r.Common3;
        Uncommon1 = r.Uncommon1;
        Uncommon2 = r.Uncommon2;
        Rare = r.Rare;

    }
    ~Relic() {}

///GET
    Relic_Era getEra() const
    {
        return Era;
    }
    Relic_Lvl getLvl() const
    {
        return lvl;
    }
    DinString getName() const
    {
        return Name;
    }
    DinString getCommon1() const
    {
        return Common1;
    }
    DinString getCommon2() const
    {
        return Common2;
    }
    DinString getcCommon3() const
    {
        return Common3;
    }
    DinString getUncommon1() const
    {
        return Uncommon1;
    }
    DinString getUncommon2() const
    {
        return Uncommon2;
    }
    DinString getRare() const
    {
        return Rare;
    }
///SET
    void setEra(const Relic_Era e)
    {
        Era = e;
    }
    void setLvl(const Relic_Lvl l)
    {
        lvl = l;
    }
    void setName(const DinString n)
    {
        Name = n;
    }
    void setCommon1(const DinString c1)
    {
        Common1 = c1;
    }
    void setCommon2(const DinString c2)
    {
        Common2 = c2;
    }
    void setCommon3(const DinString c3)
    {
        Common3 = c3;
    }
    void setUncommon1(const DinString u1)
    {
        Uncommon1 = u1;
    }
    void setUncommon2(const DinString u2)
    {
        Uncommon2 = u2;
    }
    void setRare(const DinString r)
    {
        Rare = r;
    }
};

#endif // RELIC_HPP_INCLUDED

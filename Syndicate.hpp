#ifndef SYNDICATE_HPP_INCLUDED
#define SYNDICATE_HPP_INCLUDED

enum Faction_Type {Steel_Maridian, Arbiters_Of_Hexis, Cephalon_Suda, The_Perrin_Sequence, Red_Veil, New_Loka};

class Syndicate
{
private:
    Faction_Type FType;
    int Standing;
    int Rank;
public:
    Syndicate() {}
    Syndicate(Faction_Type t, int s, int r)
    {
        FType = t;
        Standing = s;
        Rank = r;
    }
    Syndicate(const Syndicate &s)
    {
        FType = s.FType;
        Standing = s.Standing;
        Rank = s.Rank;
    }
    ~Syndicate() {}
///GET
    Faction_Type getFType() const
    {
        return FType;
    }
    int getStanding() const
    {
        return Standing;
    }
    int getRank() const
    {
        return Rank;
    }
///SET
    void setFType(const Faction_Type ft)
    {
        FType = ft;
    }
    void setStanding(const int s)
    {
        Standing = s;
    }
    void setRank(const int r)
    {
        Rank = r;
    }
};

#endif // SYNDICATE_HPP_INCLUDED

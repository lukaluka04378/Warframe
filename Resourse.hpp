#ifndef RESOURSE_HPP_INCLUDED
#define RESOURSE_HPP_INCLUDED

#include "dinstring.hpp"

enum Resourse_Rarity{Common, Uncommon, Rare};

class Resourse{
private:
    DinString Name;
    int Quantity;
    Resourse_Rarity rarity;
public:
    Resourse(){}
    Resourse(DinString n, int q, Resourse_Rarity r){
        Name = n;
        Quantity = q;
        rarity = r;
    }
    Resourse(const Resourse &r){
        Name = r.Name;
        Quantity = r.Quantity;
        rarity = r.rarity;
    }
    ~Resourse(){}
///GET
    DinString getName() const
    {
        return Name;
    }
    int getQuantity() const
    {
        return Quantity;
    }
    Resourse_Rarity getRarity() const
    {
        return rarity;
    }
///SET
    void setName(const DinString n)
    {
        Name = n;
    }
    void setQuantity(const int q)
    {
        Quantity = q;
    }
    void setRarity(const Resourse_Rarity r)
    {
        rarity = r;
    }
};


#endif // RESOURSE_HPP_INCLUDED

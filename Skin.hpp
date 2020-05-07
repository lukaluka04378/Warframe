#ifndef SKIN_HPP_INCLUDED
#define SKIN_HPP_INCLUDED

#include "dinstring.hpp"

enum Skin_Type {Warframe_Skin, Primary_Skin, Secondary_Skin, Melee_Skin};

class Skin
{
private:
    DinString Name;
    int Price;
    Skin_Type SType;
public:
    Skin() {
        Name = "Frost";
        Price = 200;
        SType = Warframe_Skin;
    }
    Skin(DinString n, int p, Skin_Type t)
    {
        Name = n;
        Price = p;
        SType = t;
    }
    Skin(const Skin &s)
    {
        Name = s.Name;
        Price = s.Price;
        SType = s.SType;
    }
    ~Skin() {}

    ///GET
    DinString getName() const
    {
        return Name;
    }
    int getPrice() const
    {
        return Price;
    }
    Skin_Type getSType() const
    {
        return SType;
    }
///SET
    void setName(const DinString n)
    {
        Name = n;
    }
    void setPrice(const int p)
    {
        Price = p;
    }
    void setSType(const Skin_Type st)
    {
        SType = st;
    }

    friend ostream& operator << (ostream &out, Skin &s)
    {
        out << "******************************************************" << endl;
        out << "SKIN" << endl;
        out << "NAME: " << s.getName() << "PRICE: " << s.getPrice() << endl;
        return out;
    }

};

#endif // SKIN_HPP_INCLUDED

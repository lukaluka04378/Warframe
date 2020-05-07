#ifndef AMMO_HPP_INCLUDED
#define AMMO_HPP_INCLUDED

enum Ammo_Type {Pistol_Ammo, Shotgun_Ammo, Rifle_Ammo, Sniper_Ammo, Heavy_Ammo, Omni_Ammo};

class Ammo{
private:
    Ammo_Type AType;
    int Quantity;
public:
    Ammo(){}
    Ammo(Ammo_Type a, int q){
        AType = a;
        Quantity = q;
    }
    Ammo(const Ammo &a){
        AType = a.AType;
        Quantity = a.Quantity;
    }
    ~Ammo(){}
///GET
    Ammo_Type getAType() const
    {
        return AType;
    }
    int getQuantity() const
    {
        return Quantity;
    }
///SET
    void setAType(const Ammo_Type t)
    {
        AType = t;
    }
    void setQuantity(const int q)
    {
        Quantity = q;
    }
};

#endif // AMMO_HPP_INCLUDED

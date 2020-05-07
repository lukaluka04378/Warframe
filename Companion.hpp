#ifndef COMPANION_HPP_INCLUDED
#define COMPANION_HPP_INCLUDED


class Companion
{
protected:
    bool Using;
    int Max_Health;
    int Health;
    int Max_Shield;
    int Shield;
    int Max_Armor;
    int Armor;
    bool Dead;
public:
    Companion() {}
    Companion( bool u, int mh, int h, int ms, int s, int ma, int a, bool d)
    {
        Using = u;
        Max_Health = mh;
        Health = h;
        Max_Shield = ms;
        Shield = s;
        Max_Armor = ma;
        Armor = a;
        Dead = d;
    }
    Companion(const Companion &c)
    {
        Using = c.Using;
        Max_Health = c.Max_Health;
        Health = c.Health;
        Max_Shield = c.Max_Shield;
        Shield = c.Shield;
        Max_Armor = c.Max_Armor;
        Armor = c.Armor;
        Dead = c.Dead;

    }
    ~Companion() {}

/// GET:
    bool getUsing() const
    {
        return Using;
    }
    int getMaxHealth() const
    {
        return Max_Health;
    }
    int getHealth() const
    {
        return Health;
    }
    int getMaxShield() const
    {
        return Max_Shield;
    }
    int getShield() const
    {
        return Shield;
    }
    int getMaxArmor() const
    {
        return Max_Armor;
    }
    int getArmor() const
    {
        return Armor;
    }
    bool getDead() const
    {
        return Dead;
    }

/// SET:
    void setUsing(const bool u)
    {
        Using = u;
    }
    void setMaxHealth(const int mh)
    {
        Max_Health = mh;
    }
    void setHealth(const int h)
    {
        Health = h;
    }
    void setMaxShield(const int ms)
    {
        Max_Shield = ms;
    }
    void setShield(const int s)
    {
        Shield = s;
    }
    void setMaxArmor(const int ma)
    {
        Max_Armor = ma;
    }
    void setArmor(const int a)
    {
        Armor = a;
    }
    void setDead(const bool d)
    {
        Dead = d;
    }

};


#endif // COMPANION_HPP_INCLUDED

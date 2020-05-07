#ifndef ENEMY_HPP_INCLUDED
#define ENEMY_HPP_INCLUDED


class Enemy
{
protected:
    int Health;
    int Max_Health;
    int Level;
public:
    Enemy() {}
    Enemy(int h, int mh, int l)
    {
        Health = h;
        Max_Health = mh;
        Level = l;
    }
    Enemy(const Enemy &e)
    {
        Health = e.Health;
        Max_Health = e.Max_Health;
        Level = e.Level;
    }
    ~Enemy() {}
///GET:
    int getHealth() const
    {
        return Health;
    }
    int getMaxHealth() const
    {
        return Max_Health;
    }
    int getLevel() const
    {
        return Level;
    }
///SET:
    void setLevel(const int l)
    {
        Level = l;
    }
    void setHealth(const int h)
    {
        Health = h;
    }
    void setMaxHealth(const int mh)
    {
        Max_Health = mh;
    }
};

#endif // ENEMY_HPP_INCLUDED

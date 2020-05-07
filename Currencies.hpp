#ifndef CURRENCIES_HPP_INCLUDED
#define CURRENCIES_HPP_INCLUDED

#include <iostream>

class Currencie
{
private:
    int Credits, Platinum, Endo, Void_Traces;
public:
    Currencie() {}
    Currencie(int c, int p, int e, int v)
    {
        Credits = c;
        Platinum = p;
        Endo = e;
        Void_Traces = v;

    }
    Currencie(const Currencie &c)
    {
        Credits = c.Credits;
        Platinum = c.Platinum;
        Endo = c.Endo;
        Void_Traces = c.Void_Traces;


    }
    ~Currencie() {}
///GET:
    int getCredits() const
    {
        return Credits;
    }
    int getPlatinum() const
    {
        return Platinum;
    }
    int getEndo() const
    {
        return Endo;
    }
    int getVoid_Traces() const
    {
        return Void_Traces;
    }
///SET:
    void setCredits(const int c)
    {
        Credits = c;
    }
    void setPlatinum(const int p)
    {
        Platinum = p;
    }
    void setEndo(const int e)
    {
        Endo = e;
    }
    void setVoidTraces(const int vt)
    {
        Void_Traces = vt;
    }
    bool spend(int amount)
    {
        std::cout << "CREDITS: " << Credits << std::endl;
        std::cout << "PLATINUM: " << Platinum << std::endl;
        std::cout << "ENDO: " << Endo << std::endl;
        std::cout << "VOID TRACES: " << Void_Traces << std::endl;
        int n;
        do
        {
            std::cout << "1 - CREDITS" << std::endl;
            std::cout << "2 - PLATINUM" << std::endl;
            std::cout << "3 - ENDO" << std::endl;
            std::cout << "4 - VOID TRACES" << std::endl;
            std::cout << "5 - IPAK STEDIM" << std::endl;
            std::cin >> n;
            if(n < 1 || n > 5)
                    std::cout << "NEPOSTOJI TA OPCIJA" << std::endl;
        }
        while(n < 1 || n > 4);
        switch(n)
        {
        case 1:
            if(Credits > amount)
            {
                Credits -= amount;
                return true;
            }
            else
            {
                std::cout << "NEMATE DOVOLJNO ZA OVU KUPOVINU" << std::endl;
                return false;
            }
            break;
        case 2:
            if(Platinum > amount)
            {
                Platinum -= amount;
                return true;
            }
            else
            {
                std::cout << "NEMATE DOVOLJNO ZA OVU KUPOVINU" << std::endl;
                return false;
            }
            break;
        case 3:
            if(Endo > amount)
            {
                Endo -= amount;
                return true;
            }
            else
            {
                std::cout << "NEMATE DOVOLJNO ZA OVU KUPOVINU" << std::endl;
                return false;
            }
            break;
        case 4:
            if(Void_Traces > amount)
            {
                Void_Traces -= amount;
                return true;
            }
            else
            {
                std::cout << "NEMATE DOVOLJNO ZA OVU KUPOVINU" << std::endl;
                return false;
            }
            break;
        case 5:
            return false;

            break;
        }
    }
};

#endif // CURRENCIES_HPP_INCLUDED

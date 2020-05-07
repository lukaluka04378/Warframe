#ifndef NAVIGATION_HPP_INCLUDED
#define NAVIGATION_HPP_INCLUDED

enum Planet {Earth, Venus, Mercury, Mars, Phobos, Jupiter, Europa, Saturn, Uranus, Neptune, Sedna, Void, Derelict, Lua, Kuva_Fortress};
enum Mission_Type {Assassination, Capture, Defense, Excavation, Exterminate, Free_Roam, Interception, Mobile_Defanse, Rescue, Sabotage, Spy, Survival};
enum Mission_Modifier {None, DarkSector, Nightmare, Sindicate, Sortie, Void_Fissure, Kuva_Syphon, Invasion, Event};

class Mission
{
private:
    Planet planet;
    Mission_Type type;
    Mission_Modifier modifier;
    bool compleated;
public:
    Mission() {}
    Mission(Planet p, Mission_Type t, Mission_Modifier m, bool c)
    {
        planet = p;
        type = t;
        modifier = m;
        compleated = c;
    }
    Mission(const Mission &m)
    {
        planet = m.planet;
        type = m.type;
        modifier = m.modifier;
        compleated = m.compleated;
    }

    ~Mission() {}


    ///GET:
    Planet getPlanet() const
    {
        return planet;
    }
    Mission_Type getType() const
    {
        return type;
    }
    Mission_Modifier getMModifier() const
    {
        return modifier;
    }
    bool getCompleated() const
    {
        return compleated;
    }
///SET
    void setPlanet(const Planet p)
    {
        planet = p;
    }
    void setType(const Mission_Type t)
    {
        type = t;
    }
    void setMModifier(const Mission_Modifier m)
    {
        modifier = m;
    }
    void setCompleated(const bool c)
    {
        compleated = c;
    }
};

#endif // NAVIGATION_HPP_INCLUDED

#include <iostream>

#include "dinstring.hpp"
#include "list.hpp"

#include "Pet.hpp"
#include "Robotic.hpp"
#include "Currencies.hpp"
#include "Grineer.hpp"
#include "Corpus.hpp"
#include "Frames.hpp"
#include "Mod.hpp"
#include "Navigation.hpp"
#include "Relic.hpp"
#include "Resourse.hpp"
#include "Skin.hpp"
#include "Syndicate.hpp"
#include "Primary.hpp"
#include "Secondary.hpp"
#include "Melee.hpp"
#include "Ammo.hpp"
#include "Ability.hpp"
#include "Profile.hpp"

using namespace std;



int main()
{
    ///Currencies
    Currencie balance(100000, 50, 50000, 200);
    Currencie cprazan;
    Currencie ckopija(balance);

    ///Ability
    Ability e1("Slash Dash", 25, 100, 6, 0, First, 1);
    Ability e2("Radial Blind", 50, 0, 8, 7, Second, 2);
    Ability e3("Radial Javelin", 75, 500, 15, 0, Third, 3);
    Ability e4("Exalted Blade", 25, 100, 5, 50, Fourth, 4);
    Ability aprazan;
    Ability akopija(e1);

    ///Skin
    Skin ExcaliburZato("Excalibur Zato Skin", 300, Warframe_Skin);
    Skin sprazan;
    Skin skopija(ExcaliburZato);

    ///Warframe
    List<Ability> abilities;
    List<Skin> skins;
    List<Warframe> warframes;

    abilities.add(abilities.size() + 1, e1);
    abilities.add(abilities.size() + 1, e2);
    abilities.add(abilities.size() + 1, e3);
    abilities.add(abilities.size() + 1, e4);

    skins.add(skins.size() + 1, ExcaliburZato);

    Warframe excalibur(30, "Excalibur", 300, 300, 150, abilities, skins);
    Warframe wprazan;
    Warframe wkopija(excalibur);

    warframes.add(warframes.size() + 1, excalibur);

    cout << excalibur;

    ///Pet
    Pet Huras("Sanja", 100, 100, true, Raksa, false, true, 225, 375, 50, false);
    Pet pprazan;
    Pet pkopija(Huras);

    ///Robotic
    Robotic Carrier(Taxon, Sweeper, false, 200, 100, 50, false);
    Robotic rprazan;
    Robotic rkopija(Carrier);

    ///Mod
    List<Mod> mods;
    Mod vitality("Vitality", Bronze, Warframe_Mod, 5);
    Mod mprazan;
    Mod mkopija(vitality);
    mods.add(mods.size() + 1, vitality);

    ///Resourse
    Resourse Irradite("Irradite", 60, Common);
    Resourse resprazan;
    Resourse reskopija(Irradite);

    ///Navigation
    Mission PlainsOfEidalon(Earth, Free_Roam, None, true);
    Mission misprazan;
    Mission miskopija(PlainsOfEidalon);

    ///Relic

    Relic C4("Lith C4", Lith, Intact, "Burston Prime Receiver", " Forma Blueprint", " Paris Prime Lower Limb", "Braton Prime Stock", " Orthos Prime Blade", "Chroma Prime Neuroptics");
    Relic relprazan;
    Relic relkopija(C4);

    ///Syndicate
    Syndicate SteelMaridian(Steel_Maridian, 5000, 4);
    Syndicate syprazan;
    Syndicate sykopija(SteelMaridian);

    ///Ammo
    Ammo rifleAmmo(Rifle_Ammo, 60);
    Ammo amprazan;
    Ammo amkopija(rifleAmmo);

    ///Primary
    Primary primprazan;
    Primary fulmin(60, 0, false, Rifle, Semi, 100.0, 100.0, 100.0, 10, 30, 2.4);
    Primary primkopija(fulmin);

    ///Secondary
    Secondary pyrana(210, 10, true, Single, Semi, 211.2, 26.4, 26.4, 2.5, 20, 2.0);
    Secondary secprazan;
    Secondary seckopija(pyrana);

    ///Melee
    Melee skana(3, 50, 600, 360, 84.0, 18.0, 18.0, 16, 5, 1.5, Sword);
    Melee melprazan;
    Melee melkopija(skana);

    ///Grineer
    Grineer Lancer(100, Ferrite, Grakata, 100, 1);
    Grineer gprazan;
    Grineer gkopija(Lancer);

    ///Corpus
    Corpus Crewman(150, Dera, 60, 1);
    Corpus coprazan;
    Corpus cokopija(Crewman);

    return 0;
}

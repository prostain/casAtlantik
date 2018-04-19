#ifndef PASSERELLE_H
    #define PASSERELLE_H

#include <iostream>
#include "colEquipement.h"
#include "colBateauVoyageur.h"
#include <QString>

using namespace std;
class Passerelle
{
public:
    static ColEquipement chargerLesEquipements(int unIdBateau);
    static ColBateauVoyageur chargerLesBateauxVoyageurs();
};

#endif

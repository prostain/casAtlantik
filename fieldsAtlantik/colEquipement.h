#ifndef COLEQUIPEMENT_H
    #define COLEQUIPEMENT_H

#include <iostream>
#include <vector>
#include "equipement.h"
#include <QString>

using namespace std;
class ColEquipement
{
private:
	vector <Equipement> vectLesEquipements;
public:
	void ajouterObjet(Equipement newEquip);
	Equipement obtenirObjet(int index);
	int cardinal();
};
#endif

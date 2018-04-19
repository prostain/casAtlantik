#ifndef BATEAUVOYAGEUR_H
    #define BATEAUVOYAGEUR_H

#include <iostream>
#include <vector>
#include "bateau.h"
#include "colEquipement.h"
#include <QString>

using namespace std;
class BateauVoyageur : public Bateau
{
private:
	int vitesseBatVoy;
	string imageBatVoy;
	ColEquipement lesEquipements;
public:
	string versChaine();
	BateauVoyageur(string idBateau,string nomBateau,int longueurBateau,int largeurBateau ,int vitesseBatVoyage ,string imageBatVoyage, ColEquipement lesEquipements);
	string getImageBatVoy();	
};

#endif

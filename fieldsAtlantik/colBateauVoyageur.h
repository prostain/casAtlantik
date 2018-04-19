#ifndef COLBATEAUVOYAGEUR_H
    #define COLBATEAUVOYAGEUR_H

#include <iostream>
#include <vector>
#include "bateauVoyageur.h"
#include <QString>

using namespace std;
class ColBateauVoyageur
{
private:
	vector <BateauVoyageur> vectLesBateauxVoyageurs;
public:
	void ajouterBateau(BateauVoyageur newBateau);
	BateauVoyageur obtenirBateau(int index);
	int cardinal();
};
#endif

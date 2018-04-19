#include "colBateauVoyageur.h"

void ColBateauVoyageur::ajouterBateau(BateauVoyageur newBateau)
{
	vectLesBateauxVoyageurs.push_back(newBateau);
}
BateauVoyageur ColBateauVoyageur::obtenirBateau(int index)
{
	return vectLesBateauxVoyageurs[index-1];
}
int ColBateauVoyageur::cardinal()
{
	return vectLesBateauxVoyageurs.size();
}
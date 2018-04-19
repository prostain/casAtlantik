#include "bateau.h"
#include <sstream>
Bateau::Bateau(string idBateau, string nomBateau , int longueurBateau , int largeurBateau)
{
	idBat = idBateau;
	nomBat = nomBateau;
	longueurBat = longueurBateau;
	largeurBat = largeurBateau;
}
string Bateau::versChaine()
{
	stringstream maChaine;
	maChaine<<"Nom du bateau: "<<nomBat<<endl<<"Longueur: "<<longueurBat<<endl<<"Largeur: "<<largeurBat<<endl;
	return maChaine.str();
}
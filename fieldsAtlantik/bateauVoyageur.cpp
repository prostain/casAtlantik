#include "bateauVoyageur.h"
#include <sstream>

BateauVoyageur::BateauVoyageur(string idBateau, string nomBateau , int longueurBateau , int largeurBateau,int vitesseBatVoyage,string imageBatVoyage,ColEquipement lesEquipements)
:Bateau(idBateau,nomBateau,longueurBateau,largeurBateau)
{
	vitesseBatVoy = vitesseBatVoyage;
	imageBatVoy = imageBatVoyage;
}
string BateauVoyageur::versChaine(){
	stringstream chaine;
	stringstream boucle;
	int tailleVect = lesEquipements.cardinal();
	chaine<<Bateau::versChaine()<<"Vitesse: "<<vitesseBatVoy<<endl<<"Liste des équipements du bateau: "<<endl;	
	for (int equipement = 0; equipement < tailleVect; ++equipement)
	{
		boucle << "-"<<lesEquipements.obtenirObjet(equipement).versChaine()<< endl;
	}
	return chaine.str()+boucle.str();
}
string BateauVoyageur::getImageBatVoy(){
	return imageBatVoy;
}
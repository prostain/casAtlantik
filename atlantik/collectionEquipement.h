#ifndef COLLECTIONEQUIPEMENT
#define COLLECTIONEQUIPEMENT
#include "equipement.h"
#include <vector>
#include <QString>

/**
 *\file collectionEquipement.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 20 mars 2018
 *\brief Classe CollectionEquipement.
 *\detail Cette classe permet de consulter la classe Equipement.
**/

using namespace std;

class CollectionEquipement{
private:

	/**
		*\brief Variable \e vecteur renvoyant les equipements.
		* exemple : Pont Promenade
	**/
	vector<Equipement> vectEquipement;
public:

	/**
		*\brief Renvoie le nombre d'objets de la collection
		* Methode qui permet de retourner la taille du vecteur \b vectEquipement.
		*\return Un \e int.
	**/
	int cardinal();

	 /**
	 	*\brief Retourne l'objet d'index \b unIndex
	 	* Renvoie l'equipement à l'indice \b unIndex-1 (premier objet à l'indice 1)
	 	*\ return Un \e Equipement
	**/
	Equipement obtenirObjet(int unIndex);

		/**
		 	*\brief Ajoute un objet à la collection
		 	* Methode \e void qui permet d'ajouter un equipement au vecteur \e vectEquipement.
		**/
	void ajouter(Equipement unObjet);
};
#endif

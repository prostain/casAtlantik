#ifndef COLLECTIONBATEAU
#define COLLECTIONBATEAU
#include "bateau.h"
#include "bateauVoyageur.h"
#include <vector>
#include <QString>

/**
 *\file collectionBateau.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 20 mars 2018
 *\brief Classe CollectionBateau.
 *\detail Cette classe permet de consulter la classe Bateau.
**/

using namespace std;

class CollectionBateau
{
	private:
		/**
			 *\brief Variable \e vecteur renvoyant les bateaux.
			 * exemple : Luce Isle
		**/
        vector<BateauVoyageur> vectBateau;

	public:
		/**
		 	*\brief Renvoie le nombre d'objets de la collection
		 	* Methode qui permet de retourner la taille du vecteur \b vectBateau.
		 	*\return Un \e int.
		**/
		int cardinal();

		/**
		 	*\brief Retourne l'objet d'index \b unIndex
		 	* Renvoie le bateau à l'indice \b unIndex-1 (premier objet a l'indice 1)
		 	*\ return Un \e Bateau
		**/
        BateauVoyageur obtenirObjet(int unIndex);

		 /**
		 	*\brief Ajoute un objet à la collection
		 	* Methode \e void qui permet d'ajouter un bateau au vecteur \e vectBateau.
		**/
        void ajouter(BateauVoyageur unObjet);
};
#endif

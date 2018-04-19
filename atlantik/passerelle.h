#ifndef PASSERELLE
#define PASSERELLE
#include <iostream>
#include <QString>
#include <vector>
#include "jeuEnregistrement.h"
#include "equipement.h"
#include "bateauVoyageur.h"
#include "collectionEquipement.h"
#include "collectionBateau.h"

/**
 *\file passerelle.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 20 mars 2018
 *\brief Classe Passerelle.
 *\detail Cette classe \b static permet d'instancier des objets.
**/


using namespace std;

class Passerelle
{
	public:
		/**
            *\brief Methode \e static de type \e CollectionEquipement
			* Retourne la collection des Equipements du bateau dont l'identifiant est passé en paramètre
            *\return Une \e CollectionEquipement
		**/
        static CollectionEquipement chargerLesEquipements(int unIdBateau);

		/**
            *\brief Methode \e static de type \e CollectionBateau
			* Instancie et retourne une collection d'objet de la classe BateauVoyageur ainsi que la collection lesEquipements de chaque objet de la classe BateauVoyageur, à partir des données lues dans la BDD.
            *\return Une \e CollectionBateau.
		**/
        static CollectionBateau chargerLesBateauxVoyageurs();
};
#endif

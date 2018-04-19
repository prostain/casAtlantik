#ifndef BATEAUVOYAGEUR 
#define BATEAUVOYAGEUR

#include <iostream>
#include <QString>
#include <vector>
#include "equipement.h"
#include "bateau.h"
#include "collectionEquipement.h"

/**
 *\file bateauVoyageur.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 20 mars 2018
 *\brief Classe BateauVoyageur.
 *\detail Cette classe permet d'entrer un bateau voyageur.
**/

using namespace std;

class BateauVoyageur: public Bateau
{
	private :

	/**
		 *\brief Variable \e int contenant la vitesse du bateau.
		 * exemple : 26
	**/
	int vitesseBatVoy;

	/**
         *\brief Variable \e QString contenant l'image du bateau.
		 * exemple : ~/Images/image.png
	**/
    QString imageBatVoy;

	/**
		 *\brief Variable \e vecteur renvoyant les équipements du bateau.
		 * exemple : Pont Promenade
	**/
    CollectionEquipement lesEquipements;

	public :

	/**
		 *\brief Constructeur de la classe BateauVoyageur.
	**/
    BateauVoyageur(QString unId, QString unNom, float uneLongueur, float uneLargeur, int uneVitesse, QString uneImage, CollectionEquipement uneCollEquip);
	
	/**
		 *\brief Afficher les informations.
		 * Permet d'afficher les informations du bateau voyageur concaténées.
         *\return Un \e QTextStream.
	**/
    QString versChaine();

	/**
		 *\brief Renvois la variable \b imageBatVoy.
		 * Methode qui permet de retourner la variable \b imageBatVoy.
         *\return Un \e QString.
	**/		
    QString getImageBatVoy();
};

#endif

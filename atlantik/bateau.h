#ifndef BATEAU
#define BATEAU

#include <iostream>
#include <QString>

/**
 *\file bateau.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 20 mars 2018
 *\brief Classe Bateau.
 *\detail Cette classe permet d'entrer un bateau.
**/

using namespace std;

class Bateau
{
	private :

		/**
         *\brief Variable \e QString contenant l'id du bateau.
		 * exemple : 1
		**/
        QString idBat;

		/**
         *\brief Variable \e QString contenant le nom du bateau.
		 * exemple : Luce Isle
		**/
        QString nomBat;

		/**
		 *\brief Variable \e float contenant la longueur du bateau.
		 * exemple : 37,20
		**/
		float longueurBat;

		/**
		 *\brief Variable \e float contenant la largeur du bateau.
		 * exemple : 8,60
		**/
		float largeurBat;

	public:

		/**
		 *\brief Constructeur de la classe Bateau.
		**/
        Bateau(QString unId, QString unNom, float uneLongueur, float uneLargeur);
		
		/**
		 *\brief Afficher les informations.
         * Permet de renvoyer les informations du bateau concaténées.
         *\return Un \e QString.
		**/
        QString versChaine();
};

#endif

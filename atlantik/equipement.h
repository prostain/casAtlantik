#ifndef EQUIPEMENT
#define EQUIPEMENT

#include <iostream>
#include <QString>

/**
 *\file equipement.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 20 mars 2018
 *\brief Classe Equipement.
 *\detail Cette classe permet d'entrer des equipements.
**/

using namespace std;

class Equipement
{
	private:
		/**
         *\brief Variable \e QString contenant l'id de l'equipement.
		 * exemple : 2
		**/
        QString idEquip;

		/**
         *\brief Variable \e QString contenant le libelle de l'equipement.
		 * exemple : Pont Promenade
		**/
        QString libEquip;
	public:

		/**
		 *\brief Constructeur de la classe Equipement.
		**/
        Equipement(QString unId, QString unLib);

		/**
		 *\brief Afficher les informations.
		 * Permet d'afficher le libelle de l'equipement.
         *\return Un \e QString.
		**/
        QString versChaine();
};

#endif

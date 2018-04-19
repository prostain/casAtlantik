#ifndef JEUENREGISTREMENT
#define JEUENREGISTREMENT
#include <iostream>
#include <QString>
#include <QSqlQuery>
#include <QVariant>

/**
 *\file jeuEnregistrement.h
 *\author Mélanie Lebeau
 *\version 0.1
 *\date 20 février 2018
 *\brief Classe JeuEnregistrement.
 *\detail Cette classe permet d'acceder à la base de données.
**/

using namespace std;

class JeuEnregistrement
{
	private:
	/**
		*\brief Variable \e QSqlQuery contenant ma requete.
		* exemple : 26
	**/
        QSqlQuery maRequeteQuery;
	public:
		/**
			*\brief Constructeur de la classe JeuEnregistrement
			* Positionne le curseur sur le premier enregistrement
		**/
        JeuEnregistrement(QString maRequeteString);

		/**
			*\brief Avance le curseur sur l'enregistrement suivant
			* Methode \e void qui avance le curseur sur l'enregistrement suivant
		**/
        bool suivant();

		/**
			*\brief Indique si la marque de fin est atteinte
			* Methode qui indique si la marque de fin est atteinte
			*\return Un \e bool.
		**/
		bool fin();

		/**
			*\brief Renvoie la valeur du champ \b nomChamp de l'enregistrement courant
			* Methode \e QVariant 
            *\return Un \e QString.
		**/
        QVariant getValeur(QString nomChamp);

		/**
			*\brief Ferme le cuseur et libère les ressources
		**/
		void fermer();
};
#endif

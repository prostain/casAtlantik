#ifndef PDF
#define PDF
#include <iostream>
#include <QString>
#include <QTextDocument>
#include <bateauVoyageur.h>
#include <QPdfWriter>


/**
 *\file pdf.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 20 mars 2018
 *\brief Classe Pdf
 *\detail Cette classe permet de créer un fichier Pdf.
**/


using namespace std;

class Pdf: public QTextDocument
{
	private :
		/**
         *\brief Variable \e QString contenant le nom du document.
		 * exemple : pdfAtlantik
		**/	
        QString nameDoc;
        /**
         *\brief Variable \e QString contenant le codeHTML
        **/
        QString codeHTML;
        /**
         * \brief Pointeur \e QPdfWriter sur \b monPdfWriter
         */
        QPdfWriter * monPdfWriter;
	public :
		/**
		 *\brief Constructeur de la classe Pdf.
		 * Créer le document PDF vierge avec pour nom \b nomDocument
		**/
        Pdf(QObject *parent, QString nomDocument);
		/**
		 *\brief Ecrit le texte du document.
		 * Méthode \e void qui permet d'écrire le contenu de la chaîne de caractère \b leTexte dans le document
		**/
        void ecrireTexte(QString leTexte);
		/**
		 *\brief Insère l'image dans le document.
		 * Méthode \e void qui permet d'insérer dans le document l'image dont le chemin est passé en paramètre avec la variable \b chemin
		**/
        void chargerImage(QString chemin);
		/**
		 *\brief Ferme le document.
		 * Méthode \e void qui permet de fermer le document.
		**/
        void imprimer();
};
#endif	

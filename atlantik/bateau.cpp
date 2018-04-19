#include "bateau.h"
#include <QDebug>
#include <sstream>

//Constructeur de Bateau
Bateau::Bateau(QString unId, QString unNom, float uneLongueur, float uneLargeur)
{
    qDebug()<<"Bateau::Bateau(QString unId, QString unNom, float uneLongueur, float uneLargeur)";

    //Attribution des valeurs aux propriétés de Bateau
	idBat=unId;
	nomBat=unNom;
	longueurBat=uneLongueur;
	largeurBat=uneLargeur;
}

//Méthode versChaine de Bateau
QString Bateau::versChaine()
{
    qDebug()<<"QString Bateau::versChaine()";
    //Permet de renvoyer les informations du bateau concaténées dans la variable monSSInfo de type stringstream .

    //Création de la variable monSSInfo de type stringstream
    stringstream monSSInfo;

    //Ajout des differentes informations du Bateau dans la variable monSSInfo
    monSSInfo<<"<p>Nom du bateau : "<<nomBat.toStdString()<<"</p>"<<endl;
    monSSInfo<<"<p>Longueur : "<<longueurBat<<" mètres"<<"</p>"<<endl;
    monSSInfo<<"<p>Largeur : "<<largeurBat<<" mètres"<<"</p>"<<endl;

    //Retourne la variable monSSInfo au format QString
    return QString(monSSInfo.str().c_str());

}

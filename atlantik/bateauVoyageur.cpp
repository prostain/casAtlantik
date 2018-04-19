#include "bateauVoyageur.h"
#include <QDebug>
#include <sstream>
#include <QTextStream>

//Constructeur de BateauVoyageur qui hérite de Bateau
BateauVoyageur::BateauVoyageur(QString unId, QString unNom, float uneLongueur, float uneLargeur, int uneVitesse, QString uneImage, CollectionEquipement uneCollEquip)
	:Bateau(unId, unNom, uneLongueur, uneLargeur)
{
    qDebug()<<"BateauVoyageur::BateauVoyageur(...):Bateau(...)";

    //Attribution des valeurs aux propriétés de BateauVoyageur
	vitesseBatVoy=uneVitesse;
	imageBatVoy=uneImage;
    lesEquipements=uneCollEquip;
}

//Méthode versChaine de BateauVoyageur
QString BateauVoyageur::versChaine()
{
    qDebug()<<"QString BateauVoyageur::versChaine()";
    //Permet de renvoyer les informations du BateauVoyageur concaténées dans la variable monSSInfo de type stringstream .

    //Création de la variable monSSInfo de type stringstream
    stringstream monSSInfo;

    //Ajout des differentes informations du Bateau dans la variable monSSInfo
    monSSInfo<<Bateau::versChaine().toStdString();
    //Récupération du nombre d'élément dans ma collectionEquipement dans ma variable nbrEquipement de type int
    int nbrEquipement=lesEquipements.cardinal();
    monSSInfo<<"<p>Vitesse : "<<vitesseBatVoy<<" noeuds</p>"<<endl;
    monSSInfo<<"<p>Liste des équipements du bateau : "<<"</p><ul style='list-style-type:circle;'>"<<endl;
    //Debut du For
    for (int numEquipement=1; numEquipement<=nbrEquipement; numEquipement++)
    {
        monSSInfo<<" <li>"<<lesEquipements.obtenirObjet(numEquipement).versChaine().toStdString()<<"</li>"<<endl;
    }
    monSSInfo<<"</ul><br/><hr/>"<<endl;
    return QString(monSSInfo.str().c_str());
}

QString BateauVoyageur::getImageBatVoy()
{
    qDebug()<<"QString BateauVoyageur::getImageBatVoy()";
	return imageBatVoy;
}

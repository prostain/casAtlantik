#include "collectionEquipement.h"
#include <QDebug>

int CollectionEquipement::cardinal()
{
    qDebug()<<"int CollectionEquipement::cardinal()";
	int tailleCollection=vectEquipement.size();
    qDebug()<<"int CollectionEquipement::cardinal() variable tailleCollection "<<tailleCollection;
	return tailleCollection;
}

Equipement CollectionEquipement::obtenirObjet(int unIndex)
{
    qDebug()<<"Equipement CollectionEquipement::obtenirObjet(int unIndex)";
    return vectEquipement[unIndex-1];
}

void CollectionEquipement::ajouter(Equipement unObjet)
{
    qDebug()<<"void CollectionEquipement::ajouter(Equipement unObjet)";
	vectEquipement.push_back(unObjet);
}

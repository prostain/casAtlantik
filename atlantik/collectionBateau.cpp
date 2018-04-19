#include "collectionBateau.h"
#include <QDebug>

int CollectionBateau::cardinal()
{
    qDebug()<<"int CollectionBateau::cardinal()";
    int tailleCollection=vectBateau.size();
	return tailleCollection;
}

BateauVoyageur CollectionBateau::obtenirObjet(int unIndex)
{
    qDebug()<<"BateauVoyageur CollectionBateau::obtenirObjet(int unIndex)";
	return vectBateau[unIndex-1];
}

void CollectionBateau::ajouter(BateauVoyageur unObjet)
{
    qDebug()<<"void CollectionBateau::ajouter(BateauVoyageur unObjet)";
	vectBateau.push_back(unObjet);
}

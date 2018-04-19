#include "passerelle.h"
#include <QDebug>

CollectionEquipement  Passerelle::chargerLesEquipements(int unIdBateau)
{
    qDebug()<<"CollectionEquipement  Passerelle::chargerLesEquipements(int unIdBateau)";
    CollectionEquipement lesEquipements;
    QString monIdBateauString=QString::number(unIdBateau);
    JeuEnregistrement jeuEquipement("SELECT Equipement.equipId, equipLib FROM Equipement INNER JOIN Posseder ON Equipement.equipId=Posseder.equipId WHERE bateauId="+monIdBateauString);
    while(jeuEquipement.suivant())
    {
        QString equipId= jeuEquipement.getValeur("Equipement.equipId").toString();
        QString equipLib= jeuEquipement.getValeur("equipLib").toString();
        Equipement monEquipement(equipId,equipLib);
        lesEquipements.ajouter(monEquipement);
    }
    return lesEquipements;
}

CollectionBateau Passerelle::chargerLesBateauxVoyageurs()
{
    qDebug()<<"CollectionBateau Passerelle::chargerLesBateauxVoyageurs()";
    CollectionBateau lesBateaux;
    JeuEnregistrement jeuBateau("SELECT bateauId, bateauLibelle, bateauLong, bateauLarg, bateauVit, bateauImg, bateauPoidsMax FROM Bateau WHERE bateauType='v'");
    while (jeuBateau.suivant())
    {
        QString bateauId= jeuBateau.getValeur("bateauId").toString();
        QString bateauLib= jeuBateau.getValeur("bateauLibelle").toString();
        float bateauLong= jeuBateau.getValeur("bateauLong").toFloat();
        float bateauLarg= jeuBateau.getValeur("bateauLarg").toFloat();
        int bateauVit= jeuBateau.getValeur("bateauVit").toInt();
        QString bateauImg= jeuBateau.getValeur("bateauImg").toString();
        CollectionEquipement bateauEquip= chargerLesEquipements(bateauId.toInt());
        BateauVoyageur monBateauVoyageur(bateauId,bateauLib,bateauLong, bateauLarg, bateauVit, bateauImg, bateauEquip);
        lesBateaux.ajouter(monBateauVoyageur);
    }
    return lesBateaux;
}

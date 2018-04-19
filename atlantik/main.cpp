#include <QGuiApplication>
#include "pdf.h"
#include "passerelle.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication a(argc, argv);

    //Création d'une QSqlDatabase maBase
    QSqlDatabase maBase;
    //Ajout d'une BDD QMYSQL3 à maBase
    maBase=QSqlDatabase::addDatabase("QMYSQL3");
    maBase.setHostName("localhost");
    maBase.setUserName("mlebeau");
    maBase.setPassword("passf203");
    maBase.setDatabaseName("atlantikBDD");
    maBase.open();

    qDebug()<<"BDD Open";
    Pdf monPdf(0,"casAtlantik.pdf");
    CollectionBateau lesBateaux;
    lesBateaux=Passerelle::chargerLesBateauxVoyageurs();

    int nbrBateaux=lesBateaux.cardinal();
    for (int noBat=1; noBat<=nbrBateaux; noBat++)
    {
        qDebug()<<"Main For";
        BateauVoyageur unBateau= lesBateaux.obtenirObjet(noBat);
        monPdf.chargerImage(unBateau.getImageBatVoy());
        monPdf.ecrireTexte(unBateau.versChaine());
    }
    monPdf.imprimer();
    maBase.close();
    return 0;
}

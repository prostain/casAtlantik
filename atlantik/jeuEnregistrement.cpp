#include "jeuEnregistrement.h"
#include <QDebug>

JeuEnregistrement::JeuEnregistrement(QString maRequeteString)
{
    qDebug()<<"JeuEnregistrement::JeuEnregistrement(QString maRequeteString)";
    maRequeteQuery.prepare(maRequeteString);
    maRequeteQuery.exec();
}

bool JeuEnregistrement::suivant()
{
    qDebug()<<"bool JeuEnregistrement::suivant()";
    return maRequeteQuery.next();
}

bool JeuEnregistrement::fin()
{
    qDebug()<<"bool JeuEnregistrement::fin()";
    return false;
}

QVariant JeuEnregistrement::getValeur(QString nomChamp)
{
    qDebug()<<"QVariant JeuEnregistrement::getValeur(QString nomChamp)";
    QVariant resultat=maRequeteQuery.value(nomChamp);
    return resultat;
}

void JeuEnregistrement::fermer()
{
    qDebug()<<"void JeuEnregistrement::fermer()";
    maRequeteQuery.finish();
}

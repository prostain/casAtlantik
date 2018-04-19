#include "equipement.h"
#include <QDebug>

Equipement::Equipement(QString unId, QString unLib)
{
    qDebug()<<"Equipement::Equipement(QString unId, QString unLib)";
	idEquip=unId;
	libEquip=unLib;
}

QString Equipement::versChaine()
{
    qDebug()<<"QString Equipement::versChaine()";
	return libEquip;
}

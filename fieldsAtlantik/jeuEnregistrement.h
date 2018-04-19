#ifndef JEUENREGISTREMENT_H
    #define JEUENREGISTREMENT_H

#include <iostream>
#include <QVariant>
#include <Qsql/QSqlDatabase>
#include <QString>

using namespace std;
class JeuEnregistrement
{
private:
	QSqlQuery maRequette;
public:
	JeuEnregistrement(string chaineSQL);
	void suivant();
	bool fin();
	QVariant getValeur(string nomChamp);
	void fermer();	
};

#endif

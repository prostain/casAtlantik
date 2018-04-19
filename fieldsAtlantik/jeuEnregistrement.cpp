#include "jeuEnregistrement.h"

JeuEnregistrement::JeuEnregistrement(string chaineSQL)
{
	maRequette.open(chaineSQL);
	maRequette.first();
}

void JeuEnregistrement::suivant()
{
	maRequette.next();
}

bool JeuEnregistrement::fin()
{
	return maRequette.last();
}

QVariant JeuEnregistrement::getValeur(string nomChamp)
{
	return maRequette.value(nomChamp);
}

void JeuEnregistrement::fermer()
{
	maRequette.close();
}

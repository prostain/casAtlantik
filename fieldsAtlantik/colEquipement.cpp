#include "colEquipement.h"

void ColEquipement::ajouterObjet(Equipement newEquip)
{
	vectLesEquipements.push_back(newEquip);
}
Equipement ColEquipement::obtenirObjet(int index)
{
	return vectLesEquipements[index-1];
}
int ColEquipement::cardinal()
{
	return vectLesEquipements.size();
}
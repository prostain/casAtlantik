#include "equipement.h"

Equipement::Equipement(string idEquipe, string libEquipe){
	idEquip = idEquipe;
	libEquip = libEquipe;
}

string Equipement::versChaine(){
	return libEquip;
}
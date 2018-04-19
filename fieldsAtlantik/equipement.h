#ifndef EQUIPEMENT_H
    #define EQUIPEMENT_H

#include <iostream>
#include <QString>

using namespace std;
class Equipement
{
private:
	string idEquip;
	string libEquip;
public:
	Equipement(string idEquipe,string libEquipe);
	string versChaine();	
};
#endif

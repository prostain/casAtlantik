#ifndef BATEAU_H
    #define BAREAU_H

#include <iostream>
#include <QString>

using namespace std;
class Bateau
{
private:
	string idBat;
	string nomBat;
	int longueurBat;
	int largeurBat;
public:
	Bateau(string idBateau,string nomBateau,int longueurBateau,int largeurBateau);
	string versChaine();
	
};

#endif

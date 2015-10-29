#ifndef HABITATION_H
#define HABITATION_H

#include "bien.h"

enum statut { EN_VENTE, LOUE, A_LOUER };

class Habitation : public Bien {
	int nbPieces;
	statut statu;
	
	Habitation(float surface, int nbPieces, statut statu);
};

#endif
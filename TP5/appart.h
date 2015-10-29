#ifndef APPARTEMENT_H
#define APPARTEMENT_H

#include "habitation.h"

class Appartement : public Habitation {
	
	Appartement(float surface, int nbPieces, statut statu);
};

#endif
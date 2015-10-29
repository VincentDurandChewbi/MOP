#ifndef MAISON_H
#define MAISON_H

#include "habitation.h"

class Maison : public Habitation {
	Maison(float surface, int nbPieces, statut statu);
};

#endif
#ifndef IMMEUBLE_H
#define IMMEUBLE_H

#include "bien.h"

class Immeuble : public Bien {
	int nbAppartements;
	
	Immeuble(float surface, int nbAppartements);
};

#endif
#ifndef FACADE_H
#define FACADE_H

#include "Rectangle.h"
#include "Triangle.h"
#include "Porte.h"
#include "Fenetre.h"

class Facade : Rectangle, Triangle {
	
	Porte porte;
	Fenetre fenetre;
	int nb_portes;
	int nb_fenetres;
	
	Facade(Rectangle m, Triangle p, int nb_p, int nb_f);
};

#endif

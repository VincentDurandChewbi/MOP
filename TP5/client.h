#ifndef CLIENT_H
#define CLIENT_H

#include <string>

enum type { ACHETEUR, VENDEUR, LOUEUR, LOCATAIRE };

class Client {
	std::string nom;
	std::string prenom;
	std::string adresse;
	int tel;
	type typ;
	
	Client(std::string nom, std::string prenom, std::string adresse, int tel, type typ);
};

#endif
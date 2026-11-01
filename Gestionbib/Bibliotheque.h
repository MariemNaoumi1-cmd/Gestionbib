#pragma once
#include "Livre.h"
#include "Date.h"
namespace biblio {
	class Bibliotheque
	{
	private:
		Livre** livre;
		string nom;
		int capacite;
	    int nbLivre;
	public:
		Bibliotheque(string, int, int, Livre**);
		Bibliotheque(const Bibliotheque&);
		Bibliotheque operator=(const Bibliotheque&b);
		bool operator <=(const Bibliotheque&);
		Livre& ajouterLivre(const Livre& l);
		string rechercher(int nbLivre);
		int getId() const;
		string gettitre() const;
		~Bibliotheque();
	};
};

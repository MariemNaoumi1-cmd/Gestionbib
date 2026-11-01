#include "Livre.h"
namespace biblio {
	int biblio::Livre::compteurId = 0;
	int biblio::Livre::nblinsbtance = 0;
	Livre::Livre(int id, string auteur, string titre, int*notes, Date* d, int nbnote) : Id(id)
	{
		this->auteur = auteur;
		this->titre = titre;
		this->nbnote = nbnote;
		this->notes = new int [nbnote];// ??//
		Livre::compteurId++;
	 
	}
	Livre::Livre(const Livre& l) :Id(l.Id)// Oblige de fait ID ID car on pas des parametre dans ce constrecteur de recopie
	{
		this->auteur = l.auteur;
		this->titre = l.titre;
		this->nbnote = l.nbnote;
		this->notes = new int[l.nbnote];
		Livre::compteurId++;
	}

	bool Livre::operator=(const Livre& l)
	{
		if (this->titre == l.titre)
			return true;
		else 
		return false;
	}

	Livre::~Livre()
	{
		delete d;
		compteurId--;

	}
	
}
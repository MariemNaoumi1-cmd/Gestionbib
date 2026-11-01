#include "Bibliotheque.h"
#include "Livre.h"
namespace biblio {
biblio::Bibliotheque::Bibliotheque(string nom, int nb, int ca, Livre** l)
{
	this->nom = nom;
	this->nbLivre = nbLivre;
	this->livre = l;
	this->capacite = ca;
	this->livre = new Livre * [ca];
	for (int i = 0;i < ca;i++) {
		this->livre[i] = nullptr;
	}
	

}

biblio::Bibliotheque::Bibliotheque(const Bibliotheque&)
{
	this->nom = nom;
	this->nbLivre = nbLivre;
	this->livre = livre;
	this->capacite = capacite;
	this->livre = new Livre * [capacite];
	for (int i = 0;i < capacite;i++) {
		this->livre[i] = nullptr;
	}


}

Livre& biblio::Bibliotheque::ajouterLivre(const Livre& l)
{
     Livre* nouveau = new Livre(l);

        livre[nbLivre] = nouveau;

        nbLivre++;

        return *nouveau;
    }
string Bibliotheque::rechercher(int nbLivre)
{
   
    
        for (int i = 0; i < nbLivre; i++)
        {
            if (livre[i]->getId() == id)
            {
                return livre[i]->gettitre();
            }
        }

        return "Livre introuvable";
    }

}
    // TODO: insérer une instruction return ici


biblio::Bibliotheque::Bibliotheque(const Bibliotheque& b)
{
    if (this != &b)
    {
        for (int i = 0; i < nbLivre; i++)
        {
            delete livre[i];
        }

        delete[] livre;

        nom = b.nom;
        capacite = b.capacite;
        nbLivre = b.nbLivre;

        livre = new Livre * [capacite] {};

        for (int i = 0; i < nbLivre; i++)
        {
            if (b.livre[i] != nullptr)
            {
                livre[i] = new Livre(*b.livre[i]);
            }
        }
    }

    return *this;
} 
biblio::Bibliotheque::~Bibliotheque()
{
    for (int i = 0; i < nbLivre; i++)
    {
        delete livre[i];
    }

    delete[] livre;
}



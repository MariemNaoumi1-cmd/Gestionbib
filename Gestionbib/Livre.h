#pragma once
#include <string>
#include <iostream>
#include"Date.h"
using namespace std;
namespace biblio {
	class Livre
	{
	private:
		const int Id;
		string titre;
		string auteur;
		Date* d;
		int* notes;
		int nbnote;
		static int compteurId;
		static int nblinsbtance;
	public:
		Livre(int, string, string, int*, Date*, int);
		Livre(const Livre& l);
		bool operator=(const Livre& l);
		~Livre();
	};

}


#include <iostream>
#include "Date.h"
#include "Livre.h"
#include "Bibliotheque.h"

using namespace std;
using namespace biblio;

int main()
{
    // 1. Créer deux dates
    Date d1(10, 5, 2020);
    Date d2(15, 6, 2022);

    // 2. Créer les tableaux de notes
    int notes1[3] = { 4, 5, 3 };
    int notes2[2] = { 5, 4 };

    // 3. Créer deux livres
    Livre l1(1, "Ahmed", "Programmation C++",
        notes1, &d1, 3);

    Livre l2(2, "Sara", "Algorithmique",
        notes2, &d2, 2);

    // 4. Créer une bibliothèque
    Livre** tab = nullptr;

    Bibliotheque b("Bibliotheque FSTM", 0, 10, tab);

    // 5. Ajouter les livres
    b.ajouterLivre(l1);
    b.ajouterLivre(l2);

    cout << "Deux livres ajoutes !" << endl;

    return 0;
}
#include "Date.h"
#include<iostream>
using namespace std;
biblio::Date::Date(int j, int m, int a)
{
	this->jours = 1;
	this->mois = 1;
	this->annee = 2000;
}

bool biblio::Date::estbBissextile(int a)
{
	if (a % 400 == 0 && a % 100 != 0)
		return true;
	else
	return false;
}

bool biblio::Date::estValide(int j, int m, int a)
{
	if (j > 30 || m > 12 || a > 2026)
		return true;
	else
		false;
}

bool biblio::Date::operator==(const Date& d)
{
	if (this->jours == d.jours && this->mois == d.mois && this->annee == d.annee)
		return true;
	else 
	return false;
}

bool biblio::Date::operator>(const Date& b)
{
	int maxJours;

	if (this->mois == 2) {
		maxJours = 28;
	}
	else if (this->mois == 4 || this->mois == 6 ||
		this->mois == 9 || this->mois == 11) {
		maxJours = 30;
	}
	else {
		maxJours = 31;
	}
	if (this->jours >= 1 && this->jours <= maxJours &&
		this->mois >= 1 && this->mois <= 12 &&
		this->annee >= 1 && this->annee < 2026) {
		return true;
	}

	return false;

}


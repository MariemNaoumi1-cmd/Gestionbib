#pragma once 
#include <string>
using namespace std;
namespace biblio {
	class Date {
	private:
		int jours;
		int mois;
		int annee;
	public:
		Date(int, int, int);
		static bool estbBissextile(int a);
		static bool estValide(int j, int m, int a);
		bool operator==(const Date& d) ;
		bool operator>(const Date& b);




	};
}

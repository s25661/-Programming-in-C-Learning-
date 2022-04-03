//Napisz program, liczący pole kwadratu 
#include <iostream>
using namespace std;

int main()
{
	double bok, pole;

	cout << "Program obliczajacy pole kwadratu na podstawie dlugosci boku." << endl;
	cout << "Podaj dlugosc boku kwadratu: ";

	cin >> bok;

	if (bok > 0) {

		pole = bok * bok;

		cout << "Pole kwadratu o dlugosci boku: " << bok << " jest rowne: " << pole;
	}
	else {

		cout << "Pole kwadratu musi być większe niż 0";
	}
	return 0;
}
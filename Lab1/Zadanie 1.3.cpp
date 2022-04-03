//Napisz program, który sprawdzi, czy podana liczba całkowita jest parzysta, nieparzysta, czy żadna (0). 
#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Program sprawdajaca czy podana liczba jest parzysta, nieparzysta czy jest rowna 0" << endl;
	cout << "Wpisz liczbe: ";
	cin >> number;

	if (number == 0) {

		cout << "Wprowadzona liczba jest rowna zero.";
	}

	if (number > 0 || number < 0) {

		if (number % 2 == 0) {

			cout << "Wprowadzona liczba jest parzysta.";
		}

		else {

			cout << "Wprowadzona liczna jest nieparzysta";

		}
	}
	return 0;
}
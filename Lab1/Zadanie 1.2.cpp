//Napisz program, który sprawdzi, czy liczba całkowita jest dodatnia, ujemna czy może jest 0.
#include <iostream>
using namespace std;

int main() {
	int number;

	cout << "Podaj liczbe calkowita: ";
	cin >> number;

	if (number > 0) {

		cout << "Wpisales dodatnia liczbe calkowita: " << number << endl;

	}
	if (number < 0) {

		cout << "Wpisales ujemna liczbe calkowita: " << number << endl;
	}
	if (number == 0) {

		cout << "Wpisales liczbe calkowita o wartosci: " << number << endl;
	}

	cout << "Dziekuje.";
	return 0;
}
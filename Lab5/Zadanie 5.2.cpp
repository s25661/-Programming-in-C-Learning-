//Napisz program, który umożliwia:
//a) wczytanie aktualnego rozmiaru tablicy liczb całkowitych;
//b) wczytanie elementów tablicy liczb całkowitych;
//c) zamianę miejscami elementów tablicy, lezących po przeciwnej stronie prostej pionowej, dzielącej tablicę na dwie równe części.
#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::swap;

auto main() -> int
{
	int elementy, wartosci;

	cout << "Podaj liczbe elementow tablicy: ";
	cin >> elementy;
	cout << endl;

	int* tab;
	tab = new int[elementy];

	for (int i = 0; i < elementy; i++) {

		cout << "Podaj " << i + 1 << " element: ";
		cin >> wartosci;
		tab[i] = wartosci;

	}

	cout << endl << "Przed odwroceniem:\n" << endl;

	for (int i = 0; i < elementy; i++) {

		if (i < elementy / 2) {
			cout << tab[i] << '\t';

		}
		else {
			cout << '\t';
			cout << tab[i];

		}
		cout << endl;
	}

	for (int i = 0; i < elementy / 2; i++) {

		swap(tab[i], tab[elementy - 1 - i]);

	}

	cout << endl << "Po odwroceniu:\n" << endl;

	for (int i = 0; i < elementy; i++) {

		if (i < elementy / 2) {
			cout << tab[i] << '\t';

		}
		else {
			cout << '\t';
			cout << tab[i];

		}
		cout << endl;
	}
	return 0;
}
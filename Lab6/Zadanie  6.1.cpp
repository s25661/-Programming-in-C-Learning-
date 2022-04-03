//Napisz program, który obliczy, ile jest liczb naturalnych (tj. całkowitych, dodatnich)
//nie większych od n które są podzielne przez 5 ale nie są podzielne przez 3.
//Liczba nma być pobrana od użytkownika.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n, x;
	int j = 0;

	cout << "Program obliczajacy podzielnosc liczby przez 5, ale nie przez 3." << endl;
	cout << "Podaj liczbe: ";
	cin >> n;

	n = n + 1;
	auto  tab = new int[n];

	for (int i = 0; i < n; i++) {

		tab[i] = i;
	}

	for (int i = 0; i < n; i++) {

		if (tab[i] % 3 != 0 && tab[i] % 5 == 0) {

			j++;
		}
	}

	n = n - 1;

	cout << endl;
	cout << "Liczba: " << n << " dzieli sie przez (5), ale nie przez (3): " << j << " razy." << endl;
	delete[] tab;
	return 0;
}
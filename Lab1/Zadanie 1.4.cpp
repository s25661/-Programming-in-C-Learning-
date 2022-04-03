//Napisz program do znajdowania największej liczby wśród trzech liczb, podanych przez użytkownika. (1-3 rozwiązania)* wskazówka: && to operator logiczny AND
#include <iostream>;
using namespace std;

int main()
{
	int a, b, c;

	cout << "Program do sprawdzania, ktora z trzech liczb jest najwieksza." << endl;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Podaj trzecia liczbe: ";
	cin >> c;

	if (c && b < a) {

		cout << "Liczba " << a << " jest najwieksza.";
	}

	else if  (a && c < b) {

		cout << "Liczba " << b << " jest najwieksza.";
	}

	else {

		cout << "Liczba " << c << " jest najwieksza.";
	}
	return 0;
}

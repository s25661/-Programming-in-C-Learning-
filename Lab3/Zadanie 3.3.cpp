//Napisz program, który będzie rozwiązywał równanie kwadratowe:
//a)Wypisze na konsolę, jaką postać ma równanie kwadratowe. 
// b)Pobierze od użytkownika liczby A, B i C.
// c)Wypisze postać równania kwadratowego z uwzględnieniem wartości dla A, B i C.
//d)Obliczy i wypisze pierwiastki równania.
#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	double a, b, c, pdelta, delta, x, x1, x2;

	cout << "Rownanie kwadratowe ma postac: ax^2 + bx + c = 0" << endl;
	cout << "Liczba a: ";
	cin >> a;
	cout << "Liczba b: ";
	cin >> b;
	cout << "Liczba c: ";
	cin >> c;
	cout << "\n" << endl;
	cout << "Postac rownania kwadratowego z uwzglednieniem wartosci dla a, b i c : " << a << "x^2 + " << b << "x + " << c << " = 0\n" << endl;

	delta = (b * b) - 4 * a * c;
	pdelta = sqrt(delta);

	if (delta > 0) {

		x1 = (-b - pdelta) / (2 * a);
		x2 = (-b + pdelta) / (2 * a);

		cout << "Pierwiastki rownania kwadratowego wynosza: " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	if (delta == 0) {

		x = -b / (2 * a);

		cout << "Pierwiastek rownania kwadratowego wynosi: " << endl;
		cout << "x = " << x << endl;
	}
	if (delta < 0 ) {

		cout << "Delata = " << delta << endl; 
		cout << "Jesli delta jest mniejsa od zera, to rownanie kwadratowe nie ma rozwiazan." << endl;
	}
	return 0;
}
//Napisz program, który oblicza sumę, różnicę, iloczyn i iloraz dla dwóch liczb x i y wprowadzanych z klawiatury.
//W programie przyjmujemy, że liczby x i y są typu float(rzeczywistego). 
//Dla zmiennych x, y suma, różnica, iloczyn i iloraz należy przyjąć format wyświetlania ich na ekranie z dokładnością do dwóch miejsc po kropce.
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main()
{
	float x, y;
	double suma;

	cout << "Program obliczajacy sume, roznice, iloczyn i iloraz dla dwoch liczb. \n" << endl;
	cout << "Podaj liczbe x: ";
	cin >> x;
	cout << "Podaj liczbe y: ";
	cin >> y;
	cout << endl;

	cout << fixed << setprecision(2);

	suma = (x + y);
	cout << x << " + " << y << " = " << suma << endl;

	suma = (x - y);
	cout << x << " - " << y << " = " << suma << endl;

	suma = (x * y);
	cout << x << " * " << y << " = " << suma << endl;

	suma = (x / y);
	cout << x << " / " << y << " = " << suma << endl;

	return 0;
}

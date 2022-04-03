//Napisz program do obliczania szeregu wg podanego wzoru: (1)+ (1+2) + (1+2+3) + (1+2+3+4) + (1+2+3+4) + ... + (1+2+3+4+...+n).
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n, i, j, suma, sumasum = 0;

	cout << "Program obliczania do obliczna szeregu." << endl;
	cout << "Podaj liczbe wyrazow szeregu: ";
	cin >> n;
	if (n > 0) {

		for (i = 1; i <= n; i++) {

			suma = 0;

			for (j = 1; j <= i; j++) {

				sumasum = sumasum + j;
				suma = suma + j;
				cout << j;

				if (j - i) {

					cout << "+";
				}


			}
			cout << "=" << suma << endl;

		}
		cout << "Suma wszystkich szeregow = " << sumasum << endl;
	}
	else {

		cout << "Szereg musi byc dodatni!";
	}
	return 0;
}
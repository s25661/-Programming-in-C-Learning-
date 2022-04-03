//Napisz program, który:
// A) Pobierze od Użytkownika liczb "a" oraz "b" oraz wypisze je na ekran.
// B) Wypisze wiersz gwiazdek o długości "a".
// C) Wypisze kolumnę gwiazdek o długości "b".
// D) Wypisze wypełniony prostokąt gwiazdek o wymiarach "a" na "b".
// E) Wypisze obwód (obramowanie) prostokątugwiazdek o wymiarach "a" na "b". (Wskazówka: warto skorzystać z operatora logicznego || -OR).
//=== Podpunkty bonusowe ===
//F*) Wypisze trójkąt prostokątny równoramienny:
//•o pionowej przyprostokątnej o długości "a" oraz poziomej przyprostokątnej o długości TAKŻE "a".
//•liczba gwiazdek w kolejnych wierszach: 1, 2, 3, ..., a-1, a.
//•kąt prosty w trójkącie: lewy dolny róg.
//G*) Jak w podpunkcie F, ale:
//•liczba gwiazdek w kolejnych wierszach NA ODWRÓT: a, a-1, ..., 3, 2, 1;
//•kąt prosty w trójkącie: prawy górny róg. 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b;

	cout << "Program do rysowania." << endl;
	cout << "Podaj liczbe: ";
	cin >> a;
	cout << "Podaj liczbe: ";
	cin >> b;
	cout << endl;


	cout << "Pobrano liczbe 'a' = " << a << " i liczbe 'b' = " << b << endl;
	cout << "\n";
	cout << "Wiersz o dlugosci 'a':" << endl;

	for (int i = 1; i <= a; i++) {

		cout << "*";
	}

	cout << "\n" << endl;
	cout << "Kolumna o dlugosci 'b':" << endl;

	for (int i = 1; i <= b; i++) {

		cout << "* \n";
	}

	cout << "\n" << endl;
	cout << "Prostokat o wymiarach 'a' na 'b'." << endl;

	for (int i = 1; i <= a; i++) {

		cout << "\n";

		for (int i = 1; i <= b; i++) {

			cout << "*";
		}
	}

	cout << "\n" << endl;
	cout << "Obwod prostokatu o wymiarach 'a' na 'b'." << endl;


	for (int i = 0; i < a; i++)
	{
		cout << "* ";
		for (int l = 1; l < b - 1; l++)
		{
			if (i > 0 && i < a - 1)
			{
				cout << "  ";
			}
			else

				cout << "* ";
		}
		cout << "*\n";
	}

	cout << "\n" << endl;
	cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu." << endl;

	for (int i = 1; i <= a; i++) {

		cout << endl;

		for (int j = 1; j <= i; j++) {

			cout << "*";
		}
	}

	cout << "\n" << endl;
	cout << "trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu." << endl;

	for (int i = 0; i < a; i++) {

		cout << endl;

		for (int j = 0; j < a; j++) {
			 
			if (j < i) {

				cout << " ";
			}
			else {

				cout << "*";
			}
		}
	}
	cout << "\n" << endl;

	return 0;
}
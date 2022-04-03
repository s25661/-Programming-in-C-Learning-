//Napisz program, wyświetlający na ekranie znaki z klawiatury do momentu, aż zostanie podany znak „t”.
#include <iostream>
#include <conio.h>
	using std::cout;
	using std::cin;
	using std::endl;

	int main()
	{
		char litera;

		cout << "Wypisz litere \" t \" inaczej program nie przestanie dzialac ." << endl;

		while (1) {

			litera = _getch();
			cout << litera;
			if (litera == 't')
			{
				cout << "\n" << endl; 
				cout << "Podales poprawna litere. Progam zakonczyl swoja prace." << endl;
				break;
			}
		}
	}
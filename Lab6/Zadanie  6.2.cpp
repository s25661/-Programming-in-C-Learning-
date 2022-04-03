//Napisz program, który będzie symulował grupę 6 uczniów z kilku równoległych klas i ich wyniki w nauce z czterech przedmiotów.
//Program powinien wczytać sześciu uczniów o następujących właściwościach:
//•imię ucznia;
//•oceny z informatyki, matematyki, biologii i języka polskiego,
//a potem odpowiadał na pytania o ocenę z danego przedmiotu,
//gdzie najpierw pobiera od użytkownika numer ucznia, a następnie –numer przedmiotu.[2 p.]

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct student {

	string imie;
	int ocenaInf;
	int ocenaMat;
	int ocenaChem;
	int ocenaJP;
};

int main() {

	struct student index[6];
	int i, zapytanie, nrUcznia, nrPrzed;

	for (i = 0; i < 6; i++) {

		cout << "Podaj imie ucznia nr " << i + 1 << ": ";
		cin >> index[i].imie;
		cout << "Podaj ocene z informatyki: ";
		cin >> index[i].ocenaInf;
		cout << "Podaj ocene z matematyki: ";
		cin >> index[i].ocenaMat;
		cout << "Podaj ocene z chemii: ";
		cin >> index[i].ocenaChem;
		cout << "Podaj ocene z jezyka Polskiego: ";
		cin >> index[i].ocenaJP;
		cout << endl;
	}

	cout << "--------------------------------------" << endl;
	cout << "Podaj liczbe zapytan: ";
	cin >> zapytanie;
	cout << endl;

	for (i = 0; i < zapytanie; i++) {

		cout << "Podaj nr ucznia[1-6]: ";
		cin >> nrUcznia;
		cout << "Podaj nr przedmiotu[1-4]:";
		cin >> nrPrzed;
		cout << "Uczen: " << index[nrUcznia - 1].imie;
		if (nrPrzed == 1) {

			cout << ", ocena z informatyki: " << index[nrUcznia - 1].ocenaInf;
		}
		if (nrPrzed == 2) {

			cout << ", ocena z matematyki: " << index[nrUcznia - 1].ocenaMat;
		}
		if (nrPrzed == 3) {

			cout << ", ocena z chemii: " << index[nrUcznia - 1].ocenaChem;
		}
		if (nrPrzed == 4) {

			cout << ", ocena z jezyka Polskiego: " << index[nrUcznia - 1].ocenaJP;
		}
		cout << endl << endl;
	}
	return 0;
}
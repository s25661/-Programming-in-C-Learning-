//Napisz program, który wskazuje najczęściej występujący element w tablicy liczb całkowitych.
//Liczbę elementów tablicy i ich wartości pobierz od użytkownika.
#include <iostream>;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int wiersz, licznik_wystapien, wartosc_elementu, liczba_powtorzen_wartosci, najczesciej_powtarzany_element;

	cout << "Podaj liczbe wierszy danej tablicy: ";
	cin >> wiersz;

	auto tablica = new int[wiersz];

	for (int i = 0; i < wiersz; i++) {

		cout << "Podaj " << i + 1 << " wartosc: ";
		cin >> tablica[i];

	}


	liczba_powtorzen_wartosci = 0;

	for (int i = 0; i < wiersz; i++) {

		wartosc_elementu = tablica[i];
		licznik_wystapien = 0;

		for (int j = 0; j < wiersz; j++) {

			if (wartosc_elementu == tablica[j]) {
				licznik_wystapien++;
			}

			if (licznik_wystapien > liczba_powtorzen_wartosci) {

				liczba_powtorzen_wartosci = licznik_wystapien;
				najczesciej_powtarzany_element = wartosc_elementu;

			}
		}
	}

	cout << "Najczestrzym elementem jest liczba wynoszaca: " << najczesciej_powtarzany_element << " pojawila sie: " << liczba_powtorzen_wartosci << " razy." << endl << endl;

	delete[] tablica;
	return 0;
}
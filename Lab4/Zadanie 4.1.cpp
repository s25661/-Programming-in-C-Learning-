// Znajdź największy element danej tablicy liczb całkowitych. Liczbę elementów tablicy i ich wartości pobierz od użytkownika.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int najwieksza_wartosc(int* tablica,  int wiersz)
{
	int max = tablica[0];
	
	for (int i = 0; i < wiersz; i++)
	{
		int x = tablica[i];
		if (x > max)
			max = tablica[i];
	}
	return max;
}

int main()
{
	 int x, wiersz;
	
	cout << "Podaj liczbe wierszy: ";
	cin >> wiersz;
	
	auto tablica = new int[wiersz];
	
	for (int i = 0; i < wiersz ; i++) {

		cout << "Podaj " << i + 1 << " wartosc: ";
		cin >> tablica[i];
	}
	
	cout << "Najwiekszy element danej tablicy to: " << najwieksza_wartosc(tablica, wiersz) << endl;

	delete[] tablica;
 
	return 0; 
}
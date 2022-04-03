//Napisz program, w którym: 
//a) użytkownik poda liczbę elementów wektora;
//b) pobrane zostaną od użytkownika wszystkie elementy wektora;
//c) wskazana zostanie wartość elementu maksymalnego wektora;
//d) Wskazany zostanie numer indeksu elementu maksymalnego.
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

auto main() -> int
{
	int liczba_elementow, elementy,max;

	cout << "Podaj liczbe elementow wektora: ";
	cin >> liczba_elementow;
	cout << endl; 
	cout << "Podaj wartosci elementow wektora.\n" << endl;
		
	vector<int>tab(liczba_elementow);
		
	for (int i = 0; i < liczba_elementow; i++) {

		cout << "Podaj " << i + 1 << " wartosc: "; 
		cin >> tab[i];
	}

	int max1 = 0, maxIndex = 0, i = 0;

	for (auto const& element : tab)
	{
		if (element > max1)
		{
			max1 = element;
			maxIndex = i;
		}
		i++;
	}
	cout << endl;
	cout << "Najwiekszy element to " << max1 << " a jego index wynosi " << maxIndex + 1;
	cout << endl;
	return 0; 
}
/*Napisz program, który w zadeklarowanej tablicy dwuwymiarowej 10x10 umieszcza:
- w pierwszej kolumnie liczby od 0 do 9;
- w drugiej sumę tych liczb (np. 0+0, 1+1 itd..);
(1 p.)
* Część bonusowa:
- w trzeciej – kwadraty tych liczb;
- w czwartej – sumę numeru wiersza i numeru kolumny;
- w piątej – wynik różnicy numeru wiersza i numeru kolumny;
- w pozostałych kolumnach 0 (interpretacja graficzna tablicy poniżej).
(*2 p.)*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int tablica[10][10];


	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			if (j == 0) {
				tablica[i][j] = i;

			}
			else {
				tablica[i][j] = 0;
			}
			if (j == 1) {
				tablica[i][j] = i + i;
			}
			if (j == 2) {

				tablica[i][j] = i * i; 
			}
			if (j == 3) {
				tablica[i][j] = i + j; 
			}
			if (j == 4) {
				tablica[i][j] = i - j ;
			}
		}
	}

	/*WYŚwietlanie tablicy*/
	for (int i = 0; i < 10; i++) {
		cout << "\n";
		for (int j = 0; j < 10; j++) {

			cout << tablica[i][j] << "   ";
		}
	}

	cout << endl << endl;
	return 0;
}
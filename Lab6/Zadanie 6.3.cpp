//Napisz program do sortowania wektora struktur studentów według numerów indeksów.
//Struktura Student ma zawierać informacje o: imieniu, nazwisku i numerze indeksu.[2 p.]
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

struct student {

	int numer;
	string imie;
	string nazwisko;

};

int main() {

	vector<student> indeks = { {72165, "Leo", "Kowal"},
								{783, "Maciej", "Demp"},
								{260000, "Alicja","Kolecka"},
								{15, "Katarzyna", "Szczaw"},

	};

	cout << "Wektor przed sortowaniem: " << endl << endl;

	for (const auto& array : indeks) {

		cout << array.numer << "\t " << array.imie << " " << array.nazwisko << endl;
	}

	

	cout << endl;
	cout << "Wektor posortowany: " << endl << endl;

	for (const auto& array : indeks) {

		cout << array.numer << "\t " << array.imie << " " << array.nazwisko << endl;
	}

	return 0;
}
//Użyj instrukcji switchi napisz program, który:
//a)Pobierze od Użytkownika liczbę z przedziału [1,12], reprezentującą wybrany miesiąc w roku.
//b)Jeśli podana przez użytkownika liczba będzie spoza przedziału, program poinformuje o tym użytkownika i zakończy się.
//c)Wypisze polską nazwę miesiąca (ale bez polskich znaków).
//d)Wypisze ile dni ma wybrany miesiąc w roku nieprzestępnym.
//e)Wypisze czy w tym miesiącu jest słonecznie, czy pochmurno. Słonecznie jest od kwietnia włącznie do września włącznie.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int month;
	cout << "Podaj numer miesiaca (od 1 do 12)." << endl;
	cin >> month;
	switch (month)
	{
	case 1:
		cout << "styczen. \n";
		cout << "31 dni. \n";
		cout << "Pochmurny miesiac." << endl;
		break;
	case 2:
		cout << "Luty. \n";
		cout << "28 dni. \n";
		cout << "Pochmurny miesiac." << endl;
		break;
	case 3:
		cout << "Marzec. \n";
		cout << "31 dni. \n";
		cout << "Pochmurny miesiac." << endl;
		break;
	case 4:
		cout << "Kwiecien. \n";
		cout << "30 dni. \n";
		cout << "Sloneczny miesiac." << endl;
		break;
	case 5:
		cout << "Maj. \n";
		cout << "31 dni. \n";
		cout << "Sloneczny miesiac." << endl;
		break;
	case 6:
		cout << "Czerwiec. \n";
		cout << "30 dni \n";
		cout << "Sloneczny miesiac." << endl;
		break;
	case 7:
		cout << "Lipiec. \n";
		cout << "31 dni \n";
		cout << "Sloneczny miesiac" << endl;
		break;
	case 8:
		cout << "Sierpien. \n";
		cout << "31 dni. \n";
		cout << "Sloneczny miesiac." << endl;
		break;
	case 9:
		cout << "Wrzesien. \n";
		cout << "30 dni. \n";
		cout << "Sloneczny miesiac." << endl;
		break;
	case 10:
		cout << "Pazdziernik. \n";
		cout << "31 dni. \n";
		cout << "Pochmurny miesiac." << endl;
		break;
	case 11:
		cout << "Listopad. \n";
		cout << "30 dni. \n";
		cout << "Pochmurny miesiac." << endl;
		break;
	case 12:
		cout << "Grudzien. \n";
		cout << "31 dni \n";
		cout << "Pochmurny miesiac." << endl;
		break;
	default:
		cout << "Zostala wybrana liczba spoza zakresu. Rok ma tylko 12 miesiecy.";

	}
	return 0;
}

//Napisz program, który wypisze na ekranie trójkąt Pascala. Liczba wierszy trójkąta ma być pobrana od użytkownika.
#include <iostream>
using std::cin;
using std::cout;
using std::endl; 

int main()
{
	int a, b, c, x, rzad;
	
	cout << "Trojkat Pascala z iloscia rzedow liczaca: " ;
	cin >> rzad;
	cout << endl; 

	for (a = 0; a < rzad; a++)
	{
		int x = 1;
		for (b = 0; b < rzad - 1 - a; b++)
		{
			cout << " "; 
		}
		for (c = 0; c <= a; c++)
		{
			cout << " " << x;
			x = x * (a - c) / (c + 1);
		}
		cout << endl;
	}
	return 0;
}
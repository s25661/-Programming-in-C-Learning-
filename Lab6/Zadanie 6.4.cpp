//Napisz program, który będzie dokonywał konkatenacji podanego przez użytkownika stringa n razy.
//Liczbę n także należy pobrać od użytkownika.
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

	int n;
	string napis;

	cout << "Program dokonujacy konkatenacji podanego wyrazu." << endl;
	cout << "Podaj dowolny wyraz: ";
	cin >> napis;
	cout << "Podaj ile razy chcesz polaczyc ze soba ten wyraz: ";
	cin >> n;

	if (n % 2 == 0) {
		
		for (int i = 0; i < n / 2; i++) {

			cout << napis + " " + napis + " ";
		}
	}
	else {
		
		for (int i = 0; i < n ; i++) {

			cout << napis + " ";
		}
	}

	cout << endl; 
	return 0;
}
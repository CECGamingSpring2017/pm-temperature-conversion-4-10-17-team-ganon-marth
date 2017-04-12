#include <iostream>
#include <ctime>


using namespace std;

int main() {

	char p1;
	char p2;
	int random;

	cout << "Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter P, R, S, L, or K)" << endl;
	cin >> p1;
	srand(time(NULL));
	random = rand() % 5;

	if (random == 0)
		p2 = 'R';
	else if (random == 1)
		p2 = 'P';
	else if (random == 2)
		p2 = 'S';
	else if (random == 3)
		p2 = 'L';
	else if (random == 4)
		p2 = 'K';
	
	cout << "Player One: " << p1 << endl;
	cout << "Player Two: " << p2 << endl;


	if (p1 == 'K' && (p2 == 'S' || p2 == 'R')) {
		cout << "p1 wins!" << endl;
	}
	else if (p1 == 'L' && (p2 == 'P' || p2 == 'K')) {
		cout << "p1 wins!" << endl;
	}

	else if (p1 == 'S' && (p2 == 'L' || p2 == 'P')) {
		cout << "p1 wins!" << endl;
	}

	else if (p1 == 'P' && (p2 == 'R' || p2 == 'K')) {
		cout << "p1 wins!" << endl;
	}

	else if (p1 == 'R' && (p2 == 'S' || p2 == 'K')) {
		cout << "p1 wins!" << endl;
	}









	else if (p2 == 'K' && (p1 == 'S' || p1 == 'R')) {
		cout << "p2 wins!" << endl;
	}
	else if (p2 == 'L' && (p1 == 'P' || p1 == 'K')) {
		cout << "p2 wins!" << endl;
	}

	else if (p2 == 'S' && (p1 == 'L' || p1 == 'P')) {
		cout << "p2 wins!" << endl;
	}

	else if (p2 == 'P' && (p1 == 'R' || p1 == 'K')) {
		cout << "p2 wins!" << endl;
	}

	else if (p2 == 'R' && (p1 == 'S' || p1 == 'K')) {
		cout << "p2 wins!" << endl;
	}
	else if (p1 == p2) {
		cout << "Tie!" << endl;
	}

}//end main
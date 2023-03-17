#include <iostream>
#include "choinka.h"

using namespace std;

Choinka::Choinka(int par) : par(par) {}

void Choinka::rysuj() {
	for (int i = 1; i <= par; i++) {
		for (int j = 1; j <= par * 3 - i - 2; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = par + 1 - 2; i < 2*par + 1; i++) {
		for (int j = 1; j <= par * 3 - i - 2; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = par*2 + 1 - 4; i < par * 3 - 1; i++) {
		for (int j = 1; j <= par * 3 - i - 2; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= par; i++) {
		for (int j = 1; j < (6 * par - 1)/2 - 1; j++) {
			cout << " ";
		}
		cout <<  "*" << endl;
	}
}

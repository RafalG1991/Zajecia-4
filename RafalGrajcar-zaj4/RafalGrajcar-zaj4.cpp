#include <iostream>
#include "choinka.h"

using namespace std;

int main()
{
    int par;

    cout << "Wprowadz parametr poczatkowy do budowy choinki (liczba linii bloku 1):" << endl;
    cin >> par;

    Choinka choinka(par);

    cout << "Choinka"<<endl;

    choinka.rysuj();
}
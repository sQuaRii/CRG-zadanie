// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*
	string pochutina[5] = { "hruska", "jablko", "zemiak", "mrkva", "ananas" };

	for (int i = 4; i <= 4; i--) {
		cout << pochutina[i] << endl;

		if (i <= 0) {
			return 0;
		}
	}
	*/
    int cislo[10], polecisel, maximalnahodnota, minimalnahodnota , vypocet, priemernahodnota, hodnotapola, hodnotaindex ,velkostPola, i;
    
    polecisel = 10;
    vypocet = 0.0;

    cout << "Zadajte jednotlive prvky   : " << endl;
    for (i = 0; i < polecisel; i++) {
        cin >> cislo[i];
    }

    maximalnahodnota = cislo[0];
    for (i = 0; i < polecisel; i++) {
        if (maximalnahodnota < cislo[i])
            maximalnahodnota = cislo[i];
    }

    minimalnahodnota = cislo[0];
    for (i = 0; i < polecisel; i++) {
        if (minimalnahodnota > cislo[i])
            minimalnahodnota = cislo[i];
    }

    velkostPola = sizeof(cislo) / sizeof(cislo[0]);
    priemernahodnota = cislo[0];
    for (i = 0; i < polecisel; i++) {
        vypocet += cislo[i];
        priemernahodnota = vypocet / velkostPola;
    }

    cout << "Maximalna hodnota: " << maximalnahodnota << endl;
    cout << "Minimalna hodnota: " << minimalnahodnota << endl;
    cout << "Priemerna hodnota: " << priemernahodnota << endl;
    cout << "Pole je dlhe " << velkostPola << endl; 


    cout << "Vyberte hodnotu v poli 1-10" << endl;
    cin >> hodnotapola;
    hodnotaindex = hodnotapola - 1;
    cout << "Hodnota na indexe " << hodnotaindex << " je " << cislo[hodnotaindex] << endl;


 

}


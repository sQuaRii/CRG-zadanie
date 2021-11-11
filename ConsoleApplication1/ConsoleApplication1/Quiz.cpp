// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> 
using namespace std;

int main()
{
    int odpoved = 0;

    cout << "Ake je hlavne mesto Slovenska?" << endl;
        cout << "(1) Praha" << endl;
        cout << "(2) Bratislava" << endl;
        cout << "(3) Tokyo" << endl;
        cout << "(4) New york" << endl;
    cin >> odpoved;
    switch (odpoved) {
    case 1:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
            return (3);
    case 2:
        cout << "Zadal si spravnu odpoved" << endl;
        break;
 
    case 3:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    case 4:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    default:
        cout << "Toto nebola odpoved" << endl;
        exit(3);
        return (3);

    }
    for (int odpoved = 0; odpoved < 1; ++odpoved)
        system("CLS");
        cout << "Ake bude nove meno facebooku?" << endl;
    cout << "(1) Steam" << endl;
    cout << "(2) MarkZuckerberg" << endl;
    cout << "(3) AmongUs" << endl;
    cout << "(4) Meta" << endl;
    cin >> odpoved;

    switch (odpoved) {
    case 1:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    case 2:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    case 3:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    case 4:
        cout << "Zadal si spravnu odpoved" << endl;
        break;
    default:
        cout << "Toto nebola odpoved" << endl;
        exit(3);
        return (3);

    }
    for (int odpoved = 0; odpoved < 1; ++odpoved)
        system("CLS");
        cout << "Ktora z tychto hier je MOBA?" << endl;
    cout << "(1) League of Legends" << endl;
    cout << "(2) CS:GO" << endl;
    cout << "(3) COD:Warzone" << endl;
    cout << "(4) Fornite" << endl;
    cin >> odpoved;
    switch (odpoved) {
    case 1:
        cout << "Zadal si spravnu odpoved" << endl;
        break;
    case 2:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    case 3:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    case 4:
        cout << "Zadal si nespravnu odpoved" << endl;
        exit(3);
        return (3);
    default:
        cout << "Toto nebola odpoved" << endl;
        exit(3);
        return (3);

    }
    cout << "Gratulujem presiel si testom." << endl;
}
#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <fstream>
#define NMAX 20
#define LMAX 100

using namespace std;
int NrCuvinte(char sir[]);
int LungimeaMaxima(char sir[]);
int Palindroame(char sir[], char lit);
int NrCuvinte();
int LungimeaMaxima();
int Palindroame(char lit);
int TransferCuvinte();
int EliminaCuvinte();
void ViewFisier(char nume[]);

int main()
{   int optiune, nr;
    char fraza[LMAX]="ANA este prietena cu Marina CABAC";
    do
    {
        system("cls");
        cout << "Proiect nr.5, elaborat de Davidov Ecaterina" << endl;
        cout << "Tema:Sir!" << endl;
        cout << "1.Numar de cuvinte" << endl;
        cout << "2.Cuvintele de lungime cel putin 5 litere dintr-o fraza" << endl;
        cout << "3.Cuvintele Palindroame";
        cout << "4.Numar de cuvinte dintr-un fisier" << endl;
        cout << "5.Cuvintul de lungimea maxima din fisier" << endl;
        cout << "6.Cuvintele Palindroame" << endl;
        cout << "7.Transfer cuvintele de lungime cel putin 5 litere dintr-o fraza";
        cout << "8.Eliminare cuvinte din fisier";
        cout << "0.Stop";
        cout << "\n\n\t Alege (de la 0 la 9) -> ";
        cin >> optiune;

        switch (optiune)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
        }
        getc();
    } while(optiune);
    return 0;
}
int NrCuvinte(char sir[])
{
    return 1;
}
int LungimeaMaxima(char sir[])
{
    return 1;
}
int Palindroame(char sir[])
{
    return 1;
}
int NrCuvinte()
{
    return 1;
}
int LungimeaMaxima()
{
    return 1;
}
int Palindroame()
{
    return 1;
}

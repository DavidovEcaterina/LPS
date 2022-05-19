#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
#include <conio.h>
#define NMAX 1020
#define CMAX 20
#define LMAX 20


using namespace std;

void Afisare(int n,  int m, int a[LMAX][CMAX], char sir[]);
int Citire(int n, int m, int a[LMAX][CMAX]);
int Minim(int n, int m, int a[LMAX][CMAX]);
int Maxim(int n, int m, int a[LMAX][CMAX]);
int Media(int n, int m, int a[LMAX][CMAX]);
void Pozitia(int n, int m, int a[LMAX][CMAX], int val);
int Interschimb(int n, int a[LMAX][CMAX], int l1, int l2);
int AdaugLinie(int &n, int m, int a[LMAX][CMAX], int l1, int l2);
int Aranjare(int n, int m, int a[LMAX][CMAX], int val);
int Generare(int n, int m, int a[LMAX][CMAX], int val);


int main()
{
    int opt, aux;
    int n, m;
    int cost[LMAX][CMAX] = {{50, 102, 14},
        {305, 110, 101},
        {503, 105, 120},
        {700, 126, 147},
        {534, 100, 173}
    };

    cout << "Dati numarul de linii si coloane ";
    cin >>n>>m;
    Citire(n,m, cost);

    do
    {
        system("cls");
        cout << "Proiect nr. 4, elaborat de Davidov Ecaterina " << endl;
        cout << "Tema: Costul medicamentelor" << endl;
        cout << "\n1. De calculat costului minima si maxima";
        cout << "\n2. De calculat media costurilor";
        cout << "\n3. De efectuat aranjarea  crescator/descrescator";
        cout << "\n4. De interschimbat ";
        cout << "\n5. De adaugat o (linie sau coloana)";
        cout << "\n6. De aranjat dupa o  ...";
        cout << "\n7. De generat o matrice ";
        cout << "\n0. Stop";
        cout << "\n\n\t Alege (de la 0 la 8): ";
        cin >> opt;
        switch(opt)
        {
        case 1:
            Afisare(n, m, cost, "initial");
            aux = Minim(n, m, cost);
            cout << "\n Cel mai mic pret: " << aux;

            aux = Maxim(n, m, cost);
            cout << "\n Cea mai mare pret este: " << aux;

            break;
        case 2:
            Afisare(n, m, cost, "initial");
            cout << "\n Media apartlor este: " << Media(n, m, cost);
            break;
        case 3:
            Afisare(n, m, cost, "initial");
            Aranjare(n, m, cost, 10);
            Afisare(n, m, cost, "aranjat descrescator");
            //Afisare(n, m, cost, "aranjat crescator");
            break;
        case 4:
            Afisare(n, m, cost, "initial");
            Interschimb(n, cost, 11, 12);
            Afisare(n, m, cost, "interschimbat");
            break;
        case 5:
            Afisare(n, m, cost, "initial");
            AdaugLinie(n, m, cost, 11, 12);
            Afisare(n, m, cost, "adaugat o linie");
            break;
        case 6:
            Afisare(n, m, cost, "initial");
            Aranjare(n, m, cost, 2);
            Afisare(n, m, cost, "aranjat");
            break;
        case 7:
            Afisare(n, m, cost, "initial");
            Generare(n, m, cost, 10);
            Afisare(n, m, cost, "generat");
            break;
        }
        _getch();
    }
    while(opt);
    return 0;
}

int Citire(int n, int m, int a[LMAX][CMAX])
{
    int varianta;
    cout << "\n Alege varianta de citire:\n";
    cout << "\n 1. De la tastatura;";
    cout << "\n 2. Aleator;";
    cout << "\n 5. Implicit.";
    cout << "\n\t -> ";
    cin >> varianta;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            switch(varianta)
            {
            case 1:
                cout << "Indica ...: ";
                cin >> a[i][j];
                break;
            case 2:
                a[i][j]= rand() % NMAX+1;
                break;
            }
    return 0;
}

void Afisare(int n, int m, int a[LMAX][CMAX], char sir[])
{
    int i, j;
    cout << "\n Tabloul " << sir << " al costurilor\n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            cout << setw(8) << a[i][j];
        cout << endl;
    }
}
int Minim(int n, int m, int a[LMAX][CMAX])
{
    int i, j, aux;
    aux = a[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(a[i][j]< aux) aux = a[i][j];
    return aux;
}
int Maxim(int n, int m, int a[LMAX][CMAX])
{
    int i, j, aux;
    aux = a[0][0];
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(a[i][j]> aux) aux = a[i][j];
    return aux;
}
int Media(int n, int m, int a[LMAX][CMAX])
{
    int i, j;
    double med;
    med = 0.00;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            med += a[i][j];
    med /= (n*m);
    return med;
}
void Pozitia(int n, int m, int a[LMAX][CMAX], int val)
{

}
int Interschimb(int n, int a[LMAX][CMAX], int valoare1, int valoare2)
{
    return 1;
}
int AdaugLinie(int &n, int m, int a[LMAX][CMAX], int l1, int l2)
{
    return 1;
}
int Aranjare(int n, int m, int a[LMAX][CMAX], int val)
{
    return 1;
}
int Generare(int n, int m, int a[LMAX][CMAX], int val)
{
    return 1;
}

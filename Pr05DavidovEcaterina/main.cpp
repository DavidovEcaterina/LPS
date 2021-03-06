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
int Lungimeamaxa(char sir[]);
int CuvinteIncep(char sir[]);
int ViewFile(char nume[]);
void CopiaRezerva(char nume[]);
int NrCuvinte(char sir[]);
int Palindroame(char slovo[]);
int LungimeaMaxima(char sir[]);
int CuvinteIncep(char sir[]);
int TransferLungimeaMaxima(char sir[]);
int EliminaLungimeaMaxima(char sir[]);

int main()
{
    int key;
    char fraza [81] = "ANA Virlan  prieteneste cu ANA CABAC a";
    cout << "Project Nr.5 elaborat de Davidov Ecaterina"<< endl;
    cout << "Tema: ŞIR"<< endl;
    do
    {
        cout << "\n 1.Numarul de cuvinte dintr-un fraza:";
        cout << "\n 2.Cuvintele palindrome dintr-o fraza.";
        cout << "\n 3.Cuvintele de lungime cel putin 5 litere dintr-o fraza";
        cout << "\n 4.Numarul de cuvinte dintr-un fisier.";
        cout << "\n 5.Cuvintele  palindrome dintr-un fisier";
        cout << "\n 6.Cuvintele de lungime putin 5 linetere dint-un fisier";
        cout << "\n 7.De inscris  in alt fisier cuvintele de lungimi > 5 caractere";
        cout << "\n 8.De sters cuvintele de lungime ->5 litere dentr-un fisier";
        cout << "\n 9.Stop";
        cout << "\n\n\t Alegeti (de la 0 la 9)";
        cin >> key;
        switch(key)
        {
        case 1:
            cout << "Fraza initiala \n";
            puts(fraza);
            if (NrCuvinte(fraza) != 0)
                cout << "In total " << NrCuvinte(fraza) << " cuvinte" << endl;
            else
                cout << "Nu-s cuvinte";
            break;
        case 2:
            cout << "Fraza initiala \n";
            puts(fraza);
            if (NrCuvinte(fraza) !=  0)
                LungimeaMaxima(fraza);
            else
                cout << "Nu-s cuvinte" << endl;
            break;
        case 3:
            cout << "Fraza initiala \n";
            puts(fraza);
            if (NrCuvinte(fraza) != 0)
                CuvinteIncep(fraza);
            else
                cout << "Nu-s cuvinte";
            break;
        case 4:
            cout << "Fraza initiala din fisier: \n";
            ViewFile("fraza.txt");
            break;
        case 5:
            cout << "Fraza initiala din fisier: \n";
            ViewFile("fraza.txt");
            break;
        case 6:
            cout << "Fraza initiala din fisier: \n";
            ViewFile("fraza.txt");

            break;
        case 7:
            cout << "Fraza initiala din fisier: \n";
            ViewFile("fraza.txt");
            break;
        case 8:
            cout << "Fraza initiala din fisier: \n";
            ViewFile("fraza.txt");
            break;
        case 9:

            break;
        }
        fflush(stdin);
        cout << "Apasa enter: " << getchar();
    }
    while(key);

    return 0;
}

int NrCuvinte(char sir[])
{
    char copia[81], *cuvint;
    int n = 0;
    strcpy(copia, sir);
    if ((cuvint = strtok(copia, " ,.:\n\t-")) == NULL) return 0;
    n = 1;
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        n++;
    return n;
}
int LungimeaMaxima(char sir[])
{
    char copia1[81], copia2[81], *cuvint;
    int max = 0;
    strcpy(copia1, sir);
    strcpy(copia2, sir);
    if ((cuvint = strtok(copia1, " ,.:\n\t-")) == NULL) return 0;
    max = strlen(cuvint);
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
    {
        if (strlen(cuvint) >= max)
        {
            max = strlen(cuvint);
        }
    }
    cout << "Cuvintul cu lungimea maxima: ";
    if ((cuvint = strtok(copia2, " ,.:\n\t-")) == NULL) return 0;
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
    {
        if(strlen(cuvint) == max) cout << cuvint << " ";
    }

    return 1;
}
int CuvinteIncep(char sir[])
{
    char copia[81], *cuvint;
    char litere[NMAX];
    int i = 0, val;
    cout << "Cate litere vor fi: ";
    cin >> val;
    cout << "Introduceti litere necesare:\n";
    for (i = 0; i < val; i++)
    {
        cout << "Litera " << i + 1 << " : ";
        cin >> litere[i];
    }
    strcpy(copia, sir);
    cout << "Cuvintele care incep cu o litera din intervalul dat:\n\t";
    if ((cuvint = strtok(copia, " ,.:\n\t-")) == NULL) return 0;
    for (i = 0; i < val; i++)
    {
        if (cuvint[0] == litere[i])
            cout << cuvint << ", ";
    }
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        for (i = 0; i < val; i++)
        {
            if (cuvint[0] == litere[i])
                cout << cuvint << ", ";
        }
    //cout << cuvint[0] << endl;
    return 1;
}
int Palindroame(char slovo[])
{
    char per[NMAX] = "ANA";
    if (strcmp(char) (per == slovo) == 0) return 1;
    else return 0;
}
int ViewFile(char nume[])
{
   FILE *f;
    char fraza[LMAX];
    int nr = 0;
    f = fopen(nume, "r");
    while(fgets(fraza, LMAX-1, f) !=NULL)
        cout << fraza;
    fclose(f);
}
void CopiaRezerva
{
    FILE *f;
    FILE *rezerv;
    char sir [LMAX];


}
int NrCuvinte
{

    FILE *f;
    char fraza[LMAX];
    int nr = 0;
    f = fopen("fraza1.txt", "r");
    while(fgets(fraza, LMAX-1, f) !=NULL)
        nr +=NrCuvinte(fraza);
    fclose(f);
    return nr;
    return 1;
}
LungimeaMax(char litere[], int i, int val)
{

   return 1;
}
int CuvinteIncep()
{

    return 1;
}
int TransferLungimeaMax()
{

    return 1;
}
int EliminaLungimeaMax()
{

    return 1;
}

    #include <iostream>
    #include <stdlib.h>
    #include <iomanip>
    #include <conio.h>

    #define NMAX 100
    #define COST_MAX 1000
    #define COST_MIN 2
    using namespace std;
    int Citire(int n, int a[]);//la intrare n - numarul de elemente; la iesire: a- tabloul de medicamente; functia intoarce: 1 - ok, 0- error
    void Afisare(int n, int a[],char s[]);//la intrare n - numarul de elemente, a- tabloul de medicamente
    void Afisare(int n, int a[], char b[10][20]);
    int Minimum(int n, int a[]);//la intrare n - numarul de elemente, a- tabloul de medicamente; la iesire valoarea minima
    int Maximum(int n, int a[]);//la intrare n - numarul de elemente, a- tabloul de medicamente; la iesire valoarea maxima
    float Media(int n, int a[]);// la intrare n - numarul de elemente, a- tabloul de medicamente; la iesire med medie
    int Sortare(int n, int a[]);//la intrare n - numarul de elemente, a- tabloul de medicamente;  la iesire a- tabloul aranjat functia intoarce: 1 - ok, 0- error
    int Rotire(int n, int a[]);//la intrare n - numarul de elemente, a- tabloul de medicamente;  la iesire a- tabloul rotit functia intoarce: 1 - ok, 0- error
    int Adaugare(int &n, int a[], int val); // la intrare n - numarul de elemente, a- tabloul de medicamente, val - elementul adaugat; la iesire n- se mareste cu 1 a- tablou
    int Adaugare(int &n, int a[], int val, char);
    int Adaugare(int &n, int a[], int val, int p);//inainte de p- pozitia
    int Adaugare(int &n, int a[], int val, int p, char);// dupa p
    int Cautare(int n, int a[], int val );//la iesire p- pozitia sau -1
    int Stergere(int &n, int a[], int val); // la intrare n - numarul de elemente, a- tabloul de medicamente, val - elementul adaugat; la iesire n- se scade cu 1 a- tablou
    int Clasificare(int n, int a[], int m, int b[] ); // la intrare n - numarul de elemente, a- tabloul de medicamente, m - nuumarul de clasificari adaugat; la iesire n- mareste cu 1 b- tablou nou
    int Generare(int n, int a[]); // la intrare n - numarul de elemente, a- tabloul de medicamente, val - elementul adaugat; la iesire n- mareste cu 1 a- tablou
    bool Perfect(int n);
    int main()
    {
        int key;
        int n = 10, m=3;
        int ncaut;
        int valadaug;
        int adaugkey;
        int pozitia;
        int med[NMAX]= {10, 20, 30, 21, 15, 45, 61, 19, 27, 49, 57, 87};
        int categorii[] = {0, 0, 0, 0};
        char nume [][20] = {"cel mai ieftin","costul mediu", "cel mai scump"};
        do
        {
            cout << "Proiect nr.3 elaborat de Davidov Ecaterina" << endl;
            cout << "Tema: Farmacie" << endl;
            cout << "Introduceti cite medicamente sunt: ";
            cin >> n;
        }
        while(n <= 0);
            Citire(n, med);
        cout << "Tabloul de medicamente ocupa: " << sizeof(med) << " Bt" << endl;
        do
        {
            system("cls");
            cout << "Proiect nr.3 elaborat de Davidov Ecaterina" << endl;
            system("cls");
            cout << "Tema: Farmacie" << endl;
            cout << "\n1. De determinat intr-un tabel cel mai ieftin si cel mai scump medicament";
            cout << "\n2. De determinat intr-un tabel de medicamente media";
            cout << "\n3. De aranjat un tabel de ore in ordine crescatoare";
            cout << "\n4. De efectuat rotirea la stanga a elementelor tabelului de 7 ori";
            cout << "\n5. De adaugat costul in tabelul de medicamente";
            cout << "\n6. De sters costul in tabelul de medicamente";
            cout << "\n7. Clasificare";
            cout << "\n8. De generat un tabel";
            cout << "\n0. Stop";
            cout << "\n\n\t Alegeti de la 0 pana la 8 ->";
            cin >> key;
            switch(key)
            {
            case 1:
                Afisare(n, med, "de medicamente initial");
            cout << "\nCel mai ieftin medicament este: " << Minimum(n, med);
            cout << "\nCel mai scump medicament este: " << Maximum(n, med);
                break;
            case 2:
                Afisare(n, med, "de medicamente inital");
                cout << "\nCostul mediu este: " << Media(n, med) << endl;
                break;
            case 3:
                Afisare(n, med, "de medicamente inital");
                Sortare(n, med);
                Afisare(n, med, "de medicamente aranjat crescator");
                break;
            case 4:
           Katea:
                Afisare(n, med, "de medicamente inital");
                Rotire(n, med);
                Afisare(n, med, "de medicamente rotit");
                break;
            case 5:
                if(n >= NMAX){
                        cout << "Out of range\n";
                        break;
                        //goto Katea;
                }
                do
                {
                    cout << "Care valoare va fi adaugata: ";
                    cin >> valadaug;
                }
                while(valadaug < COST_MIN || valadaug > COST_MAX);
                do
                {
                    cout << "Elementul va fi adaugat: ";
                    cout << "\n1. La inceput";
                    cout << "\n2. La capat";
                    cout << "\n3. Inainte de pozitia";
                    cout << "\n4. Dupa pozitia";
                    cout << "\n\n\t Alegeti de la 1 la 4 -> ";
                    cin >> adaugkey;
                }
                while(adaugkey > 4 || adaugkey < 1);
                Afisare(n, med, "inital");

                switch(adaugkey)
                {
                case 1:
                    Adaugare(n, med, valadaug);
                    // Inceput
                    break;
                case 2:
                    Adaugare(n, med, valadaug, 'K'); // Capat
                    break;
                case 3:
                    do
                    {
                        cout << "Scrieti pozitia necesara: ";
                        cin >> pozitia;
                    }
                    while (pozitia > n-1);
                    Adaugare(n, med, valadaug, pozitia); // Inaite de p
                    break;
                case 4:
                    do
                    {
                        cout << "Scrieti pozitia necesara: ";
                        cin >> pozitia;
                    }
                    while (pozitia > n-1);
                    Adaugare(n, med, valadaug, pozitia, 'N'); // Dupa p
                    break;
                }
                Afisare(n, med, "de medicamente adaugat");
                break;
            case 6:
                int valcaut;
                cout << "\n Introduceti ce valoare trebuie de sters: ";
                cin >> ncaut;
                valcaut = Cautare(n, med, ncaut);
                if (valcaut != -1)
                    cout << "Pozitia elementului: " << valcaut;
                else
                    cout << "Nu exista ";
                Stergere(n, med, valcaut);
                Afisare(n, med, "de medicamente sters");
                break;
            case 7:
                Afisare(n, med, "de medicamente initial");
                Clasificare(n, med, m, categorii);
                Afisare(m, categorii, nume);

                break;
            case 8:
                Generare(5, med);
                Afisare(5, med, "de numere perfecte generat");
                break;
            }
           // Katea: cout << "It's ok. Press any key to continue";
            getch();
        }
        while(key);

        return 0;
    }
    int Citire(int n, int a[])
    {
        int key;
        int i;
        cout << "De unde citim: ";
        cout << "\n1. De la tastatura";
        cout << "\n2. De generat aleator";
        cout << "\n3. De generat intr-un mod special";
        cout << "\n4. Din fisier";
        cout << "\n5. Implicit";
        cout << "\n\n\t Alege -> ";
        cin >> key;
        for(i = 0; i < n; i++)
            switch(key)
            {
            case 1:
                {
                    cout << "Costul medicamentul cu nr. " << i+1 << ": ";
                    cin >> a[i];
                }
            break;
            case 2:
                a[i] = rand() % (COST_MAX-COST_MIN+1) + COST_MIN;
            break;
            case 3:
                a[i] = i % 3 + 8;
            break;
            }


        return 1;

    }
    void Afisare(int n, int a[], char s[])
    {
        cout << "\nTabloul " << s << " \n";
        for (int i = 0; i < n; i++)
            cout << setw(8) << a[i];
        cout << endl;
    }
    void Afisare(int n, int a[], char b[10][20])
    {
        cout << "\nTabloul de valori \n";
        for (int i = 0; i < n; i++)
            cout << setw(8) << a[i];
        cout << endl;
    }

    int Minimum(int n, int a[])
    {
        int aux = a[0];
        if(n <= 0) return 0;
        for (int i = 1; i < n; i++)
            if(a[i] < aux) aux = a[i];
        return aux;
    }
    int Maximum(int n, int a[])
    {
        int aux = a[0];
        if(n <= 0) return 0;
        for (int i = 1; i < n; i++)
            if(a[i] > aux) aux = a[i];
        return aux;
    }
    float Media(int n, int a[])
    {
        float aux = 0;
        if(n <= 0) return 0;
        for (int i = 1; i < n; i++)
            aux += a[i];
        aux /= n;
        return aux;
    }
    int Sortare(int n, int a[])
    {
        int k = 0, aux;
        bool change;
        do
        {
            change = false;
            k++;
            for (int i = 0; i < n-k; i++)
                if(a[i] > a[i+1])
                {
                    aux = a[i];
                    a[i] = a[i+1];
                    a[i+1] = aux;
                    change = true;
                }
        }
        while(change);
        return 1;
    }
    int Rotire(int n, int a[])
    {
        // stanga
        for (int j = 0; j < 1; j++)
        {
            int temp = a[0];
            for (int i = 0; i < n-1; i++)
            {
                a[i] = a[i+1];
            }
            a[n-1] = temp;
        }

        return 1;
    }
    int Adaugare(int &n, int a[], int val) // La inceput
    {
        for (int i = n; i > 0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = val;
        n++;
        return 1;
    }
    int Adaugare(int &n, int a[], int val, char) // La capat
    {

        a[n++] = val;
        return 1;
    }
    int Adaugare(int &n, int a[], int val, int p) // Innainte de pozitia p
    {
        n++;
        for (int i = n; i > p; i--)
            a[i] = a[i-1];
        a[p] = val;

        return 1;
    }
    int Adaugare(int &n, int a[], int val, int p, char) // Dupa pozitia p
    {
        n++;
        for (int i = n; i > p; i--)
            a[i] = a[i-1];
        a[p+1] = val;

        return 1;
    }
    int Cautare(int n, int a[], int val)
    {
        for (int i = 0; i < n; i++)
            if(a[i] == val)
                return i;
        return -1;
    }
    int Stergere(int &n, int a[], int val)
    {
        if (val != -1)
        {
            for (int i = val; i <= n; i++)
            {
                a[i] = a[i+1];
            }
        }
        n--;
        return 1;
    }
    int Clasificare(int n, int a[], int m, int b[])
    {
        int i, j;
        int limite[] = {4, 6, 8, 10};
        for(j = 0; j < m; j++)
            b[j] = 0;
        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++)
                if(a[i] <= limite[j])
                {
                    b[j]++;
                    break;
                }

        return 1;
    }
    int Generare(int n, int a[])
    {
        for(int num = 1, contor = 0; contor < n; num++)
            if(Perfect(num))
            {
                a[contor] = num;
                contor++;
            }
        return 1;
    }
    bool Perfect(int n)
    {
        int d, s = 1;
        for(d = 2; d <= n/2; d++)
            if(n % d ==0)
                s += d;
        return n == s;
    }

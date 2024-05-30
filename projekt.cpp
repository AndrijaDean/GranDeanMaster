#include <iostream>

#include <cstdlib>
#include <ctime>

#include <fstream>
#include <algorithm>

using namespace std;

struct Igrac
{
    char imeIgraca[50];
    int bodoviIgraca;
};

bool cmpp(Igrac &a, Igrac &b)
{
    return a.bodoviIgraca > b.bodoviIgraca;
}

int main()
{
    int izbor;
    cout << "Unesite 1 ako želite vidjeti Leaderboard, unesite 2 ako želite zaigrati ili unesite 3 ako želite vidjeti shop.";
    cin >> izbor;
    if (izbor == 1)
    {
        struct Igrac igraci[100];
        int brIgraca = 0;
        fstream leaderboard("leaderboard.bin", ios::binary | ios::in);
        while (leaderboard.read((char *)&igraci[brIgraca], sizeof(Igrac)))
        {
            cout << igraci[brIgraca].imeIgraca << " " << igraci[brIgraca].bodoviIgraca << endl;
            brIgraca++;
        }
        leaderboard.close();
        int unosIgraca;
        cin >> unosIgraca;
        for (int i = 0; i < unosIgraca; i++)
        {
            cin.ignore();
            cin.getline(igraci[brIgraca + i].imeIgraca, 50);
            cin >> igraci[brIgraca + i].bodoviIgraca;
        }
        sort(igraci, igraci + brIgraca + unosIgraca, cmpp);
        fstream leaderboard1("leaderboard.bin", ios::binary | ios::out | ios::trunc);
        leaderboard1.write((char *)igraci, sizeof(Igrac) * (brIgraca + unosIgraca));
        leaderboard1.close();
    }
    else if (izbor == 2)
    {
        int n = 7;
        int polje[n][n]; /*= {
            {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
            {10, 11, 12, 13, 14, 15, 16, 17, 18, 19},
            {20, 21, 22, 23, 24, 25, 26, 27, 28, 29},
            {30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
            {40, 41, 42, 43, 44, 45, 46, 47, 48, 49},
            {50, 51, 52, 53, 54, 55, 56, 57, 58, 59},
            {60, 61, 62, 63, 64, 65, 66, 67, 68, 69},
            {70, 71, 72, 73, 74, 75, 76, 77, 78, 79},
            {80, 81, 82, 83, 84, 85, 86, 87, 88, 89},
            {90, 91, 92, 93, 94, 95, 96, 97, 98, 99},
        };*/
        int vrijednost = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                polje[i][j] = vrijednost;
                ++vrijednost;
            }

        }

        int rendom = time(0);
        srand(rendom);
        int bombaR = rand() % n;
        int bombaC = rand() % n;
        int bomba = polje[bombaR][bombaC];
        cout << bombaR << " " << bombaC << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << polje[i][j] << "\t";
            }
            cout << endl;
            cout << endl;
        }

        int pogadanjeR, pogadanjeC;
        cout << "Unesite redak: ";
        cin >> pogadanjeR;
        cout << "Unesite stupac: ";
        cin >> pogadanjeC;

        int pogadanje = polje[pogadanjeR][pogadanjeC];

        int brPogodenih = 0;
        if (pogadanjeR >= 0 && pogadanjeR < n && pogadanjeC >= 0 && pogadanjeC < n)
        {
            if (pogadanje != bomba)
            {
                brPogodenih++;
            }
        }
        else
        {
            cout << "Unjeli ste pre veliko polje! :)" << endl;
        }

        int praznoPolje[n][n];
        /*= {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
           {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
        */
            for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                praznoPolje[i][j] = 0;
            }
        }
        if (praznoPolje[pogadanjeR][pogadanjeC] == 0)
        {
            praznoPolje[pogadanjeR][pogadanjeC] = 1;
        }

        while (pogadanje != bomba)
        {
            cout << "Bomba nije pronađena!" << endl;
            cout << "Unesite redak: ";
            cin >> pogadanjeR;
            cout << "Unesite stupac: ";
            cin >> pogadanjeC;

            pogadanje = polje[pogadanjeR][pogadanjeC];

            if (pogadanjeR >= 0 && pogadanjeR < n && pogadanjeC >= 0 && pogadanjeC < n)
            {
                if (praznoPolje[pogadanjeR][pogadanjeC] == 0)
                {
                    praznoPolje[pogadanjeR][pogadanjeC] = 1;
                    if (pogadanje != bomba)
                    {
                        brPogodenih++;
                    }
                }
                else
                {
                    cout << "Vec ste upisali ovo polje! :)" << endl;
                }

                if (brPogodenih == n * n - 1)
                {
                    cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenih << endl;
                    break;
                }
            }
            else
            {
                cout << "Unjeli ste pre veliko polje! :)" << endl;
            }
        }
        if (pogadanje == bomba)
        {
            cout << "Bomba je pronađena!" << " " << brPogodenih << endl;
        }
    }
    else
    {
    }
    return 0;
}
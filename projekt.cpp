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
        int n = 3;
        int polje[n][n] = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8},
        };

        int rendom = time(0);
        srand(rendom);
        int bombaR = rand() % 3;
        int bombaC = rand() % 3;
        int bomba = polje[bombaR][bombaC];
        cout << bombaR << " " << bombaC << endl;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << polje[i][j] << " ";
            }
            cout << endl;
        }

        int pogadanjeR, pogadanjeC;
        cout << "Unesite redak: ";
        cin >> pogadanjeR;
        cout << "Unesite stupac: ";
        cin >> pogadanjeC;

        int pogadanje = polje[pogadanjeR][pogadanjeC];

        int brPogodenih = 0;
        if (pogadanje != bomba)
        {
            brPogodenih++;
        }
        int brPogadanja = 0;
        int pPogodenih[n * n];
        pPogodenih[0] = pogadanjeR * 10 + pogadanjeC;

        while (pogadanje != bomba)
        {
            cout << "Bomba nije pronađena!" << endl;
            cout << "Unesite redak: ";
            cin >> pogadanjeR;
            cout << "Unesite stupac: ";
            cin >> pogadanjeC;

            pogadanje = polje[pogadanjeR][pogadanjeC];
            brPogadanja++;

            pPogodenih[brPogadanja] = pogadanjeR * 10 + pogadanjeC;

           /* bool flag_ponavljanja = false;
            for (int i = 0; i < (n * n - 1); i++)
            {
                for (int j = 1; j < (n * n - 1); j++)
                {
                    if (pPogodenih[i] == pPogodenih[j])
                    {
                        flag_ponavljanja = true;
                    }
                }
            }*/

            if (pogadanje != bomba)
            {
                brPogodenih++;
            }
            /*if (brPogadanja == brPogodenih && flag_ponavljanja == true)
            {
                cout << "Dva puta ste upisali isto polje! Ostvareni broj bodova je: " << " " << brPogodenih << endl;
            }*/

            if (brPogodenih == n * n - 1)
            {
                cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenih << endl;
                break;
            }
        }
        if (pogadanje == bomba)
        {
            cout << "Bomba je pronađena!" << " " << brPogodenih << endl;
        }
        for (int i = 0; i < (n * n - 1); i++)
        {

            cout << "ponavljanje:)" << " " << pPogodenih[i] << endl;
        }
    }
    else
    {
    }
    return 0;
}
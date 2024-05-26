#include <iostream>

#include <cstdlib>
#include <ctime>

#include <fstream>
#include <algorithm>

struct Igrac
{
    char imeIgraca[50];
    int bodoviIgraca;
};
bool cmpp(Igrac &a, Igrac &b)
{
    return a.bodoviIgraca > b.bodoviIgraca;
}

using namespace std;

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
        leaderboard1.write((char*)igraci, sizeof(Igrac) * (brIgraca + unosIgraca));
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
        int bombaR = 0 + rand() % 2;
        int bombaC = 0 + rand() % 2;
        int bomba = polje[bombaR][bombaC];
        // cout << bombaR << " "<< bombaC <<endl;

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

        while (pogadanje != bomba)
        {
            cout << "Bomba nije pronađena!" << endl;
            cout << "Unesite redak: ";
            cin >> pogadanjeR;
            cout << "Unesite stupac: ";
            cin >> pogadanjeC;

            pogadanje = polje[pogadanjeR][pogadanjeC];

            if (pogadanje == bomba)
            {
                cout << "Bomba je pronađena!" << endl;
                break;
            }
        }
    }
    else
    {
    }
    return 0;
}
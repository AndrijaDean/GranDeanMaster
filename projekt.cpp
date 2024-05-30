#include <iostream>

#include <cstdlib>
#include <ctime>

#include <fstream>
#include <algorithm>

using namespace std;

void clear_screen()
{
    printf(
        "\033[2J"
        "\033[1;1H");
}

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
    while (1)
    {
        cout << endl
             << "                              _/  _/_/_/    _/_/_/      _/_/    _/      _/    _/_/    _/_/_/    _/_/_/  " << endl;
        cout << "                             _/  _/    _/  _/    _/  _/    _/  _/_/    _/  _/    _/  _/    _/    _/     " << endl;
        cout << "                            _/  _/_/_/    _/_/_/    _/    _/  _/  _/  _/  _/_/_/_/ /___/  _/    _/      " << endl;
        cout << "                               _/        _/    _/  _/    _/  _/    _/_/  _/    _/  _/    _/    _/       " << endl;
        cout << "                          _/  _/        _/    _/    _/_/    _/      _/  _/    _/  _/_/_/    _/_/_/      " << endl;
        cout << endl
             << "                              _/_/_/      _/_/    _/      _/  _/_/_/    _/    _/                        " << endl;
        cout << "                             _/    _/  _/    _/  _/_/  _/_/  _/    _/  _/    _/                         " << endl;
        cout << "                            _/_/_/    _/    _/  _/  _/  _/  _/_/_/    _/    _/                          " << endl;
        cout << "                           _/    _/  _/    _/  _/      _/  _/    _/  _/    _/                           " << endl;
        cout << "                          _/_/_/      _/_/    _/      _/  _/_/_/      _/_/                              " << endl
             << endl;

        cout << "------------------------------------------------------------------------------------------------------------" << endl;

        cout << endl
             << "     ░█▀█░█░░░█▀█░█░█      |      ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄      |      ░█▀▀░█░█░█▀█░█▀█" << endl;
        cout << "     ░█▀▀░█░░░█▀█░░█░      |      ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█      |      ░▀▀█░█▀█░█░█░█▀▀" << endl;
        cout << "     ░▀░░░▀▀▀░▀░▀░░▀░      |      ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░      |      ░▀▀▀░▀░▀░▀▀▀░▀░░" << endl;

        int izbor;
        cin >> izbor;
        if (izbor == 2)
        {
            clear_screen();
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
        else if (izbor == 1)
        {
            clear_screen();
            int n{5};
            int polje[n][n];
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

            int praznoPolje[n][n];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    praznoPolje[i][j] = 0;
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << praznoPolje[i][j] << "  ";
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

            if (pogadanjeR >= 0 && pogadanjeR < n && pogadanjeC >= 0 && pogadanjeC < n)
            {
                if (praznoPolje[pogadanjeR][pogadanjeC] == 0)
                {
                    praznoPolje[pogadanjeR][pogadanjeC] = 1;
                    if (pogadanje != bomba)
                    {
                        brPogodenih++;
                        clear_screen();
                        if (brPogodenih == n * n - 1)
                        {
                            cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenih << endl;
                            for (int i = 0; i < n; i++)
                            {
                                for (int j = 0; j < n; j++)
                                {
                                    cout << praznoPolje[i][j] << "  ";
                                }
                                cout << endl;
                            }
                        }
                    }
                    else
                    {
                        praznoPolje[pogadanjeR][pogadanjeC] = 6;
                        clear_screen();
                        cout << "Bomba je pronađena!" << " " << brPogodenih << endl;
                    }
                }
                else
                {
                    cout << "Već ste upisali ovo polje! :)" << endl;
                }
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        cout << praznoPolje[i][j] << "  ";
                    }
                    cout << endl;
                }
            }
            else
            {
                clear_screen();
                cout << "Unjeli ste kordinate koje se ne nalaze u polju! :)" << endl;
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        cout << praznoPolje[i][j] << "  ";
                    }
                    cout << endl;
                }
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
                            clear_screen();
                            if (brPogodenih == n * n - 1)
                            {
                                cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenih << endl;
                                for (int i = 0; i < n; i++)
                                {
                                    for (int j = 0; j < n; j++)
                                    {
                                        cout << praznoPolje[i][j] << "  ";
                                    }
                                    cout << endl;
                                }
                                break;
                            }
                        }
                        else
                        {
                            praznoPolje[pogadanjeR][pogadanjeC] = 6;
                            clear_screen();
                            cout << "Bomba je pronađena!" << " " << brPogodenih << endl;
                        }
                    }
                    else
                    {
                        cout << "Već ste upisali ovo polje! :)" << endl;
                    }
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            cout << praznoPolje[i][j] << "  ";
                        }
                        cout << endl;
                    }
                }
                else
                {
                    clear_screen();
                    cout << "Unjeli ste kordinate koje se ne nalaze u polju! :)" << endl;
                }
            }
        }

        else if (izbor == 3)
        {
            clear_screen();
            cout << "                                            ░█▀▀░█░█░█▀█░█▀█" << endl;
            cout << "                                            ░▀▀█░█▀█░█░█░█▀▀" << endl;
            cout << "                                            ░▀▀▀░▀░▀░▀▀▀░▀░░" << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << endl
                 << "░▀█░░░░     ░█▀█░█▀█░█░░░▀▀█░█▀▀    ░▀▀█░█░█░▀▀█" << endl;
            cout << "░░█░░░░     ░█▀▀░█░█░█░░░░░█░█▀▀░   ░░▀▄░▄▀▄░░▀▄" << endl;
            cout << "░▀▀▀░▀░     ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀    ░▀▀░░▀░▀░▀▀░" << endl;
            cout << endl
                 << "░▀▀▄░░░     ░█▀█░█▀█░█░░░▀▀█░█▀▀    ░█▀▀░█░█░█▀▀" << endl;
            cout << "░▄▀░░░░     ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▀▀▄░▄▀▄░▀▀▄" << endl;
            cout << "░▀▀▀░▀░     ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀    ░▀▀░░▀░▀░▀▀░" << endl;
            cout << endl
                 << "░▀▀█░░░     ░█▀█░█▀█░█░░░▀▀█░█▀▀    ░▀▀█░█░█░▀▀█" << endl;
            cout << "░░▀▄░░░     ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▄▀░░▄▀▄░▄▀░" << endl;
            cout << "░▀▀░░▀░     ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀    ░▀░░░▀░▀░▀░░" << endl;
        }
        else if (izbor == 4)
        {
            break;
        }
    }
    return 0;
}
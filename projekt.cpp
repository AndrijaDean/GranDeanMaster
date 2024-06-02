
#include <iostream>
#include <cmath>

#include <cstdlib>
#include <ctime>

#include <windows.h>
#include <unistd.h>

#include <conio.h>

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
    unsigned long long int brIgraca = 0;
    ofstream outDatoteka("leaderboard.bin", ios::binary | ios::trunc);
    outDatoteka.close();

    while (1)
    {
        clear_screen();
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
             << "                     ░█░█░█▀▀░█▀▀░█▀▄░░░░" << endl;
        cout << "                     ░█░█░▀▀█░█▀▀░█▀▄░░▀░" << endl;
        cout << "                     ░▀▀▀░▀▀▀░▀▀▀░▀░▀░░▀░   ";

        struct Igrac igraci[100];
        cin.ignore();
        cin.getline(igraci[brIgraca].imeIgraca, 50); // Radi samo prvi put
        ofstream inDatoteka("leaderboard.bin", ios::binary | ios::app | ios::out);
        inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
        inDatoteka.close();

        unsigned long long int n{3};
        unsigned long long int izborN{0};
        unsigned long long int izbor;
        unsigned long long int brPogodenih = 0;
        unsigned long long int ukupanBrojPogodenih; // inicijalizirati

        while (1)
        {
            while (1)
            {
                clear_screen();
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
                     << "     ░█▀█░█░░░█▀█░█░█      |      ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░      |      ░█▀▀░█░█░█▀█░█▀█" << endl;
                cout << "     ░█▀▀░█░░░█▀█░░█░      |      ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░      |      ░▀▀█░█▀█░█░█░█▀▀" << endl;
                cout << "     ░▀░░░▀▀▀░▀░▀░░▀░      |      ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░      |      ░▀▀▀░▀░▀░▀▀▀░▀░░" << endl;

                cin >> izbor;
                if (izbor == 0 | izbor == 1 | izbor == 2 | izbor == 3)
                {
                    break;
                }
                else
                {
                    cout << "Neispravan unos!";
                    sleep(1);
                    clear_screen();
                }
            }
            if (izbor == 2)
            {
                clear_screen();

                cout << endl
                     << "                                  ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░                             " << endl;
                cout << "                                  ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░                             " << endl;
                cout << "                                  ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░                             " << endl
                     << endl;
                cout << "------------------------------------------------------------------------------------------------------------" << endl;

                ifstream inDatoteka("leaderboard.bin", ios::binary | ios::out);
                int citac = 0;
                while (inDatoteka.read((char *)&igraci[citac], sizeof(Igrac)))
                {
                    citac++;
                }
                inDatoteka.close();

                sort(igraci, igraci + citac, cmpp);

                for (int i = 0; i < citac; i++)
                {
                    cout << "                                  " << i + 1 << ".               ";
                    cout << igraci[i].imeIgraca << " " << igraci[i].bodoviIgraca << endl;
                }
                getch();
                clear_screen();
                /*cout << endl
                     << endl
                     << "              Error 404"
                     << endl
                     << endl
                     << "Leaderboard is temporarily unavailable." << endl;*/
                // sleep(5);
            }
            else if (izbor == 1)
            {
                clear_screen();
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

                unsigned long long int pogadanjeR, pogadanjeC;
                cout << "Unesite redak:  ";
                cin >> pogadanjeR;
                cout << "Unesite stupac: ";
                cin >> pogadanjeC;

                unsigned long long int pogadanje;
                if (pogadanjeR >= 0 && pogadanjeR < n && pogadanjeC >= 0 && pogadanjeC < n)
                {
                    pogadanje = polje[pogadanjeR][pogadanjeC];
                }

                brPogodenih = 0;

                if (pogadanjeR >= 0 && pogadanjeR < n && pogadanjeC >= 0 && pogadanjeC < n)
                {
                    if (praznoPolje[pogadanjeR][pogadanjeC] == 0)
                    {
                        praznoPolje[pogadanjeR][pogadanjeC] = 1;
                        if (pogadanje != bomba)
                        {
                            brPogodenih++;
                            clear_screen();
                        }
                        else
                        {
                            praznoPolje[pogadanjeR][pogadanjeC] = 6;
                            clear_screen();
                            cout << "Bomba je pronađena!" << " " << brPogodenih << endl;
                            for (int i = 0; i < n; i++)
                            {
                                for (int j = 0; j < n; j++)
                                {
                                    cout << praznoPolje[i][j] << "  ";
                                }
                                cout << endl;
                            }
                            getch();
                            clear_screen();
                        }
                    }
                    if (pogadanje != bomba)
                    {
                        cout << endl;
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
                    clear_screen();
                    cout << "Upisane koordinate se ne nalaze u polju! :)" << endl;
                    for (int i = 0; i < n; i++)
                    {
                        for (int j = 0; j < n; j++)
                        {
                            cout << praznoPolje[i][j] << "  "; // ispisuje polje nakon prvog unosa kordinata koje se ne nalaze u polju
                        }
                        cout << endl;
                    }
                }
                while (pogadanje != bomba)
                {
                    cout << "Bomba nije pronađena!" << endl;
                    cout << "Unesite redak:  ";
                    cin >> pogadanjeR;
                    cout << "Unesite stupac: ";
                    cin >> pogadanjeC;

                    if (pogadanjeR >= 0 && pogadanjeR < n && pogadanjeC >= 0 && pogadanjeC < n)
                    {
                        pogadanje = polje[pogadanjeR][pogadanjeC];
                    }

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

                                    ukupanBrojPogodenih += brPogodenih;

                                    for (int i = 0; i < n; i++)
                                    {
                                        for (int j = 0; j < n; j++)
                                        {
                                            cout << praznoPolje[i][j] << "  "; // ispis polja nakon dobivanja maksimalnog broja bodova
                                        }
                                        cout << endl;
                                    }
                                    getch();
                                    clear_screen();
                                    break;
                                }
                            }
                            else
                            {
                                praznoPolje[pogadanjeR][pogadanjeC] = 6;
                                clear_screen();
                                cout << "Bomba je pronađena!" << " " << brPogodenih << endl;

                                ukupanBrojPogodenih += brPogodenih;

                                for (int i = 0; i < n; i++)
                                {
                                    for (int j = 0; j < n; j++)
                                    {
                                        cout << praznoPolje[i][j] << "  "; // ispis polja nakon pronalaženja bombe
                                    }
                                    cout << endl;
                                }
                                getch();
                                clear_screen();
                                break;
                            }
                        }
                        else
                        {
                            clear_screen();
                            cout << "Već ste upisali koordinate ovog polja! :)";
                        }
                        cout << endl;
                        for (int i = 0; i < n; i++)
                        {
                            for (int j = 0; j < n; j++)
                            {
                                cout << praznoPolje[i][j] << "  "; // ispisivanje polja nakon ispravnog upisa
                            }
                            cout << endl;
                        }
                    }
                    else
                    {
                        clear_screen();
                        cout << "Upisane koordinate se ne nalaze u polju! :)" << endl;
                        for (int i = 0; i < n; i++)
                        {
                            for (int j = 0; j < n; j++)
                            {
                                cout << praznoPolje[i][j] << "  "; // ispisuje polje nakon unosa kordinata koje se ne nalaze u polju
                            }
                            cout << endl;
                        }
                    }
                }
            }

            else if (izbor == 3)
            {
                unsigned long long int izborVpolja;
                while (1)
                {
                    while (1)
                    {
                        clear_screen();
                        cout << "                                            ░█▀▀░█░█░█▀█░█▀█░                     ░█▀▄░█▀█░█▀▄░█▀█░█░█░▀█▀░░░░" << endl;
                        cout << "                                            ░▀▀█░█▀█░█░█░█▀▀░                     ░█▀▄░█░█░█░█░█░█░█░█░░█░░░▀░" << endl;
                        cout << "                                            ░▀▀▀░▀░▀░▀▀▀░▀░░░                     ░▀▀░░▀▀▀░▀▀░░▀▀▀░░▀░░▀▀▀░░▀░   ";
                        cout << ukupanBrojPogodenih << endl;
                        cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
                        cout << endl
                             << "░▀█░░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░█░█░█░█░█░█░  ░░░░░  ░█▀▀░░░░░" << endl;
                        cout << "░░█░░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▀▀█░▄▀▄░▀▀█░  ░▄▄▄░  ░█▀█░░░░░" << endl;
                        cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░░░▀░▀░▀░░░▀░  ░░░░░  ░▀▀▀░░░░░" << endl;
                        cout << endl
                             << "░▀▀▄░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░█▀▀░█░█░█▀▀░  ░░░░░  ░▀█░░▀▀▄░" << endl;
                        cout << "░▄▀░░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▀▀▄░▄▀▄░▀▀▄░  ░▄▄▄░  ░░█░░▄▀░░" << endl;
                        cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀▀░░▀░▀░▀▀░░  ░░░░░  ░▀▀▀░▀▀▀░" << endl;
                        cout << endl
                             << "░▀▀█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░▀▀█░█░█░▀▀█░  ░░░░░  ░▀▀▄░▄▀▄░" << endl;
                        cout << "░░▀▄░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▄▀░░▄▀▄░▄▀░░  ░▄▄▄░  ░▄▀░░█/█░" << endl;
                        cout << "░▀▀░░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░░░▀░▀░▀░░░  ░░░░░  ░▀▀▀░░▀░░" << endl;
                        cout << endl
                             << "░█░█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░░░░░█░█░░░░░  ░░░░░  ░█▀▀░▄▀▄░" << endl;
                        cout << "░▀▀█░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░█▀█░▄▀▄░█▀█░  ░▄▄▄░  ░▀▀▄░█/█░" << endl;
                        cout << "░░░▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░▀░▀░▀░▀░▀░  ░░░░░  ░▀▀░░░▀░░" << endl;
                        cin >> izborVpolja;
                        if (izborVpolja == 0 | izborVpolja == 1 | izborVpolja == 2 | izborVpolja == 3 | izborVpolja == 4)
                        {
                            break;
                        }

                        else
                        {
                            cout << "Neispravan unos!";
                            sleep(1);
                            clear_screen();
                            break;
                        }
                    }

                    if (izborVpolja == 1 && ukupanBrojPogodenih >= 6)
                    {
                        if (n == 4)
                        {
                            cout << "Već ste kupili ovo polje!";
                            sleep(1);
                            clear_screen();
                        }
                        else
                        {
                            n = 4;
                            ukupanBrojPogodenih -= 6;
                            sleep(1);
                            clear_screen();
                            break;
                        }
                    }
                    else if (izborVpolja == 2 && ukupanBrojPogodenih >= 12)
                    {
                        if (n == 5)
                        {
                            cout << "Već ste kupili ovo polje!";
                            sleep(1);
                            clear_screen();
                        }
                        else
                        {
                            n = 5;
                            ukupanBrojPogodenih -= 12;
                            sleep(1);
                            clear_screen();
                            break;
                        }
                    }
                    else if (izborVpolja == 3 && ukupanBrojPogodenih >= 20)
                    {
                        if (n == 7)
                        {
                            cout << "Već ste kupili ovo polje!";
                            sleep(1);
                            clear_screen();
                        }
                        else
                        {
                            n = 7;
                            ukupanBrojPogodenih -= 20;
                            sleep(1);
                            clear_screen();
                            break;
                        }
                    }
                    else if (izborVpolja == 4 && ukupanBrojPogodenih >= 50)
                    {
                        while (1)
                        {
                            clear_screen();
                            cout << "                                            ░█▀▀░█░█░█▀█░█▀█░                     ░█▀▄░█▀█░█▀▄░█▀█░█░█░▀█▀░░░░" << endl;
                            cout << "                                            ░▀▀█░█▀█░█░█░█▀▀░                     ░█▀▄░█░█░█░█░█░█░█░█░░█░░░▀░" << endl;
                            cout << "                                            ░▀▀▀░▀░▀░▀▀▀░▀░░░                     ░▀▀░░▀▀▀░▀▀░░▀▀▀░░▀░░▀▀▀░░▀░   ";
                            cout << ukupanBrojPogodenih << endl;
                            cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
                            cout << endl
                                 << "░▀█░░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░█░█░█░█░█░█░  ░░░░░  ░█▀▀░░░░░" << endl;
                            cout << "░░█░░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▀▀█░▄▀▄░▀▀█░  ░▄▄▄░  ░█▀█░░░░░" << endl;
                            cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░░░▀░▀░▀░░░▀░  ░░░░░  ░▀▀▀░░░░░" << endl;
                            cout << endl
                                 << "░▀▀▄░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░█▀▀░█░█░█▀▀░  ░░░░░  ░▀█░░▀▀▄░" << endl;
                            cout << "░▄▀░░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▀▀▄░▄▀▄░▀▀▄░  ░▄▄▄░  ░░█░░▄▀░░" << endl;
                            cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀▀░░▀░▀░▀▀░░  ░░░░░  ░▀▀▀░▀▀▀░" << endl;
                            cout << endl
                                 << "░▀▀█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░▀▀█░█░█░▀▀█░  ░░░░░  ░▀▀▄░▄▀▄░" << endl;
                            cout << "░░▀▄░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▄▀░░▄▀▄░▄▀░░  ░▄▄▄░  ░▄▀░░█/█░" << endl;
                            cout << "░▀▀░░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░░░▀░▀░▀░░░  ░░░░░  ░▀▀▀░░▀░░" << endl;
                            cout << endl
                                 << "░█░█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░░░░░█░█░░░░░  ░░░░░  ░█▀▀░▄▀▄░" << endl;
                            cout << "░▀▀█░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░█▀█░▄▀▄░█▀█░  ░▄▄▄░  ░▀▀▄░█/█░" << endl;
                            cout << "░░░▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░▀░▀░▀░▀░▀░  ░░░░░  ░▀▀░░░▀░░" << endl;
                            cout << endl
                                 << "░█░█░█▀▀░█░░░▀█▀░█▀▀░▀█▀░█▀█░█▀█░░░█▀█░█▀█░█░░░▀▀█░█▀█░░░░" << endl;
                            cout << "░█░█░█▀▀░█░░░░█░░█░░░░█░░█░█░█▀█░░░█▀▀░█░█░█░░░░░█░█▀█░░▀░" << endl;
                            cout << "░░▀░░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀░▀░░░▀░░░▀▀▀░▀▀▀░▀▀░░▀░▀░░▀░   ";

                            cin >> izborN;
                            if (n == izborN)
                            {
                                cout << "Već ste kupili ovo polje!";
                                sleep(1);
                                clear_screen();
                            }

                            else if (izborN == 0 | izborN == 1)
                            {
                                clear_screen();
                                break;
                            }

                            else
                            {
                                n = izborN;
                                ukupanBrojPogodenih -= 50;
                                sleep(1);
                                clear_screen();
                                break;
                            }
                        }
                    }
                    else if (izborVpolja == 0)
                    {
                        clear_screen();
                        break;
                    }

                    else if (izborVpolja == 1 | izborVpolja == 2 | izborVpolja == 3 | izborVpolja == 4 && ukupanBrojPogodenih < 50)
                    {
                        cout << "Nemate dovoljan broj bodova!";
                        sleep(1);
                        clear_screen();
                    }
                    else
                    {
                        clear_screen();
                    }
                }
            }
            else if (izbor == 0)
            {
                igraci[brIgraca].bodoviIgraca = ukupanBrojPogodenih;
                ofstream inDatoteka("leaderboard.bin", ios::binary | ios::app | ios::out);
                inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
                inDatoteka.close();
                brIgraca++;
                getch();
                clear_screen();
                break;
            }
            else
            {
                clear_screen();
            }
        }
    }
    return 0;
}
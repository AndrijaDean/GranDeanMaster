#include <iostream>

#include <cstdlib>
#include <ctime>

#include <windows.h>
#include <unistd.h>

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
    clear_screen();
    /*ofstream outDatoteka("", ios::binary | ios::trunc);
    outDatoteka.close();*/
    struct Igrac igraci[100];
    int brIgraca = 0;
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
    cin.getline(igraci[brIgraca].imeIgraca, 50);
    clear_screen();

    int n{4};
    int brPogodenih = 0;
    int brPogodenihP = 0;

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

        unsigned long long int izbor;
        cin >> izbor;
        if (izbor == 2)
        {
            clear_screen();
            /*ifstream inDatoteka("leaderboard.bin", ios::binary | ios::out);
            int citac = 0;
            while (inDatoteka.read((char *)&igraci[citac], sizeof(Igrac)))
            {
                citac++;
            }
            inDatoteka.close();

            sort(igraci, igraci + citac, cmpp);

            clear_screen();
            for (int i = 0; i < citac; i++)
            {
                cout << igraci[i].imeIgraca << " " << igraci[i].bodoviIgraca << endl;
            }*/
            cout << endl
                 << endl
                 << "              Error 404"
                 << endl
                 << endl
                 << "Leaderboard is temporarily unavailable." << endl;
            sleep(5);
            clear_screen();
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

            int pogadanjeR, pogadanjeC;
            cout << "Unesite redak: ";
            cin >> pogadanjeR;
            cout << "Unesite stupac: ";
            cin >> pogadanjeC;

            int pogadanje = polje[pogadanjeR][pogadanjeC];

            brPogodenih = 0; // maknuti kada ću implementirati datoteke

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
                        sleep(5);
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
                cout << "Unjeli ste koordinate koje se ne nalaze u polju! :)" << endl;
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
                            /*ofstream inDatoteka("leaderboard.bin", ios::binary | ios::app);
                            inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
                            inDatoteka.close();
                            brIgraca++;*/

                            clear_screen();
                            if (brPogodenih == n * n - 1)
                            {
                                cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenih << endl;

                                brPogodenihP += brPogodenih;
                                //  igraci[brIgraca].bodoviIgraca = brPogodenihP;

                                for (int i = 0; i < n; i++)
                                {
                                    for (int j = 0; j < n; j++)
                                    {
                                        cout << praznoPolje[i][j] << "  "; // ispis polja nakon dobivanja maksimalnog broja bodova
                                    }
                                    cout << endl;
                                }
                                sleep(5);
                                clear_screen();
                                break;
                            }
                        }
                        else
                        {
                            praznoPolje[pogadanjeR][pogadanjeC] = 6;
                            clear_screen();
                            cout << "Bomba je pronađena!" << " " << brPogodenih << endl;

                            brPogodenihP += brPogodenih;

                            // igraci[brIgraca].bodoviIgraca = brPogodenihP;
                            // ofstream inDatoteka("C:/Users/user/Documents/GitHub/GranDeanMaster/leaderboard.bin", ios::binary | ios::app);
                            /*inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
                            inDatoteka.close();
                            brIgraca++;*/

                            for (int i = 0; i < n; i++)
                            {
                                for (int j = 0; j < n; j++)
                                {
                                    cout << praznoPolje[i][j] << "  "; // ispis polja nakon pronalaženja bombe
                                }
                                cout << endl;
                            }
                            sleep(5);
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
                /*igraci[brIgraca].bodoviIgraca = brPogodenihP;
                ofstream inDatoteka("C:/Users/user/Documents/GitHub/GranDeanMaster/leaderboard.bin", ios::binary | ios::app);
                inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
                inDatoteka.close();
                brIgraca++;*/
            }
        }

        else if (izbor == 3)
        {
            while (1)
            {
                clear_screen();
                cout << "                                            ░█▀▀░█░█░█▀█░█▀█" << endl;
                cout << "                                            ░▀▀█░█▀█░█░█░█▀▀" << endl;
                cout << "                                            ░▀▀▀░▀░▀░▀▀▀░▀░░" << endl;
                cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
                cout << endl
                     << "░▀█░░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀    ░▀▀█░█░█░▀▀█" << endl;
                cout << "░░█░░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░░▀▄░▄▀▄░░▀▄" << endl;
                cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀    ░▀▀░░▀░▀░▀▀░" << endl;
                cout << endl
                     << "░▀▀▄░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀    ░█▀▀░█░█░█▀▀" << endl;
                cout << "░▄▀░░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▀▀▄░▄▀▄░▀▀▄" << endl;
                cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀    ░▀▀░░▀░▀░▀▀░" << endl;
                cout << endl
                     << "░▀▀█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀    ░▀▀█░█░█░▀▀█                                ░█▀▄░█▀█░█▀▄░█▀█░█░█░▀█▀░░░░" << endl;
                cout << "░░▀▄░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░▄▀░░▄▀▄░▄▀░                                ░█▀▄░█░█░█░█░█░█░█░█░░█░░░▀░" << endl;
                cout << "░▀▀░░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀    ░▀░░░▀░▀░▀░░                                ░▀▀░░▀▀▀░▀▀░░▀▀▀░░▀░░▀▀▀░░▀░    ";//napisati koliko koje polje košta
                cout << brPogodenihP << endl;
                unsigned long long int izborVpolja;
                cin >> izborVpolja;
                if (izborVpolja == 1 && brPogodenihP >= 10)
                {
                    if (n == 3)
                    {
                        cout << "Već ste kupili ovo polje!";
                        sleep(1);
                        clear_screen();
                    }
                    else
                    {
                        n = 3;
                        sleep(2);
                        brPogodenihP -= 10;
                        clear_screen();
                        break;
                    }
                }
                else if (izborVpolja == 2 && brPogodenihP >= 8)
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
                        sleep(2);
                        brPogodenihP -= 8;
                        clear_screen();
                        break;
                    }
                }
                else if (izborVpolja == 3 && brPogodenihP >= 20)
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
                        sleep(2);
                        brPogodenihP -= 20;
                        clear_screen();
                        break;
                    }
                }
                else if (izborVpolja == 4)
                {
                    clear_screen();
                    break;
                }

                else if (izborVpolja == 1 | izborVpolja == 2 | izborVpolja == 3 && brPogodenihP < 20)
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
        else if (izbor == 4)
        {
            clear_screen();
            break;
        }
        else
        {
            clear_screen();
        }
    }
    return 0;
}
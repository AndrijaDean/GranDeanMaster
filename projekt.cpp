
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

void ispisPolja(int n, int **pPolje)
{
    cout << "  ";
    for (int i = 0; i < n; i++)
    {
        if (i < 10)
            cout << " ";
        cout << "  " << i + 1;
    }
    cout << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "  ";
        if (i < 9)
            cout << " ";
        for (int j = 0; j < n; j++)
        {
            if (j < 10)
                cout << " ";
            else
                cout << " ";
            if (pPolje[i][j] == 0)
                cout << "O" << "  ";
            else if (pPolje[i][j] == 1)
                cout << "I" << "  ";
            else if (pPolje[i][j] == 5)
                cout << "★" << "  ";
            else
                cout << "X" << "  ";
        }
        cout << endl;
    }
}

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
    ofstream outDatoteka("", ios::binary | ios::trunc);
    outDatoteka.close();
    cout << endl
         << "                            ░█▀█░█▀▄░█▀█░█▀█░█▀█░░█▀▀▄░▀█▀░░░█░░░█▀▄░█▀█░█▄█░█▀▄░█░█░" << endl;
    cout << "                            ░█▀▀░█▀▄░█░█░█░█░█▀█░▀█▀░█░░█░░░░▀░░░█▀▄░█░█░█░█░█▀▄░█░█░" << endl;
    cout << "                            ░▀░░░▀░▀░▀▀▀░▀░▀░▀░▀░░▀▀▀░░▀▀▀░░░▀░░░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░" << endl
         << endl;

    cout << "------------------------------------------------------------------------------------------------------------" << endl;

    cout << endl
         << "                     ░█░█░█▀▀░█▀▀░█▀▄░░░░" << endl;
    cout << "                     ░█░█░▀▀█░█▀▀░█▀▄░░▀░" << endl;
    cout << "                     ░▀▀▀░▀▀▀░▀▀▀░▀░▀░░▀░   ";

    struct Igrac igraci[100];
    int brIgraca = 0;
    cin.getline(igraci[brIgraca].imeIgraca, 50);
    igraci[brIgraca].imeIgraca;
    ofstream inDatoteka("leaderboard.bin", ios::binary | ios::app | ios::out);
    inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
    inDatoteka.close();

    clear_screen();

    unsigned long long int n{3};
    unsigned long long int izborN{0};
    unsigned long long int izbor;
    unsigned long long int brPogodenihTokomIgre = 0;
    unsigned long long int ukupanBrojPogodenih = 0;
    unsigned long long int pogadanjeR, pogadanjeC;

    while (1)
    {
        while (1)
        {
            cout << endl
                 << "                         ░█▀█░█▀▄░█▀█░█▀█░█▀█░░█▀▀▄░▀█▀░░░█░░░█▀▄░█▀█░█▄█░█▀▄░█░█░" << endl;
            cout << "                         ░█▀▀░█▀▄░█░█░█░█░█▀█░▀█▀░█░░█░░░░▀░░░█▀▄░█░█░█░█░█▀▄░█░█░" << endl;
            cout << "                         ░▀░░░▀░▀░▀▀▀░▀░▀░▀░▀░░▀▀▀░░▀▀▀░░░▀░░░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░" << endl
                 << endl;

            cout << "------------------------------------------------------------------------------------------------------------" << endl;

            cout << endl
                 << "  ░█▀█░█░░░█▀█░█░█░         |        ░█▀▀░█▀▀░▀█▀░▀█▀░▀█▀░█▀█░█▀▀░█▀▀░         |         ░█▀▀░█░█░█▀█░█▀█░" << endl;
            cout << "  ░█▀▀░█░░░█▀█░░█░░         |        ░▀▀█░█▀▀░░█░░░█░░░█░░█░█░█░█░▀▀█░         |         ░▀▀█░█▀█░█░█░█▀▀░" << endl;
            cout << "  ░▀░░░▀▀▀░▀░▀░░▀░░         |        ░▀▀▀░▀▀▀░░▀░░░▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀░         |         ░▀▀▀░▀░▀░▀▀▀░▀░░░" << endl;

            cin >> izbor;
            if (izbor == 0 || izbor == 1 || izbor == 2 || izbor == 3)
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
            unsigned long long int izboPostavki;
        postavke:
            while (1)
            {
                clear_screen();
                cout << endl
                     << "                                ░█▀▀░█▀▀░▀█▀░▀█▀░▀█▀░█▀█░█▀▀░█▀▀░" << endl;
                cout << "                                ░▀▀█░█▀▀░░█░░░█░░░█░░█░█░█░█░▀▀█░" << endl;
                cout << "                                ░▀▀▀░▀▀▀░░▀░░░▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀░" << endl
                     << endl;

                cout << "------------------------------------------------------------------------------------------------------------" << endl;

                cout << endl
                     << "    ░▀█░░░░  ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░░░▀█░░" << endl;
                cout << "    ░░█░░░░  ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░░░░█░░" << endl;
                cout << "    ░▀▀▀░▀░  ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░░░▀▀▀░" << endl
                     << endl;
                cout << endl
                     << "    ░▀▀▄░░░  ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░░░▀▀▄░" << endl;
                cout << "    ░▄▀░░░░  ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░░░▄▀░░" << endl;
                cout << "    ░▀▀▀░▀░  ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░░░▀▀▀░" << endl
                     << endl;
                cout << endl
                     << "    ░▀▀█░░░  ░█▀▄░█░█░█░░░█▀▀░█▀▀░" << endl;
                cout << "    ░░▀▄░░░  ░█▀▄░█░█░█░░░█▀▀░▀▀█░" << endl;
                cout << "    ░▀▀▀░▀░  ░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░" << endl
                     << endl;
                cin >> izboPostavki;
                if (!(izboPostavki != 0 || izboPostavki != 1 || izboPostavki != 2 || izboPostavki != 3))
                {
                    cout << "Neispravan unos!";
                    sleep(1);
                    clear_screen();
                    goto postavke;
                }
                if (izboPostavki == 1)
                {
                    clear_screen();
                    cout << endl
                         << "                                ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░░░▀█░░                             " << endl;
                    cout << "                                ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░░░░█░░                             " << endl;
                    cout << "                                ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░░░▀▀▀░                             " << endl
                         << endl;
                    cout << "------------------------------------------------------------------------------------------------------------" << endl;
                    getch();
                }
                else if (izboPostavki == 2)
                {
                    clear_screen();
                    cout << endl
                         << "                                ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░░░▀▀▄░                             " << endl;
                    cout << "                                ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░░░▄▀░░                             " << endl;
                    cout << "                                ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░░░▀▀▀░                             " << endl
                         << endl;
                    cout << "------------------------------------------------------------------------------------------------------------" << endl;
                    getch();
                }
                else if (izboPostavki == 3)
                {
                    clear_screen();
                    cout << endl
                         << "                                ░█▀▄░█░█░█░░░█▀▀░█▀▀░                             " << endl;
                    cout << "                                ░█▀▄░█░█░█░░░█▀▀░▀▀█░                             " << endl;
                    cout << "                                ░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░                             " << endl
                         << endl;
                    cout << "------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "                - Koordinate se upisuju pomoću brojeva koje se nalaze iznad i s lijeve strane tablice.       " << endl;
                    cout << "                - Za izlazak iz ozbornika odaberite broj nula (0)                                            " << endl;

                    cout << " KAZALO OBLIKA:                                                                                             " << endl;
                    cout << "              O - Polje koje još niste otvorili.                                                           " << endl;
                    cout << "              I - Otvoreno polje donosi jedan bod.                                                         " << endl;
                    cout << "              X - Otvorili ste bombu tj. igra završava .                                                   " << endl;
                    cout << "              ★ - Otvoreno polje donosi ekstra bodove (5 bodova).                                          " << endl;
                    getch();
                }
                else if (izboPostavki == 0)
                {
                    clear_screen();
                    break;
                }
            }
            /*clear_screen();
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
            clear_screen();*/
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
            int **praznoPolje = new int *[n];
            for (int i = 0; i < n; i++)
                praznoPolje[i] = new int[n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    praznoPolje[i][j] = 0;
                }
            }

            int **punoPolje = new int *[n];
            for (int i = 0; i < n; i++)
                punoPolje[i] = new int[n];

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    punoPolje[i][j] = 0;
                }
            }

            srand(time(NULL));

            int brojBombi = round((n * n) / 7.0);

            for (int i = 0; i < brojBombi; i++)
            {
                int bombaR, bombaC;
                do
                {
                    bombaR = rand() % n;
                    bombaC = rand() % n;
                } while (punoPolje[bombaR][bombaC] != 0);

                punoPolje[bombaR][bombaC] = 6;
            }

            for (int i = 0; i < brojBombi; i++)
            {
                int exstraBodoviR, exstraBodoviC;
                do
                {
                    exstraBodoviR = rand() % n;
                    exstraBodoviC = rand() % n;
                } while (punoPolje[exstraBodoviR][exstraBodoviC] != 0);

                punoPolje[exstraBodoviR][exstraBodoviC] = 5;
            }

            cout << endl;
            ispisPolja(n, praznoPolje);
            // ispisPolja(n, punoPolje);

            do
            {
                cout << "Bomba nije pronađena!" << endl;
                cout << "Unesite redak:  ";
                cin >> pogadanjeR;
                cout << "Unesite stupac: ";
                cin >> pogadanjeC;
                pogadanjeR -= 1;
                pogadanjeC -= 1;

                if (pogadanjeR >= 0 && pogadanjeR < n && pogadanjeC >= 0 && pogadanjeC < n)
                {
                    if (praznoPolje[pogadanjeR][pogadanjeC] == 0)
                    {
                        if (punoPolje[pogadanjeR][pogadanjeC] == 5)
                        {
                            brPogodenihTokomIgre += 5;
                            praznoPolje[pogadanjeR][pogadanjeC] = 5;
                            clear_screen();
                            cout << endl;
                        }
                        else if (punoPolje[pogadanjeR][pogadanjeC] == 6)
                        {
                            praznoPolje[pogadanjeR][pogadanjeC] = 6;
                            clear_screen();
                            cout << "Bomba je pronađena!" << " " << brPogodenihTokomIgre << endl;

                            ukupanBrojPogodenih += brPogodenihTokomIgre;
                            brPogodenihTokomIgre = 0;

                            igraci[brIgraca].bodoviIgraca = ukupanBrojPogodenih;
                            ofstream inDatoteka("leaderboard.bin", ios::binary | ios::app | ios::out);
                            inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
                            inDatoteka.close();

                            ispisPolja(n, praznoPolje);

                            getch();
                            // sleep(5);
                            clear_screen();
                            break;
                        }
                        else
                        {
                            praznoPolje[pogadanjeR][pogadanjeC] = 1;
                            brPogodenihTokomIgre++;

                            clear_screen();
                            if (brPogodenihTokomIgre == n * n - brojBombi + 4 * brojBombi)
                            {
                                cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenihTokomIgre << endl;

                                ukupanBrojPogodenih += brPogodenihTokomIgre;
                                brPogodenihTokomIgre = 0;

                                igraci[brIgraca].bodoviIgraca = ukupanBrojPogodenih;
                                ofstream inDatoteka("leaderboard.bin", ios::binary | ios::app | ios::out);
                                inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
                                inDatoteka.close();

                                ispisPolja(n, praznoPolje);

                                getch();
                                // sleep(5);
                                clear_screen();
                                break;
                            }
                            else
                            {
                                cout << endl;
                            }
                        }
                    }
                    else
                    {
                        clear_screen();
                        cout << "Već ste upisali koordinate ovog polja! :)" << endl;
                    }
                    ispisPolja(n, praznoPolje);
                }
                else
                {
                    clear_screen();
                    cout << "Upisane koordinate se ne nalaze u polju! :)" << endl;
                    ispisPolja(n, praznoPolje);
                }

            } while (1);
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
                    cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░░░▀░▀░▀░░░  ░░░░░  ░▀▀▀░░▀░░" << endl;
                    cout << endl
                         << "░█░█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░░░░░█░█░░░░░  ░░░░░  ░█▀▀░▄▀▄░" << endl;
                    cout << "░▀▀█░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░█▀█░▄▀▄░█▀█░  ░▄▄▄░  ░▀▀▄░█/█░" << endl;
                    cout << "░░░▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░▀░▀░▀░▀░▀░  ░░░░░  ░▀▀░░░▀░░" << endl;
                    cin >> izborVpolja;
                    if (izborVpolja == 0 || izborVpolja == 1 || izborVpolja == 2 || izborVpolja == 3 || izborVpolja == 4)
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
                        sleep(1);
                        ukupanBrojPogodenih -= 6;
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
                        sleep(1);
                        ukupanBrojPogodenih -= 12;
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
                        sleep(1);
                        ukupanBrojPogodenih -= 20;
                        clear_screen();
                        break;
                    }
                }
                else if (izborVpolja == 4 && ukupanBrojPogodenih >= 50)
                {
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
                            cout << endl
                                 << "░█░█░█▀▀░█░░░▀█▀░█▀▀░▀█▀░█▀█░█▀█░░░█▀█░█▀█░█░░░▀▀█░█▀█░░░░" << endl;
                            cout << "░█░█░█▀▀░█░░░░█░░█░░░░█░░█░█░█▀█░░░█▀▀░█░█░█░░░░░█░█▀█░░▀░" << endl;
                            cout << "░░▀░░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀░▀░░░▀░░░▀▀▀░▀▀▀░▀▀░░▀░▀░░▀░   ";

                            cin >> izborN;
                            if (izborN > 40)
                            {
                                cout << "Kupili ste pre veliko polje!";
                                izborN = 0;
                                sleep(1);
                            }
                            else
                            {
                                break;
                            }
                        }
                        if (n == izborN)
                        {
                            cout << "Već ste kupili ovo polje!";
                            sleep(1);
                            clear_screen();
                        }

                        else if (izborN == 0 || izborN == 1)
                        {
                            clear_screen();
                            break;
                        }

                        else
                        {
                            n = izborN;
                            sleep(1);
                            ukupanBrojPogodenih -= 50;
                            clear_screen();
                            break;
                        }
                    }
                }
                else if (izborVpolja == 0)
                {
                    igraci[brIgraca].bodoviIgraca = ukupanBrojPogodenih;
                    ofstream inDatoteka("leaderboard.bin", ios::binary | ios::app | ios::out);
                    inDatoteka.write((char *)&igraci[brIgraca], sizeof(Igrac));
                    inDatoteka.close();
                    clear_screen();
                    break;
                }

                else if (izborVpolja == 1 || izborVpolja == 2 || izborVpolja == 3 || izborVpolja == 4 && ukupanBrojPogodenih < 50)
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
            brIgraca++;
            clear_screen();
            cin.ignore();
            break;
        }
        else
        {
            clear_screen();
        }
    }
    return 0;
}
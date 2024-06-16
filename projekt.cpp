
#include <iostream>
#include <string>
#include <cmath>

#include <cstdlib>
#include <ctime>

#include <windows.h>

#include <conio.h>

#include <fstream>
#include <algorithm>

using namespace std;

void ispisShopa(int ukupanBrojPogodenih)
{
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
         << "░▀▀█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░█▀▀░█░█░█▀▀░  ░░░░░  ░▀▀▄░▄▀▄░" << endl;
    cout << "░░▀▄░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░█▀█░▄▀▄░█▀█░  ░▄▄▄░  ░▄▀░░█/█░" << endl;
    cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀▀▀░▀░▀░▀▀▀░  ░░░░░  ░▀▀▀░░▀░░" << endl;
    cout << endl
         << "░█░█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░░░░░█░█░░░░░  ░░░░░  ░█▀▀░▄▀▄░" << endl;
    cout << "░▀▀█░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░█▀█░▄▀▄░█▀█░  ░▄▄▄░  ░▀▀▄░█/█░" << endl;
    cout << "░░░▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░▀░▀░▀░▀░▀░  ░░░░░  ░▀▀░░░▀░░" << endl;
}

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

bool provjeraBodova(int n, int brPogodenihTokomIgre, int brojBombi)
{
    if (brPogodenihTokomIgre == n * n - brojBombi + 4 * brojBombi)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool cmpp(Igrac &a, Igrac &b)
{
    return a.bodoviIgraca > b.bodoviIgraca;
}

int main()
{
    clear_screen();
    cout << endl
         << "                              ░█▀█░█▀▄░█▀█░█▀█░█▀█░░█▀▀▄░▀█▀░░░█░█▀▄░█▀█░█▄█░█▀▄░█░█░" << endl;
    cout << "                              ░█▀▀░█▀▄░█░█░█░█░█▀█░▀█▀░█░░█░░░░▀░█▀▄░█░█░█░█░█▀▄░█░█░" << endl;
    cout << "                              ░▀░░░▀░▀░▀▀▀░▀░▀░▀░▀░░▀▀▀░░▀▀▀░░░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░" << endl
         << endl;

    cout << "------------------------------------------------------------------------------------------------------------" << endl;

    cout << endl
         << "                     ░█░█░█▀▀░█▀▀░█▀▄░░░░" << endl;
    cout << "                     ░█░█░▀▀█░█▀▀░█▀▄░░▀░" << endl;
    cout << "                     ░▀▀▀░▀▀▀░▀▀▀░▀░▀░░▀░   ";

    struct Igrac igraci[100];
    int brIgraca = 0;
    fstream Leaderboard1("leaderboard.bin", ios::binary | ios::in);
    if (Leaderboard1.is_open())
    {
        while (Leaderboard1.read((char *)&igraci[brIgraca], sizeof(Igrac)))
        {
            brIgraca++;
        }
        Leaderboard1.close();
    }

    cin.getline(igraci[brIgraca].imeIgraca, 50);

    igraci[brIgraca].bodoviIgraca = 0;
    // igraci[brIgraca].bodoviIgraca = 1;
    // igraci[brIgraca].bodoviIgraca = 2;
    brIgraca++;

    clear_screen();

    unsigned long long int n{2};
    unsigned long long int velicinaZeljenogPolja{0};
    unsigned long long int izborVpolja;
    unsigned long long int izbor;
    unsigned long long int brPogodenihTokomIgre = 0;
    unsigned long long int ukupanBrojPogodenih = 0;
    unsigned long long int pogadanjeR, pogadanjeC;
    int *poljeVelicinaPolja = new int[40];
    for (int i = 0; i < 40; i++)
        poljeVelicinaPolja[i] = 0;
    poljeVelicinaPolja[1] = 3;

    while (1)
    {
        while (1)
        {
            clear_screen();
            cout << endl
                 << "                           ░█▀█░█▀▄░█▀█░█▀█░█▀█░░█▀▀▄░▀█▀░░░█░█▀▄░█▀█░█▄█░█▀▄░█░█░" << endl;
            cout << "                           ░█▀▀░█▀▄░█░█░█░█░█▀█░▀█▀░█░░█░░░░▀░█▀▄░█░█░█░█░█▀▄░█░█░" << endl;
            cout << "                           ░▀░░░▀░▀░▀▀▀░▀░▀░▀░▀░░▀▀▀░░▀▀▀░░░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░" << endl
                 << endl;

            cout << "------------------------------------------------------------------------------------------------------------" << endl;

            cout << endl
                 << "  ░█▀█░█░░░█▀█░█░█░         |        ░█▀▀░█▀▀░▀█▀░▀█▀░▀█▀░█▀█░█▀▀░█▀▀░         |         ░█▀▀░█░█░█▀█░█▀█░" << endl;
            cout << "  ░█▀▀░█░░░█▀█░░█░░         |        ░▀▀█░█▀▀░░█░░░█░░░█░░█░█░█░█░▀▀█░         |         ░▀▀█░█▀█░█░█░█▀▀░" << endl;
            cout << "  ░▀░░░▀▀▀░▀░▀░░▀░░         |        ░▀▀▀░▀▀▀░░▀░░░▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀░         |         ░▀▀▀░▀░▀░▀▀▀░▀░░░" << endl
                 << endl;
            cout << "                                 ░█▀▀░█▀█░█░█░█▀▀░░░▄▀░░░░▄▀▄░█░█░▀█▀░▀█▀░" << endl;
            cout << "                                 ░▀▀█░█▀█░█░█░█▀▀░░░▄█▀░░░█░█░█░█░░█░░░█░░" << endl;
            cout << "                                 ░▀▀▀░▀░▀░░▀░░▀▀▀░░░░▀▀░░░░▀▀░▀▀▀░▀▀▀░░▀░░" << endl;
            cin >> izbor;
            if (izbor == 0 || izbor == 1 || izbor == 2 || izbor == 3)
            {
                break;
            }
            else
            {
                cout << "Neispravan unos!";
                Sleep(1000);
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
                     << "                                  ░█▀▀░█▀▀░▀█▀░▀█▀░▀█▀░█▀█░█▀▀░█▀▀░" << endl;
                cout << "                                  ░▀▀█░█▀▀░░█░░░█░░░█░░█░█░█░█░▀▀█░" << endl;
                cout << "                                  ░▀▀▀░▀▀▀░░▀░░░▀░░▀▀▀░▀░▀░▀▀▀░▀▀▀░" << endl
                     << endl;
                cout << "------------------------------------------------------------------------------------------------------------" << endl;

                cout << endl
                     << "    ░▀█░░░░  ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░" << endl;
                cout << "    ░░█░░░░  ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░" << endl;
                cout << "    ░▀▀▀░▀░  ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░" << endl
                     << endl;
                cout << endl
                     << "    ░▀▀▄░░░  ░█▀▄░█▀▀░█░█░▀█▀░█▀▀░█░█░" << endl;
                cout << "    ░▄▀░░░░  ░█▀▄░█▀▀░█░█░░█░░█▀▀░█▄█░" << endl;
                cout << "    ░▀▀▀░▀░  ░▀░▀░▀▀▀░░▀░░▀▀▀░▀▀▀░▀░▀░" << endl
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
                    Sleep(1000);
                    clear_screen();
                    goto postavke;
                }
                if (izboPostavki == 1)
                {
                    clear_screen();
                    cout << endl
                         << "                                  ░█░░░█▀▀░█▀█░█▀▄░█▀▀░█▀▄░█▀▄░█▀█░█▀█░█▀▄░█▀▄░                         " << endl;
                    cout << "                                  ░█░░░█▀▀░█▀█░█░█░█▀▀░█▀▄░█▀▄░█░█░█▀█░█▀▄░█░█░                         " << endl;
                    cout << "                                  ░▀▀▀░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀▀░░▀▀▀░▀░▀░▀░▀░▀▀░░                         " << endl
                         << endl;
                    cout << "------------------------------------------------------------------------------------------------------------" << endl;

                    sort(igraci, igraci + brIgraca, cmpp);
                    for (int i = 0; i < brIgraca; i++)
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
                else if (izboPostavki == 2)
                {
                    clear_screen();
                    cout << endl
                         << "                                  ░█▀▄░█▀▀░█░█░▀█▀░█▀▀░█░█░                         " << endl;
                    cout << "                                  ░█▀▄░█▀▀░█░█░░█░░█▀▀░█▄█░                         " << endl;
                    cout << "                                  ░▀░▀░▀▀▀░░▀░░▀▀▀░▀▀▀░▀░▀░                         " << endl
                         << endl;
                    cout << "------------------------------------------------------------------------------------------------------------" << endl;
                    string unos_korisnika, ispis_korisnika;
                    fstream review;

                    review.open("review.txt", ios::in);
                    while (getline(review, ispis_korisnika))
                    {
                        cout << ispis_korisnika << endl;
                    }
                    review.close();

                    cout << "Unesite svoj review: ";
                    review.open("review.txt");
                    cin.ignore();
                    getline(cin, unos_korisnika);
                    review << igraci[brIgraca].imeIgraca << unos_korisnika << endl;
                    review.close();

                    getch();
                }
                else if (izboPostavki == 3)
                {
                    clear_screen();
                    cout << endl
                         << "                                  ░█▀▄░█░█░█░░░█▀▀░█▀▀░                                                       " << endl;
                    cout << "                                  ░█▀▄░█░█░█░░░█▀▀░▀▀█░                                                       " << endl;
                    cout << "                                  ░▀░▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░                                                       " << endl
                         << endl;
                    cout << "------------------------------------------------------------------------------------------------------------" << endl;
                    cout << "                - Koordinate se upisuju pomoću brojeva koje se nalaze iznad i s lijeve strane tablice.      " << endl;
                    cout << "                - Za izlazak iz izbornika odaberite broj nula (0)                                           " << endl;

                    cout << " KAZALO OBLIKA:                                                                                             " << endl;
                    cout << "              O - Polje koje još niste otvorili.                                                            " << endl;
                    cout << "              I - Otvoreno polje donosi jedan bod.                                                          " << endl;
                    cout << "              X - Otvorili ste bombu tj. igra završava .                                                    " << endl;
                    cout << "              ★ - Otvoreno polje donosi ekstra bodove (5 bodova).                                           " << endl;
                    getch();
                }
                else if (izboPostavki == 0)
                {
                    clear_screen();
                    break;
                }
            }
        }
        else if (izbor == 1)
        {
        playVelicinaPolja:
            while (1)
            {
                int velicinaPolja;
                clear_screen();
                cout << endl
                     << "                                ░█▀█░█░░░█▀█░█░█░" << endl;
                cout << "                                ░█▀▀░█░░░█▀█░░█░░" << endl;
                cout << "                                ░▀░░░▀▀▀░▀░▀░░▀░░" << endl
                     << endl;
                cout << "------------------------------------------------------------------------------------------------------------" << endl
                     << endl;
                cout << "░█░█░█▀▀░█░░░▀█▀░█▀▀░▀█▀░█▀█░█▀█░░░█▀█░█▀█░█░░░▀▀█░█▀█░░░░" << endl;
                cout << "░█░█░█▀▀░█░░░░█░░█░░░░█░░█░█░█▀█░░░█▀▀░█░█░█░░░░░█░█▀█░░▀░" << endl;
                cout << "░░▀░░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀░▀░░░▀░░░▀▀▀░▀▀▀░▀▀░░▀░▀░░▀░ ";
                cin >> velicinaPolja;
                if (poljeVelicinaPolja[velicinaPolja - 2] == 0 || velicinaPolja < 2)
                {
                    cout << "Niste još kupili ovo polje.";
                    Sleep(1000);
                    clear_screen();
                    goto playVelicinaPolja;
                    n = 3;
                }
                else
                {
                    n = poljeVelicinaPolja[velicinaPolja - 2];
                    break;
                }
            }

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

            int brojBombi = ceil((n * n) / 10.0);

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
            ispisPolja(n, punoPolje);

            do
            {
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
                            if (provjeraBodova(n, brPogodenihTokomIgre, brojBombi) == 1)
                            {
                                cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenihTokomIgre << endl;
                                ukupanBrojPogodenih += brPogodenihTokomIgre;
                                brPogodenihTokomIgre = 0;

                                igraci[brIgraca - 1].bodoviIgraca = ukupanBrojPogodenih;
                                ispisPolja(n, praznoPolje);
                                getch();
                                clear_screen();
                                break;
                            }
                            else
                            {
                                cout << "Bomba nije pronađena!";
                                cout << endl;
                            }
                        }
                        else if (punoPolje[pogadanjeR][pogadanjeC] == 6)
                        {
                            praznoPolje[pogadanjeR][pogadanjeC] = 6;
                            clear_screen();
                            cout << "Bomba je pronađena!" << " " << brPogodenihTokomIgre << endl;

                            ukupanBrojPogodenih += brPogodenihTokomIgre;
                            brPogodenihTokomIgre = 0;

                            igraci[brIgraca - 1].bodoviIgraca = ukupanBrojPogodenih;
                            ispisPolja(n, praznoPolje);
                            getch();
                            clear_screen();
                            break;
                        }
                        else
                        {
                            praznoPolje[pogadanjeR][pogadanjeC] = 1;
                            brPogodenihTokomIgre++;

                            clear_screen();
                            if (provjeraBodova(n, brPogodenihTokomIgre, brojBombi) == 1)
                            {
                                cout << "Dobili ste maksimalan broj bodova! :)" << " " << brPogodenihTokomIgre << endl;
                                ukupanBrojPogodenih += brPogodenihTokomIgre;
                                brPogodenihTokomIgre = 0;

                                igraci[brIgraca - 1].bodoviIgraca = ukupanBrojPogodenih;

                                ispisPolja(n, praznoPolje);
                                getch();
                                clear_screen();
                                break;
                            }
                            else
                            {
                                cout << "Bomba nije pronađena!";
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
            while (1)
            {
                while (1)
                {
                    clear_screen();
                    ispisShopa(ukupanBrojPogodenih);
                    cin >>
                        izborVpolja;
                    if (izborVpolja == 0 || izborVpolja == 1 || izborVpolja == 2 || izborVpolja == 3 || izborVpolja == 4)
                    {
                        break;
                    }

                    else
                    {
                        cout << "Neispravan unos!";
                        Sleep(1000);
                        clear_screen();
                        break;
                    }
                }
                izborVpolja += 3;

                if (izborVpolja == poljeVelicinaPolja[izborVpolja - 2] && izborVpolja != 7 && izborVpolja != 3)
                {
                    cout << "Već ste kupili ovo polje!";
                    Sleep(1000);
                    clear_screen();
                }
                else if ((izborVpolja == 4 && ukupanBrojPogodenih < 6) || (izborVpolja == 5 && ukupanBrojPogodenih < 12) || (izborVpolja == 6 && ukupanBrojPogodenih < 20) || (izborVpolja == 7 && ukupanBrojPogodenih < 50))
                {
                    cout << "Nemate dovoljan broj bodova!";
                    Sleep(1000);
                    clear_screen();
                }
                else
                {
                    if (izborVpolja == 4 && ukupanBrojPogodenih >= 6)
                    {
                        n = 4;
                        poljeVelicinaPolja[izborVpolja - 2] = izborVpolja;
                        ukupanBrojPogodenih -= 6;
                        igraci[brIgraca - 1].bodoviIgraca = ukupanBrojPogodenih;
                    }
                    else if (izborVpolja == 5 && ukupanBrojPogodenih >= 12)
                    {
                        n = 5;
                        poljeVelicinaPolja[izborVpolja - 2] = izborVpolja;
                        ukupanBrojPogodenih -= 12;
                        igraci[brIgraca - 1].bodoviIgraca = ukupanBrojPogodenih;
                    }
                    else if (izborVpolja == 6 && ukupanBrojPogodenih >= 20)
                    {
                        n = 6;
                        poljeVelicinaPolja[izborVpolja - 2] = izborVpolja;
                        ukupanBrojPogodenih -= 20;
                        igraci[brIgraca - 1].bodoviIgraca = ukupanBrojPogodenih;
                    }
                    else if (izborVpolja == 3)
                    {
                        break;
                    }
                    else if (izborVpolja == 7 && ukupanBrojPogodenih >= 50)
                    {
                        while (1)
                        {
                            while (1)
                            {
                                clear_screen();
                                ispisShopa(ukupanBrojPogodenih);
                                cout << endl
                                     << "░█░█░█▀▀░█░░░▀█▀░█▀▀░▀█▀░█▀█░█▀█░░░█▀█░█▀█░█░░░▀▀█░█▀█░░░░" << endl;
                                cout << "░█░█░█▀▀░█░░░░█░░█░░░░█░░█░█░█▀█░░░█▀▀░█░█░█░░░░░█░█▀█░░▀░" << endl;
                                cout << "░░▀░░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀▀▀░▀░▀░▀░▀░░░▀░░░▀▀▀░▀▀▀░▀▀░░▀░▀░░▀░   ";

                                cin >> velicinaZeljenogPolja;
                                if (velicinaZeljenogPolja > 30)
                                {
                                    cout << "Kupili ste pre veliko polje!";
                                    velicinaZeljenogPolja = 0;
                                    Sleep(1000);
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if (poljeVelicinaPolja[velicinaZeljenogPolja - 2] != 0 && velicinaZeljenogPolja != 0 && velicinaZeljenogPolja != 1)
                            {
                                cout << "Već ste kupili ovo polje!";
                                Sleep(1000);
                                clear_screen();
                            }

                            else if (velicinaZeljenogPolja == 0 || velicinaZeljenogPolja == 1)
                            {
                                clear_screen();
                                break;
                            }

                            else
                            {
                                n = velicinaZeljenogPolja;
                                Sleep(1000);
                                ukupanBrojPogodenih -= 50;
                                igraci[brIgraca - 1].bodoviIgraca = ukupanBrojPogodenih;

                                clear_screen();
                                poljeVelicinaPolja[velicinaZeljenogPolja - 2] = velicinaZeljenogPolja;
                                break;
                            }
                        }
                    }
                    else
                    {
                        clear_screen();
                    }

                    Sleep(1000);
                    clear_screen();
                    break;
                }
            }
        }
        else if (izbor == 0)
        {
            cout << "                                 ░█▀▀░█▀█░█░█░█▀▀░░░▄▀░░░░▄▀▄░█░█░▀█▀░▀█▀░" << endl;
            cout << "                                 ░▀▀█░█▀█░█░█░█▀▀░░░▄█▀░░░█░█░█░█░░█░░░█░░" << endl;
            cout << "                                 ░▀▀▀░▀░▀░░▀░░▀▀▀░░░░▀▀░░░░▀▀░▀▀▀░▀▀▀░░▀░░" << endl
                 << endl;
            cout << "------------------------------------------------------------------------------------------------------------" << endl;
            fstream Leaderboard2("leaderboard.bin", ios::binary | ios::out | ios::app);
            if (Leaderboard2.is_open())
            {
                Leaderboard2.write((char *)&igraci[brIgraca - 1], sizeof(Igrac));
                Leaderboard2.close();
            }
            /*Leaderboard2.read((char *)&igraci[brIgraca - 1], sizeof(Igrac));
            ukupanBrojPogodenih -= 6;
            Leaderboard2.write((char *)&igraci[brIgraca - 1], sizeof(Igrac));
            Leaderboard2.close();
            Leaderboard2.write((char *)&igraci[brIgraca - 1], sizeof(Igrac));*/
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
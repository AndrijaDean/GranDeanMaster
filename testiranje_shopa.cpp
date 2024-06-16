
#include <iostream>
#include <windows.h>

using namespace std;

void clear_screen()
{
    printf(
        "\033[2J"
        "\033[1;1H");
}

int main()
{

    unsigned long long int n{2};
    unsigned long long int velicinaZeljenogPolja{0};
    unsigned long long int izbor;
    unsigned long long int brPogodenihTokomIgre = 0;
    unsigned long long int ukupanBrojPogodenih = 1000;
    unsigned long long int pogadanjeR, pogadanjeC;
    int *poljeVelicinaPolja = new int[40];
    for (int i = 0; i < 40; i++)
        poljeVelicinaPolja[i] = 0;
    poljeVelicinaPolja[1] = 3;
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
                Sleep(1000);
                clear_screen();
                break;
            }
        }

        if (izborVpolja == 1 && ukupanBrojPogodenih >= 6)
        {
            if (poljeVelicinaPolja[izborVpolja - 2] == izborVpolja)
            {
                cout << "Već ste kupili ovo polje!";
                Sleep(1000);
                clear_screen();
            }
            else
            {
                n = 4;
                poljeVelicinaPolja[izborVpolja - 2] = izborVpolja;
                Sleep(1000);
                ukupanBrojPogodenih -= 6;
                clear_screen();

            }
        }
        else if (izborVpolja == 2 && ukupanBrojPogodenih >= 12)
        {
            if (poljeVelicinaPolja[izborVpolja - 2] == izborVpolja)
            {
                cout << "Već ste kupili ovo polje!";
                Sleep(1000);
                clear_screen();
            }
            else
            {
                n = 5;
                poljeVelicinaPolja[izborVpolja - 2] = izborVpolja;
                Sleep(1000);
                ukupanBrojPogodenih -= 12;
                clear_screen();

            }
        }
        else if (izborVpolja == 3 && ukupanBrojPogodenih >= 20)
        {
            if (poljeVelicinaPolja[izborVpolja - 2] == izborVpolja)
            {
                cout << "Već ste kupili ovo polje!";
                Sleep(1000);
                clear_screen();
            }
            else
            {
                n = 7;
                poljeVelicinaPolja[izborVpolja - 2] = izborVpolja;
                Sleep(1000);
                ukupanBrojPogodenih -= 20;
                clear_screen();
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
                    cout << "░▀▀▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░░░▀░▀░▀░░░  ░░░░░  ░▀▀▀░░▀░░" << endl;
                    cout << endl
                         << "░█░█░░░  ░█▀█░█▀█░█░░░▀▀█░█▀▀░   ░░░░░█░█░░░░░  ░░░░░  ░█▀▀░▄▀▄░" << endl;
                    cout << "░▀▀█░░░  ░█▀▀░█░█░█░░░░░█░█▀▀░   ░█▀█░▄▀▄░█▀█░  ░▄▄▄░  ░▀▀▄░█/█░" << endl;
                    cout << "░░░▀░▀░  ░▀░░░▀▀▀░▀▀▀░▀▀░░▀▀▀░   ░▀░▀░▀░▀░▀░▀░  ░░░░░  ░▀▀░░░▀░░" << endl;
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
                if (velicinaZeljenogPolja == poljeVelicinaPolja[velicinaZeljenogPolja - 2])
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
                    clear_screen();
                    poljeVelicinaPolja[velicinaZeljenogPolja - 2] = velicinaZeljenogPolja;

                    break;
                }
            }
        }
        else if (izborVpolja == 0)
        {
            break;
        }

        else if (izborVpolja == 1 || izborVpolja == 2 || izborVpolja == 3 || izborVpolja == 4 && ukupanBrojPogodenih < 50)
        {
            cout << "Nemate dovoljan broj bodova!";
            Sleep(1000);
            clear_screen();
        }
        else
        {
            clear_screen();
        }
    }
    return 0;
}
/*#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

using namespace std;

struct Igrac
{
    char imeIgraca[50];
    int bodoviIgraca;
};

int main()
{
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

    cout << "Enter player's name: ";
    cin.getline(igraci[brIgraca].imeIgraca, 50);

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

    cout << "Enter your review: ";
    review.open("review.txt");
    cin.ignore();
    getline(cin, unos_korisnika);
    review << unos_korisnika << endl;
    review.close();

    getch();

    fstream outDatoteka1("leaderboard.bin", ios::binary | ios::out);
    if (outDatoteka1.is_open())
    {
        outDatoteka1.write((char *)igraci, brIgraca * sizeof(Igrac));
        outDatoteka1.close();
    }

    return 0;
}*/
// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string unos_korisnika, ispis_korisnika;
    fstream review;

    review.open("review.txt", ios::in);
    while (getline(review, ispis_korisnika))
    {
        cout << ispis_korisnika << endl;
    }
    review.close();
    // Create and open a text file
    ofstream MyFile("review.txt", ios::app | ios::out);

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";

    // Close the file
    MyFile.close();
}

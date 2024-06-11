#include <iostream>
#include <fstream>
#include <cstring>

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
    else
    {
        cerr << "Error opening leaderboard.bin for reading" << endl;
    }
    cout << "Enter player's name: ";
    cin.getline(igraci[brIgraca].imeIgraca, 50);
    cin.ignore();

    int ukupanBrojPogodenih;
    cout << "Enter the player's score: ";
    cin >> ukupanBrojPogodenih;

    igraci[brIgraca].bodoviIgraca = ukupanBrojPogodenih;
    brIgraca++;

    fstream outDatoteka("leaderboard.bin", ios::binary | ios::out);
    if (outDatoteka.is_open())
    {
        outDatoteka.write((char *)igraci, brIgraca * sizeof(Igrac));
        outDatoteka.close();
    }
    else
    {
        cerr << "Error opening leaderboard.bin for writing" << endl;
    }

    for (int i = 0; i < brIgraca; i++)
    {
        cout << "Player: " << igraci[i].imeIgraca << ", Score: " << igraci[i].bodoviIgraca << endl;
    }

    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
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
    //cout << bombaR << " "<< bombaC <<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << polje[i][j] << " ";
        }
        cout << endl;
    }


    int pogadanjeR, pogadanjeC;
    cout << "Unesite redak: " << endl;
    cin >> pogadanjeR;
    cout << "Unesite stupac: " << endl;
    cin >> pogadanjeC;

    int pogadanje = polje[pogadanjeR][pogadanjeC];

    while (pogadanje != bomba)
    {
        cout << "Bomba nije pronađena!"<<endl;
        cout << "Unesite redak: " << endl;
        cin >> pogadanjeR;
        cout << "Unesite stupac: " << endl;
        cin >> pogadanjeC;

        pogadanje = polje[pogadanjeR][pogadanjeC];

        if (pogadanje == bomba){
            cout << "Bomba je pronađena!"<<endl;
            break;
        }
    }
    return 0;
}
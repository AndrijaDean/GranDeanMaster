#include <iostream>
using namespace std;
int main()
{
    int n{39};
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
    praznoPolje[2][2] = 6;
    praznoPolje[3][2] = 1;
    praznoPolje[2][1] = 1;
    praznoPolje[0][0] = 1;
    praznoPolje[0][3] = 1;
    praznoPolje[1][1] = 5;

    cout << endl
         << "  ";
    for (int i = 0; i < n; i++)
    {
        if (i < 10)
        {
            cout << " ";
        }
        cout << "  " << i + 1;
    }
    cout << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "  ";
        if (i <= 8)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            if (j < 10)
            {
                cout << " ";
            }
            else
            {
                cout << " ";
            }
            if (praznoPolje[i][j] == 0)
                cout << "O" << "  ";
            else if (praznoPolje[i][j] == 1)
                cout << "I" << "  ";
            else if (praznoPolje[i][j] == 5)
                cout << "★" << "  ";
            else
                cout << "6" << "  ";
        }
        cout << endl;
    }
    return 0;
}
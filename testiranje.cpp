#include <iostream>
using namespace std;
int main()
{
    int n{4};
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
    for (int i = 0; i < n; i++)
    {
        cout << "  " << i + 1;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < n; j++)
        {
            cout << praznoPolje[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < n; j++)
        {
            if (praznoPolje[i][j]==0)
                cout << "O" << "  ";
            else
                cout << "I" << "  ";
        }
        cout << endl;
    }
    return 0;
}
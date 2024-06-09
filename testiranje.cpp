#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;
int main()
{
    int rendom = time(0);
    srand(rendom);
    int gol1 = rand() % 5;
    int g1 = gol1;
    int gol2 = rand() % 5;
    int g2 = gol2;

    while (gol1 == g1 || gol2 == g2)
    {
        
        cout << gol1<<endl;
        cout << gol2 << endl
             << endl;
        gol1 = rand() % 5;
        gol2 = rand() % 5;
        getch();
    }
    return 0;
}

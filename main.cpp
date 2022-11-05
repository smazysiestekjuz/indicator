#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin>>ile;

    int *tablica;
    tablica = new int [ile];

    for (int i=0; i<ile; i++)
    {
        tablica[i]=i;
        tablica[i]+=50;
    }

    delete [] tablica;
    return 0;
}

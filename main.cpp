#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
double czas;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin>>ile;

    int *tablica;
    tablica = new int [ile];

    start=clock();

    for (int i=0; i<ile; i++)
    {
        tablica[i]=i;
        tablica[i]+=50;
    }

    stop=clock();
    czas=(double)(stop - start);

    delete [] tablica;
    return 0;
}

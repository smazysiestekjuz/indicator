#include <iostream>

using namespace std;

int ile;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin>>ile;

    int *tablica;
    tablica = new int [ile];



    delete [] tablica;

    return 0;
}

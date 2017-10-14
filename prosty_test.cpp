#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    string linia, linia_2;
    do
    {
        linia == "";
        cout << "Podaj linie\n";
        getline(cin,linia);
        linia_2 += linia;
    }
    while (!linia.empty());
    cout << linia_2;
    exit(0);
}
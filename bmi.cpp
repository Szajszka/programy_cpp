#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

float wzrost, masa, bmi;
int main(int argc, char *argv[])
{
    cout << "Podaj wzrost w metrach" << endl;
    cin >> wzrost;
        if (wzrost <= 0)
        {
            cout << "Wzrost musi byc liczba dodatnia" << endl;
            exit(1);
        }
    cout << "Podaj wage w kilogramach" << endl;
    cin >> masa;
        if (masa <= 0)
        {
            cout << "Waga musi byc liczba dodatnia" << endl;
            exit(2);
        }
bmi = floor(10*masa/(wzrost*wzrost) + 0.5)/10;
cout << masa/(wzrost*wzrost) << endl;
    cout << "Twoje BMI to: " << bmi << endl;
        if (bmi < 18.5) 
        {
            cout << "Niedowaga, musisz przytyc: " << setprecision(1) << fixed << (18.5 - bmi)*wzrost*wzrost << " kg" << endl;
            
        }
        else if (bmi <= 25)
        {
            cout << "Waga w normie" << endl;
        }
        else if (bmi <= 30)
        {
            cout << "Nadwaga, musisz schudnac: " << setprecision(1) << fixed << (bmi - 25)*wzrost*wzrost << " kg" << endl;
        }
        else
        {    
            cout << "Otylosc, musisz schudnac: " << setprecision(1) << fixed << (bmi - 25)*wzrost*wzrost << " kg" << endl;
        }
}
//tryb interaktywny, linia polecen, pobierac dane, informowac o bmi i podawac nadwaga/cos i ile schudnac/przytyc zeby miec normalne bmi
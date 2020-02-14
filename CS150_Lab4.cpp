#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double pi;
    long i;
    long n;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; i++)
    {
        pi = 3.1415;

       if (i % 2 == 0)
       {
           pi = pi + (1 / (2 * i + 1));
       }
       else
       {
            pi = pi - (1 / (2 * i + 1));
       }

       pi = 4 * pi;

       cout << endl << "pi = " << pi << endl;
    }


    return 0;
}

#include <iostream>
using namespace std;

/*
printf("%.9lf", variable);
*/
int main()
{
    double a, b;
    cin >> a >> b;
    
    cout << fixed;
    cout.precision(10);
    cout << a / b << "\n";
}

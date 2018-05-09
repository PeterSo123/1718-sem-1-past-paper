#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{
    
    int n1 = 10, n2 = 5, n3= 7.8, r = 10;
    int n;
    double avg, area, pi = 3.141592654;
    
    avg = (n1 + n2) / 2;
    cout << "Avgrage = " << avg << endl;
    cout << (n3 > avg ? "Above" : "Below") << "Avgrage\n";
    
    area = pi * r * r;
    cout << area << endl;
    cout << scientific << area << endl;
    
    return 0;
    
    cout << "Input an integer: ";
    cin >> n;
    if(n == 0)
    {
        cout << "\"ZERO\" is not accepted" << endl;
    }
    else
    {
    cout << "Reciprocal = " << setprecision(5) << fixed << 1/double(n) << endl;
    }
    
    return 0;
    
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int x = 5;

int fun(int x, int &y, int &z)
{
    int t = x;
    x = y;
    y = z;
    z = t;
    return x + y + z;
}

// B3(b) for-loop
int sumR(int n, int &count)
{
    int mark = 1;
    int sum = 0;
    int new_n = 0;
    for(int i = 10; i <= n*10; i = i*10)
    {
        new_n = n % i / mark;
        sum = sum + new_n;
        mark = mark*10;
        count++;
    }
    
    count -= 1;
    return sum;
}

// B3(b) recursion

int main()
{
    int y = 10, z = 15;
    int n, sum, count;
    
    cout << fun(x, y, z) << endl;
    cout << x << " " << y << " " << z << endl;
    
    cout << "Input an integer: ";
    cin >> n;
    sum = sumR(n, count);
    cout << "Sum of " << count << " digits = " << sum << endl;
    
    return 0;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void list_numbers(int a, int b){
    int r = 0;
    if(a > b)
    {
        for(int i = b; i <= a; i++)
        {
            cout << setw(5) << i ;
            r ++;
            if(r == 6)
            {
                cout << endl;
                r = 0;
            }
        }
    }
    
   else
    {
        for(int i = a; i <= b; i++)
        {
            cout << setw(5) << i ;
            r ++;
            if(r == 6)
            {
                cout << endl;
                r = 0;
            }
        }
    }
}

int find_gcd(int a, int b)
{
    int gcd = 1;
    int check = 0;
    
    for (int i = 1; (i <= a) || (i <= b); i ++)
    {
        if(a%i == 0 && b%i == 0)
        {
            check = i;
        }
        
        if (check >= gcd)
        {
            gcd = check;
        }
    }
    return gcd;
    }

int main()
{
    int sum = 0;
    int x, y, z;
    for (int a = 20; a >= 0; a -= 3) {
        sum = sum + a;
    }
    
    cout << sum << endl;
    
    sum = 0;
    x = 2;
    y = 6;
    
    do {
        z = x;
        while (z <= y) {
            sum++;
            z++;
        }
        x++;
    } while (x < y);
    cout << x << "/" << sum << endl;
    
    return 0;
    

    int num1, num2;
    int gcd;
    cout << "Please enter two integers, separated by space: ";
    cin >> num1 >> num2;
    list_numbers(num1, num2);
    cout << endl;
    gcd = find_gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is ";
    cout << gcd << endl;
    return 0;
    }
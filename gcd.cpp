//
// Assumed a & b are valid non zero numbers in integer range 
//
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while(b && a)
    {
        if(a > b)
        {
            a = a -b;
        }
        else if(a < b)
        {
            b = b -a;
        }
        else
        {
            return a;
        }
    }
    
    return (a | b);
}

int main()
{
    cout<<"gcd - " << gcd(78945,425);

    return 0;
}

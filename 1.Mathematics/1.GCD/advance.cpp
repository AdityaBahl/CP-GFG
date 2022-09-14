// Euclidean Theorem
// Basic Idea:-
// Let b be smaller than a, then-
// gcd(a,b)=gcd(a-b,b)
// for example:
// for a=10 and b=9
// gcd(10,9)=gcd(1,9)
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    cout << a;
    return 0;
}
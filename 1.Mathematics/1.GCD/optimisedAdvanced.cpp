// optimised Euclidean Algorithm
// if b>a then the first recursive call will simply swap the 2 variables
// as if x<y then x%y==x as in the example 10%12==10
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}
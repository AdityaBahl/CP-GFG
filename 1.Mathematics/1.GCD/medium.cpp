#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int temp = min(a, b);
    if (max(a, b) % temp != 0)
        temp = pow(temp, 0.5); // this reduces some steps in the iteration than the basic method, but still not enough
    while (temp > 0)
    {
        if (a % temp == 0)
            if (b % temp == 0)
                break;
        temp--;
    }
    cout << temp;
    return 0;
}
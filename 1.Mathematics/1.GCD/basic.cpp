#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int temp = min(a, b);
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
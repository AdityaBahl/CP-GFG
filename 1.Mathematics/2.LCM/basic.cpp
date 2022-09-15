#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int temp = max(a, b);
    while (temp != a * b)
    {
        if (temp % a == 0)
        {
            if (temp % b == 0)
                break;
        }
        temp++;
    }
    cout << temp;
    return 0;
}
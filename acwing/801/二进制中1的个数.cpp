#include <iostream>

using namespace std;

int lowBit(int x)
{
    return (x & -x);
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        int res = 0;
        while (k)
            k -= lowBit(k), res++;

        cout << res << ' ';
    }
    return 0;
}
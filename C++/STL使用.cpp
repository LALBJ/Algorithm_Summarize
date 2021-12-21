#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // vector<int> a(10, 3);
    // vector<int> a[10];
    vector<int> a;

    // 所有STL都有size\empty，时间复杂度为O(1)
    a.size();
    a.empty();

    for (auto x : a)
        cout << x << endl;

    return 0;
}
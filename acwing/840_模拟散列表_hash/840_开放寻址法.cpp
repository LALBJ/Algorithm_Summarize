#include <iostream>
#include <cstring>

using namespace std;

const int N = 200003, empty = 0x3f3f3f3f;

int idx = 0;
int h[N];

int find(int num)
{
    int k = ((num % N) + N) % N;
    while (h[k] != empty && h[k] != num)
    {
        k++;
        if (k == N)
            k = 0;
    }
    return k;
}

int main()
{
    int ops;

    memset(h, 0x3f, N);
    scanf("%d", &ops);
    while (ops--)
    {
        int num;
        char op[2];
        scanf("%s %d", op, &num);
        int x = find(num);
        if (*op == 'I')
        {
            h[x] = num;
        }
        else
        {
            if (h[x] == num)
            {
                puts("Yes");
            }
            else
            {
                puts("No");
            }
        }
    }
    return 0;
}
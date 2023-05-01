#include <iostream>

int n, a[40][40], x, y;

int main()
{
    std::cin >> n;
    x = 1, y = (n + 1) / 2;
    for (int i = 1; i <= n * n; i++)
    {
        a[x][y] = i;
        if (!a[(x - 2 + n) % n + 1][y % n + 1]) x = (x - 2 + n) % n + 1, y = y % n + 1;
        else x = x % n + 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) std::cout << a[i][j] << ' ';
        std::cout << '\n';
    }
}
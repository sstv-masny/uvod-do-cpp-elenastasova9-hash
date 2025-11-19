#include <iostream>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long a,b,c;
    if (!(std::cin >> a >> b >> c)) return 0;
    long long najmensieCislo = a;

    if (b<=najmensieCislo)
    {
        najmensieCislo = b;
    }

    if (c<= najmensieCislo)
    {
        najmensieCislo = c;
    }

    cout << "Min: " << najmensieCislo;
    return 0;
}
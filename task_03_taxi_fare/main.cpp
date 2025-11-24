using namespace std;

#include <cmath>
#include <iomanip>
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long k;
    if (!(std::cin >> k))
        return 0;

    double suma = 4.00;
    k = k - 2;

    for (long long i = k; i > 0; i--) {
        suma += 1.50;
    }

    cout << ceil(suma) << '\n'; // ceil = automaticky zaokrúhli nahor a nadol = floor

    // cout << fixed << setprecision(2) << suma << '\n';
    return 0;
}
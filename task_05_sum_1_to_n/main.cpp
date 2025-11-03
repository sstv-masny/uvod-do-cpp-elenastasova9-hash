
#include <iostream>
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;
    if (!(std::cin >> n)) return 0;

     long long sum = n * (n + 1) / 2;
    std::cout << sum << "\n";
    
    return 0;
}

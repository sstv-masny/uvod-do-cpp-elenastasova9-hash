#include <iostream>
using namespace std;

int main() {
     int n;
    cin >> n;

     int cis = 0;

    do {
        cis = cis * 10 +n  % 10;
        n /= 10;
    } while (n > 0);

    cout << cis;
}
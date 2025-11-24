
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    int pocet[101] = {};

    for (int i = 0; i < n; i++) {
        int cislo;
        cin >> cislo;
        pocet[cislo]++;
    }

      for (int i = 0; i <= 100; i++) {
        if (pocet[i] >0){
            cout << i << " " << pocet[i] << endl;
        }
    }

    return 0;
}
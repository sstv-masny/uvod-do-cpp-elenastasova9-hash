
#include <iostream>
using namespace std;
int main() {

    long long n, i = 1, sum = 0;

    cout << "Zadaj cislo ";
    cin >> n;

    while (i <= n) {
        sum = sum + 1;
        i++;
        cout << "Sucet cisel 1 - n je: " << sum;
    }
    /*
        int n;
        cout << "in: " << endl;
        cin >> n;

        int sum=0;
        for (int i=1; i <= n; i++) {
            sum = sum + i;
        }
        cout << sum;
    */
    return 0;
}

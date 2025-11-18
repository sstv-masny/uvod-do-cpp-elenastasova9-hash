#include <iostream>
#include <string>
using namespace std;

int main() {
    int number[101] = {1, 2, 3, 4, 5};

    for (int cislo : number) {
        cout << cislo << endl;
    }

    return 0;
}
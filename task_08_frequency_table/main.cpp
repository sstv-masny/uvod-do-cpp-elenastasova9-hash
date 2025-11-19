#include <iostream>
#include <string>
using namespace std;

int main() {
    int number[101] = {};

    number[1] += 1;
    number[2] += 1;
    number[2] += 1;
    number[100] += 1;
    number[0] += 1;

    for (int pocet : number) {
        cout << pocet << " ";
    }

    return 0;
}
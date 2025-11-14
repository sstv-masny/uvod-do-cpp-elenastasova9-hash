
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int number[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 8, 9};

    int count = sizeof(number) / 4;

    for (int i = 0; i < count; i++) {
        cout << number[i] << '\n';
    }

    return 0;
}
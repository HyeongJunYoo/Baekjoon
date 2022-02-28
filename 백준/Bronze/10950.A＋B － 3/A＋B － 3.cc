#include <iostream>

using namespace std;

int main() {
    int size;
    int* result;

    cin >> size;
    result = new int[size];
    for (int i = 0; i < size * 2; i++) {
        if (i < size) {
            int a, b;
            cin >> a >> b;
            result[i] = a + b;
        }
        else
            cout << result[i - size] << endl;
    }
    delete[] result;
}
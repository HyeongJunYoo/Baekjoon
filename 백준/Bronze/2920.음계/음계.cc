#include <iostream>

using namespace std;

int main() {
    int scale[8];
    int count = 0;
    for (int i = 0; i < 8; i++) {
        cin >> scale[i];
    }

    for (int j = 0; j < 7; j++) {
        if (scale[j] == scale[j + 1] - 1)
            count++;
        else if (scale[j] == scale[j + 1] + 1)
            count--;
    }

    if (count == 7)
        cout << "ascending";
    else if (count == -7 )
        cout << "descending";
    else
        cout << "mixed";
}
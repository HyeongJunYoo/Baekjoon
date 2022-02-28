#include <iostream>

using namespace std;

int main() {
    int size = 0;
    int* count = NULL;
    string* word;

    cin >> size;
    count = new int[size];
    word = new string[size];
    for (int i = 0; i < size; i++) {
        cin >> count[i] >> word[i];
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < word[i].size(); j++) {
            for (int k = 0; k < count[i]; k++) {
                cout << word[i][j];
            }
        }
        cout << endl;
    }

    delete[] count, word;
}
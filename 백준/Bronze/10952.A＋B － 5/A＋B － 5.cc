#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    vector<int> vec;

    int a, b;
    int i = 0;
    do {
        cin >> a >> b;
        vec.push_back(a + b);
    } while (a != 0 || b != 0);
    
    for (int i = 0; i < vec.size() - 1; i++) {
        cout << vec.at(i) << endl;
    }

}
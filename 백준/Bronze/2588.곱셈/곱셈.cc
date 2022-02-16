#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout << (num2 % 10) * num1 << endl;
    cout << (num2 / 10) % 10 * num1 << endl;
    cout << (num2 /100) % 10 * num1 << endl;
    cout << num1 * num2;
    
}
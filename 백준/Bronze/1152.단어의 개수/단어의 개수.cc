#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string sentence;
    int count = 0;

    getline(cin, sentence);

    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        count++;
    }
    cout << count;

}
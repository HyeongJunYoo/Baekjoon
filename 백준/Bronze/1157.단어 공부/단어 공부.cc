#include <iostream>

using namespace std;

int main() {
    string word;
    int alphabet[26] = {};
    int max = 0;
    int count = 0;
    char result;
   
    cin >> word;
  
    for (int i = 0; i < word.size(); i++) {
        for (int j = 0; j < 26; j++) {
            if (tolower(word[i]) == 'a' + j)
                alphabet[j] += 1;
        } 
    }

    for (int i = 0; i < 26; i++) {
        if (max < alphabet[i]) {
            max = alphabet[i];
            result = 'a' + i;
        }   
    }
    for (int i = 0; i < 26; i++) {
        if (max == alphabet[i]) {
            count++;
        }
    }
    if (count > 1)
        result = '?';

    cout << (char)toupper(result);

}
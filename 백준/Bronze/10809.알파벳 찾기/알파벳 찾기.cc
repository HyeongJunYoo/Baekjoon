#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	int pos[100] = {};

	cin >> word;

	for (int i = 0; i < 26; i++) {
		pos[i] = -1;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < word.size(); j++) {
			if (i == word[j]) {
				pos[word[j] - 'a'] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << pos[i];
		if (i < 25)
			cout << ' ';
	}

	return 0;

}
#include <iostream>

using namespace std;

int main() {
	int size = 0;
	cin >> size;

	string *ox = new string[size];


	for (int i = 0; i < size; i++) {
		cin >> ox[i];
	}

	for (int i = 0; i < size; i++) {
		int count = 0;
		int sum = 0;
		for (int j = 0; j < ox[i].size(); j++)
		{
			if (ox[i][j] == 'O') {
				count += 1;
				sum += count;
			}
			else
				count = 0;
		}
		cout << sum << endl;
	}

	delete[] ox;


	return 0;

}
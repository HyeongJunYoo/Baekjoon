#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{
	string input;
	vector<bool> result;

	cin >> input;
	while (stoi(input) != 0) {
		int size = input.size();
		bool yesOrNo = true;

		for (int i = 0; i < size / 2; i++) {
			if (input[i] != input[size - i - 1]) {
				yesOrNo = false;
				break;
			}
		}

		result.push_back(yesOrNo);

		cin >> input;
	}

	for (int i = 0; i < result.size(); i++) {
		if (result[i])
			cout << "yes\n";
		else
			cout << "no\n";
	}


	return 0;
}

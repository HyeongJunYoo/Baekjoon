#include <iostream>
#include <string>
using namespace std;

int main() {
	int num[10] = {};
	int result = 0;

	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		num[i] %= 42;
	}
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++)
			if (num[i] == num[j])
				count++;
		if (count == 0)
			result++;
	}
	cout << result;
	return 0;

}
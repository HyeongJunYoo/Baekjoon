#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int sum = 1;
	while (true) {
		if (n <= sum + (i * 6)) {
			if (n == 1)
				cout << 1;
			else
				cout << i + 1;
			break;
		}
		else {
			sum += (i * 6);
			i++;
		}
	}

	return 0;

}
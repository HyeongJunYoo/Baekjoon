#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num = i;
		int sum = 0;

		while (num != 0) {
			sum += num % 10;
			num /= 10;
		}

		if (n == i + sum) {
			result = i;
			break;
		}
	} 
	cout << result;

	return 0;

}
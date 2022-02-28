#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, x;

	cin >> n >> x;
	
	int* numbers = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
		if (numbers[i] < x)
			cout << numbers[i] << " ";
	}

	return 0;

}
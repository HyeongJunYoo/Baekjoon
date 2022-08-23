#include <iostream>
using namespace std;


int main() 
{
	bool isPrime(int n); 
	int N, count = 0;
	int *numbers;

	cin >> N;
	numbers = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < N; i++) {
		if (isPrime(numbers[i]))
			count++;
	}

	cout << count;

	delete[] numbers;
	return 0;
}

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

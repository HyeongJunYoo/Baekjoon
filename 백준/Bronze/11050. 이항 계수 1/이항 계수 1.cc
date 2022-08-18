#include <iostream>
using namespace std;

int Factorial(int n)
{
	int r = 1;
	for (int i = 1; i <= n; i++) {
		r *= i;
	}
	return r;
}

int main() 
{
	int N, K;

	cin >> N >> K;

	int result;
	result = Factorial(N)/ (Factorial(N - K) * Factorial(K));

	cout << result;
	return 0;
}

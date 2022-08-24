#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int* numbers;
	int count = 0;

	cin >> N;
	numbers = new int[N];

	for (int i = 0; i < N; i++)
		cin >> numbers[i];

	sort(numbers, numbers + N);

	for (int i = 0; i < N; i++)
		cout << numbers[i] <<"\n";
	delete[] numbers;

	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int numbers[10000] = {};
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		numbers[num - 1] += 1;
	}

	for (int i = 0; i < 10000; i++) {
		if(numbers[i] > 0)
			for (int j = 0; j < numbers[i]; j++) {
				cout << i + 1 << "\n";
			}
	}

	return 0;
}

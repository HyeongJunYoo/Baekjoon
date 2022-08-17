#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	int N, M, max = 0;
	vector<int> numbers;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		numbers.push_back(n);
	}

	for (int i = 0; i < numbers.size(); i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			for (int k = j + 1; k < numbers.size(); k++) {
				int sum = numbers[i] + numbers[j] + numbers[k];
				if (sum <= M && sum > max)
					max = sum;
			}
		}
	}

	cout << max;

	return 0;
}
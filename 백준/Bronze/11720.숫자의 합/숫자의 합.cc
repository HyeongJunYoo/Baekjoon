#include <iostream>
#include <string>
using namespace std;

int main() {
	int size = 0;
	int sum = 0;
	cin >> size;

	string num;

	cin >> num;


	for (int i = 0; i < size; i++) {
		sum += num[i] - '0';
	}
	
	cout << sum;

	return 0;

}
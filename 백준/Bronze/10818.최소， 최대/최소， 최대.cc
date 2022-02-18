#include <iostream>

using namespace std;

int main() {
	int size;
	int* num;
	int max, min;
	cin >> size;
	num = new int[size];

	cin >> num[0];
	max = num[0];
	min = num[0];

	for (int i = 1; i < size; i++) {
		cin >> num[i];
		if(max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
	}
	cout << min << " " << max;

	return 0;

}
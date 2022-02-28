#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, sum;
	int count[10] = {};

	cin >> a >> b >> c;
	
	sum = a * b * c;

	string result = to_string(sum);

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < result.size(); j++) {
			if (result[j] - '0' == i)
				count[i]++;
		}
		cout << count[i] << endl;
	}

	return 0;

}
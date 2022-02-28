#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0;

	cin >> count;

	while (count)
		printf("%d\n", count--);

	return 0;

}
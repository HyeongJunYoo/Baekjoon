#include <iostream>
#include <string>
using namespace std;

int main() {
	int hour = 0, min = 0;
	cin >> hour >> min;

	if (min < 45) {
		if (hour == 0) {
			hour = 23;
			min += 60;
		}
		else
		{
			hour--;
			min += 60;
		}
	}

	cout << hour << " " << min - 45;

	return 0;

}
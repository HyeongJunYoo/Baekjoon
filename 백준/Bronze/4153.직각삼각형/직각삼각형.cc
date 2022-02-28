#include <iostream>
#include <string>

using namespace std;

int main() {
	int x, y, z;

	

	do {
		cin >> x >> y >> z;
		int max;
		if (x == 0 && y == 0 && z == 0)
			break;
		
		if (x * x + y * y == z * z || 
			x * x + z * z == y * y ||
			y * y + z * z == x * x)
			cout << "right\n";
		else
			cout << "wrong\n";
	} while (x && y && z);

	return 0;

}
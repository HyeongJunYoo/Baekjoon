#include <iostream>
#include <string>

using namespace std;

int main() {
	int t = 0, h = 0, w = 0, n = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				if ((i * h) + (j + 1) == n)
					cout << (100 * (j + 1)) + (i + 1) << endl;
			}
		}
		
	}



	return 0;

}
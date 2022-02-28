#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int x_dist, y_dist;

	w - x < x ? x_dist = w - x : x_dist = x;

	h - y < y ? y_dist = h - y : y_dist = y;

	if (x_dist > y_dist)
		cout << y_dist;
	else
		cout << x_dist;


	return 0;

}
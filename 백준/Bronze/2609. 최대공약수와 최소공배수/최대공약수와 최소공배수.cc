#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{
	int gcd, lcm, n1, n2;
	cin >> n1 >> n2;

	int a = n1, b = n2, c = 0;
	int max = a > b ? a : b;
	while (b) {
		c = a % b;
		a = b;
		b = c;
	}

	gcd = a;

	lcm = gcd * (n1 / gcd) * (n2 / gcd);

	cout << gcd << "\n" << lcm << "\n";

	return 0;
}

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long Hash(string str, int l, int r, int m);

int main() 
{
	int L, r = 31, M = 1234567891;
	string str;

	cin >> L;
	cin >> str;

	cout << Hash(str, L, r, M);

	return 0;
}

long long Hash(string str, int l, int r, int m) {
	long long sum = 0;
	for (int i = 0; i < l; i++) {
		long long R = 1;
		for (int j = 0; j < i; j++) {
			R *= r;
			if (R > m)
				R = R % m;
		}
		sum = sum + (str[i] % 96) * R;
	}
	return sum % m;
}
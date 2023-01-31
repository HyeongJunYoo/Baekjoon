#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

bool Check(string str) {
	stack<char> stack;

	for (int j = 0; j < str.size(); j++) {
		if (str[j] == '(') {
			stack.push('(');
		}
		else if (str[j] == ')') {
			if (stack.empty()) {
				return false;
			}
			else {
				stack.pop();
			}
		}
	}

	return stack.empty();
}
int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	string *str = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < n; i++) {
		if (Check(str[i]))
			cout << "YES\n";
		else
			cout << "NO\n";
	}


	delete[] str;
	return 0;
}
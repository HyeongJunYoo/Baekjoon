#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	
	cin >> n;

	queue<int> cards;

	for (int i = 1; i <= n; i++) {
		cards.push(i);
	}

	while (!cards.empty()) {
		int last = cards.front();
		cards.pop();
		if (cards.empty()) {
			cout << last;
			break;
		}
		last = cards.front();
		cards.pop();
		cards.push(last);
	}


	return 0;
}
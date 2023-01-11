#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int n, k;

    cin >> n >> k;

    queue<int> que;
    for (int i = 0; i < n; i++) {
        que.push(i + 1);
    }

    cout << "<";
    while (que.size() > 1) {
        for (int i = 1; i < k; i++) {
            int temp = que.front();
            que.pop();
            que.push(temp);
        }
        cout << que.front() << ", ";
        que.pop();
    }
    cout << que.front() << ">\n";

    return 0;
}
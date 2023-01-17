#include <iostream>
#include<algorithm>
#include <queue>

using namespace std;

int main(void)
{
    int n, number;
    string cmd;
    queue<int> q;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> number;
            q.push(number);
        }
        else if (cmd == "pop") {
            if (q.size() > 0) {
                printf("%d\n", q.front());
                q.pop();
            }
            else {
                printf("-1\n");
            }
        }
        else if (cmd == "size") {
            printf("%d\n", q.size());
        }
        else if (cmd == "empty") {
            printf("%d\n", q.size() > 0 ? 0 : 1);
        }
        else if (cmd == "front") {
            if (q.size() > 0) {
                printf("%d\n", q.front());
            }
            else {
                printf("-1\n");
            }
        }
        else if (cmd == "back") {
            if (q.size() > 0) {
                printf("%d\n", q.back());
            }
            else {
                printf("-1\n");
            }
        }
            
    }
    return 0;
}
#include <iostream>
#include<algorithm>
#include <deque>

using namespace std;

int main(void)
{
    int n, number;
    string cmd;
    deque<int> dq;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "push_front") {
            cin >> number;
            dq.push_front(number);
        }
        else if (cmd == "push_back") {
            cin >> number;
            dq.push_back(number);
        }
        else if (cmd == "pop_front") {
            if (dq.size() > 0) {
                printf("%d\n", dq[0]);
                dq.pop_front();
            }
            else {
                printf("-1\n");
            }
        }
        else if (cmd == "pop_back") {
            if (dq.size() > 0) {
                printf("%d\n", dq[dq.size() - 1]);
                dq.pop_back();
            }
            else {
                printf("-1\n");
            }
        }
        else if (cmd == "size") {
            printf("%d\n", dq.size());
        }
        else if (cmd == "empty") {
            printf("%d\n", dq.size() > 0 ? 0 : 1);
        }
        else if (cmd == "front") {
            if (dq.size() > 0) {
                printf("%d\n", dq[0]);
            }
            else {
                printf("-1\n");
            }
        }
        else if (cmd == "back") {
            if (dq.size() > 0) {
                printf("%d\n", dq[dq.size() - 1]);
            }
            else {
                printf("-1\n");
            }
        }
            
    }
    return 0;
}
#include <iostream>
#include<algorithm>
#include <stack>

using namespace std;

int main(void)
{
    int n, number;
    string cmd;
    stack<int> st;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd;
        if (cmd == "push") {
            cin >> number;
            st.push(number);
        }
        else if (cmd == "pop") {
            if (st.size() > 0) {
                printf("%d\n", st.top());
                st.pop();
            }
            else {
                printf("-1\n");
            }
        }
        else if (cmd == "size") {
            printf("%d\n", st.size());
        }
        else if (cmd == "empty") {
            printf("%d\n", st.size() > 0 ? 0 : 1);
        }
        else if (cmd == "top") {
            if (st.size() > 0) {
                printf("%d\n", st.top());
            }
            else {
                printf("-1\n");
            }
        }
            
    }
    return 0;
}
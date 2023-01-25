#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class User {
public:
	int age;
	string name;
	User() {};
	~User() {};
	User(int age, string name) {
		this->age = age;
		this->name = name;
	}
};

bool compare(User a, User b) {
	return a.age > b.age;
}

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	vector<User> users;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int age;
		string name;
		cin >> age >> name;
		User user(age, name);
		users.push_back(user);
	}

	stable_sort(users.rbegin(), users.rend(), compare);

	for (int i = 0; i < N; i++) {
		cout << users[i].age << " " << users[i].name << "\n";
	}
	return 0;
}
#include <iostream>
using namespace std;


int main() 
{
	int N, temp;

	cin >> N;

	int title = 0; 
	int count = 0;
	
	while (count != N)
	{
		title++;
		temp = title;

		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				count++;
				break;
			}
			else temp /= 10;
		}
	}
	cout << title;
	return 0;
}

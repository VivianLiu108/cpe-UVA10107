#include<iostream>
using namespace std;

int main()
{
	int num[10000];
	int a = 0;
	int temp;
	while (cin >> num[a])
	{
		for (int i = 0; i < a; i++)
		{
			if (num[i] > num[a])
			{
				temp = num[a];
				for (int j = a; j > i; j--)
					num[j] = num[j - 1];
				num[i] = temp;
			}
		}
		if (a % 2 == 0)
			cout << num[a / 2] << endl;
		if (a % 2 == 1)
			cout << (num[a / 2] + num[(a + 1) / 2]) / 2 << endl;
		a++;
	}
}
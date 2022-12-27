#include <iostream>
using namespace std;

void printO(int x, int y)
{
	if (x < 1 || y < 1)
	{
		cout << "Invalid input";
	}
	else
	{
		for (int j = 1; j <= x; j++)
		{
			for (int i = 1; i <= y; i++)
			{
				cout << 'O';
			}
			cout << "\n";
		}
	}
}
int main()
{

	printO(2, 2);
	cout << "\n";

	printO(3, 5);
	cout << "\n";

	printO(5, 3);
	cout << "\n";

	printO(0, 3);
	cout << "\n";

	printO(7, -1);
	cout << "\n";

	return 0;
}

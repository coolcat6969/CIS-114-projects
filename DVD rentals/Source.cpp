//Programmer: Aiden Reineke
//DVD rental code

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int amount = 0;
	float total = 0;
	char money;
	cout << "How many DVDs are being rented? ";
	cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		if ((i+1) % 3 != 0)
		{
			cout << "Is DVD #" << i + 1 << " a new release? (y/n) ";
			cin >> money;
			if (money == 'y')
			{
				total = total + 3.5;
			}
			else {
				total = total + 2.5;
			}
		}
		else {
			cout << "DVD #" << i + 1 << " is free! \n";
		}
	}
	cout << "Your total is! $" << setprecision(2) << fixed << total;
}
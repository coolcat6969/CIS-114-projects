#include <iostream>
using namespace std;

int main()
{
	int record = 0;
	int team1[] = { 3, 5, 2, 7, 5, 12, 0, 1, 3, 8 };
	int team2[] = { 2, 0, 3, 12, 4, 1, 3, 4, 2, 1 };

	cout << "******Scoredboard******" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (team1[i] >= team2[i])
		{
			record += 1;
			cout << "Game " << i + 1 << ": Home " << team1[i] << " Away " << team2[i] << endl;
		}
		else
		{
			cout << "Game " << i + 1 << ": Away " << *(team1 + i) << " Home " << *(team1 + i) << endl;
		}
	}
	cout << endl;
	cout << "Records: " << endl;
	cout << "Home: " << record << " - " << 10 - record << endl;
	cout << "Home: " << 10 - record << " - " << record << endl;


	return 0;
}
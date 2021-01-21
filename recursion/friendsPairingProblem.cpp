
///given N , friends who want to go to a party on bikes. Each guy can go as an single , or as a couple.
//Find the number of ways in which N friends can go to the party
// N = 3

// ways = 4



#include<iostream>
using namespace std;

int noOfWays(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}

	if (n == 2) {
		return 2;
	}

	return noOfWays(n - 1) + (n - 1) * noOfWays(n - 2);

}

int main()
{
	int n = 3;

	cout << noOfWays(n);



}



//1.f(n-1) + n-1C1 f(n-2)
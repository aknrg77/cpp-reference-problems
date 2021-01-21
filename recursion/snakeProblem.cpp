//jumpSize
//jump steps = 1,2,3

#include<iostream>
using namespace std;


int jumpWays(int n)
{
	if (n == 0) {
		return 1;
	}

	if (n < 0) {
		return 0;
	}



	return jumpWays(n - 1) + jumpWays(n - 2) + jumpWays(n - 3);





}

int main()
{

	int n = 4;

	cout << jumpWays(n);



}
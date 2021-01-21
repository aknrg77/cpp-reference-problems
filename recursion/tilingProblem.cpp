#include<iostream>
using namespace std;
///wall size 4xN and tiles of size (1,4) and (4,1)
//How many ways you can build the wall?



int tiling (int n )
{
	if (n <= 3) {
		return 1;
	}

	int sum = tiling (n - 1) + tiling(n - 4);
	return sum;


}




int main()
{

	int n = 7;
	cout << tiling(n);
}
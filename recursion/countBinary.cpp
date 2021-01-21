
//Count binary string of length N,which have no consecutives ones
#include<iostream>
using namespace std;

int binaryString(int n)
{
	if (n == 1) {
		return 2;
	}

	if (n == 0) {
		return 1;
	}

	if (n < 0) {
		return 0;
	}


	return binaryString(n - 1) + binaryString(n - 2);



}

int main() {

	int n = 2;

	cout << binaryString(n);



}
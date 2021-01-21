#include <iostream>
using namespace std;

int multiply(int n , int times)

{
	if (times == 1) {
		return n;

	}

	int sum = n + multiply(n , times - 1);


	return sum;

}




int main() {

	int n = 7;

	int times = 3;

	cout << multiply(n, times);



}
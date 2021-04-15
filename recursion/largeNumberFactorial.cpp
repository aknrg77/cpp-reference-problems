#include<iostream>
using namespace std;

#define MAX 1000000

int multiply(long long int res[], long long int res_size, int x)
{
	long long int carry = 0;
	for (long long int i = 0; i < res_size; i++) {
		long long int prod = res[i] * x + carry;

		res[i] = prod % 10;

		carry = prod / 10;
	}

	while (carry) {
		res[res_size] = carry % 10;
		carry = carry / 10;
		res_size++;
	}

	return res_size;

}



int main() {

	long long int res[MAX];

	res[0] = 1;

	long long int res_size = 1;


	long long int n = 1001;

	for (long long int x = 2; x <= n; x++) {
		res_size = multiply(res, res_size, x);
	}


	for (long long int i = res_size - 1; i >= 0; i--) {
		cout << res[i];
	}



}
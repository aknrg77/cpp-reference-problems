#include<iostream>
using namespace std;
int fib(int n, int dp[]) {
	//base case
	if (n == 0 or n == 1) {
		return n;
	}

	if (dp[n] != 0) {

		return dp[n];
	}

	int ans ;
	ans = fib(n - 1, dp) + fib(n - 2, dp);

	return dp[n] = ans;

}

int main() {
	int n = 100  ;
	int dp[100000] = {0};

	cout << fib(n, dp);
}
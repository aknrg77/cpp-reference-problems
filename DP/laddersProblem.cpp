#include<bits/stdc++.h>
using namespace std;
int dp[10000] = {0};
int dpo[10000] = {0};
int noOfWays(int n, int k) {


	if (n == 0) {
		return 1;
	}

	if (dp[n] != 0) {
		return dp[n];
	}

	int ans = 0;
	for (int i = 1; i <= k; i++) {
		int subProblem = 0;
		if (n - i >= 0) {
			subProblem = noOfWays(n - i, k);
		}
		ans = ans + subProblem;
	}


	return dp[n] = ans;


}

///space optimising sliding window problem

int spaceOptimising(int n, int k) {
	int dpos[100] = {0};

	dpos[0] = dpos[1] = 1;


	for (int i = 2; i <= k; i++) {
		dpos[i] = 2 * dpos[i - 1];

	}

	for (int i = k + 1; i <= n; i++) {
		dpos[i] = 2 * dpos[i - 1] - dpos[i - k - 1];
	}

	return dpos[n];



}







int bottomUp(int n, int k) {
	dpo[0] = 1;
	for (int i = 1; i <= n; i++) {
		int ans = 0;
		for (int j = 1; j <= k; j++) {
			if (i - j >= 0) {
				ans = ans + dpo[i - j];
			}
		}
		dpo[i] = ans;
	}



	return dpo[n];



}




int main() {

	int n = 4;
	int k = 3;

	//cout << noOfWays(n, k);
	//bottomUp(n, k);
	cout << spaceOptimising(n, k);


}
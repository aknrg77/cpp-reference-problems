#include<bits/stdc++.h>
using namespace std;
int minCoin(int n,  int coins[], int T, int dp[])
{
	//topDown
	if (n == 0) {

		return 0;
	}

	if (dp[n] != 0) {

		return dp[n];
	}

	int ans = INT_MAX;

	for (int i = 0; i < T; i++) {
		int subProb;
		if (n - coins[i] >= 0) {
			subProb = minCoin(n - coins[i], coins, T, dp) + 1;
			ans = min(subProb, ans);
		}
	}

	return dp[n] = ans;

}

//bottom up
int bottomUP(int n, int coins[], int T, int dpo[]) {

	dpo[0] = 0;

	for (int i = 1; i <= n; i++) {
		int dpo[i] = INT_MAX;
		for (int j = 0; j < T; j++) {
			if (i - coins[j] >= 0) {
				dpo[i] = min(dpo[i - coins[j]] + 1, dpo[i]);
			}
		}
	}
	return dpo[n];

}
int main() {
	int coins[] = {1, 7, 10};
	int n = 101;
	int dp[100] = {0};
	int dpo[100] = {0};
	//cout << minCoin(n, coins, 3, dp);
	cout << bottomUP(n, coins, 3, dpo);
}
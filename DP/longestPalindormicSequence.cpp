#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000] = {0};


int main() {
	string s = "cbbd";
	int n = s.length();

	// for (int i = 0; i < n; i++) {
	// 	dp[i][j] = 1;
	// }

	for (int i = 0; i < n; i++) {
		dp[i][i] = 1;
	}


	for (int i = n - 1; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {


			if (s[i] == s[j]) {
				dp[i][j] = 2 + dp[i + 1][j - 1];
			} else {

				dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
			}
		}
	}

	cout << dp[0][n - 1];






}
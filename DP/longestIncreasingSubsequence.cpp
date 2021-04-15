#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int subSeq(string str1 , string str2, int x, int y) {

	for (int i = 0; i <= x;  i++) {
		dp[i][0]  = 0;
	}

	for (int j = 0; j <= y; j++) {
		dp[0][j]  = 0;
	}

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			if (str1[i - 1] == str2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1 ;
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}


	return dp[x][y];



}

int main() {
	memset(dp, -1, sizeof(dp));
	string str1 = "abcdfgt";
	string str2 = "bcg";
	//string str2 = string(str1.rbegin(), str1.rend());
	int x = str1.length();
	int y = str2.length();
	subSeq(str1, str2, x, y);
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j <= y; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
}
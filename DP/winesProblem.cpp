//2D DP



#include<bits/stdc++.h>
using namespace std;

int dp[100][100] = {0};
int maxProfit(int wines[], int i, int j, int n)

{
	if (i > j) {
		return 0;
	}
	if (dp[i][j] != 0) {
		return dp[i][j];
	}

	int y = n - (j - i + 1) + 1;
	int op1 = wines[j] * y + maxProfit(wines, i, j - 1, n);
	int op2 = wines[i] * y + maxProfit(wines, i + 1, j, n);

	return dp[i][j] = max(op1, op2);

}




int main() {
	int wines [] =  {2, 3, 5, 1, 4};
	int n = 5;


	cout << maxProfit(wines, 0, n - 1, n);
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

}
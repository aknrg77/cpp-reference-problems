#include<bits/stdc++.h>
using namespace std;
int dp[100][100];

int sol(int val[], int wt[], int n, int W)
{



	for (int i = 0; i <= n; i++)
	{
		dp[i][0] = 0;
	}

	for (int j = 0; j <= W; j++)
	{
		dp[0][j] = 0;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= W; j++)
		{
			if (wt[i - 1] > j)
			{
				dp[i][j] = dp[i - 1][j];
			}
			else
			{
				dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]] , dp[i - 1][j]);
			}
		}
	}

	return dp[n][W];

}

int main() {

	int val[] = {1, 2, 3};
	int wt [] = {4, 5, 6};


	int n = 3;
	int w = 4;


	sol(val, wt, n, w);

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= w; j++) {
			cout << dp[i][j] << " ";
		}

		cout << endl;
	}


}
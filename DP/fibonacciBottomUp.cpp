#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int dp[1000000];

	dp[0] = 0;
	dp[1] = 1;
	int n = 100;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cout << dp[n];






}
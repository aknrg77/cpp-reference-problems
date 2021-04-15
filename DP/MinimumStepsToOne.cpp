#include<iostream>
#include<bits/stdc++.h>
using namespace std;



//Top down approach
int minimumSteps(int n, int dp[]) {

	if (n == 1) {

		return 0;
	}

	if (dp[n] != 0) {

		return dp[n];
	}





	int x , y, z;
	x = y = z = INT_MAX;

	if (n % 3 == 0) {
		x = minimumSteps(n / 3, dp);
	}

	if (n % 2 == 0) {
		y = minimumSteps(n / 2, dp);
	}


	z = minimumSteps(n - 1, dp);

	int ans =  min(x, min(y, z)) + 1;
	return dp[n] = ans;
}




//Bottom up approach
int bottomUp(int n) {
	int dpo[100000];
	dpo[0] = 0;
	dpo[1] = 0;
	for (int i = 2; i <= n; i++) {
		int x , y, z;
		x = y = z = INT_MAX;

		if (i % 3 == 0) {
			x = dpo[i / 3] + 1;
		}
		if (i % 2 == 0) {
			y = dpo[i / 2] + 1;
		}

		z = dpo[i - 1] + 1;


		dpo[i] = min(x, min(y, z));

	}

	return dpo[n];

}

int main() {
	int dp[1000] = {0};
	int n = 10;
	cout << minimumSteps(n, dp);
	//cout << bottomUp(n);


}
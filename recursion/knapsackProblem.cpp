//  0-1 Knapsack Problem

//we have to include and exclude



#include<iostream>
using namespace std;




int maxProfit(int weights[], int prices[], int N, int C)
{
	if (N == 0 || C == 0)
	{
		return 0;  // if items or capacity get finished;
	}
	//there are 2 choices we include if capacity is more than weight;
	int inc = 0;
	int exe = 0;
	int ans = 0;


	if (weights[0] <= C) {
		//we include
		inc = prices[0] + maxProfit(weights + 1, prices + 1, N - 1, C - weights[0]);
	}
	//we exclude
	exe = maxProfit(weights + 1, prices + 1, N - 1, C);



	ans = max(inc, exe);
	return ans;



}



int main()

{

	int weights[] = {1, 2, 3, 5};
	int prices[] = {40, 20, 30, 100};

	int N = 4;
	int C = 7;

	cout << maxProfit(weights, prices, N, C);

	return 0;

}


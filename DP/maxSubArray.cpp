
using namespace std;

int maxSum(int arr[], int n, int dp[]) {
	if (arr[0] < 0) {
		dp[0] = 0;
	} else {
		dp[0] = arr[0];
	}

	int max_sum = dp[0];
	for (int i = 1; i < n; i++) {
		dp[i] = arr[i] + dp[i - 1];
		if (dp[i] < 0) {
			dp[i] = 0;
		}
		max_sum = max(dp[i], max_sum);
	}
	return max_sum;

}


//SPACE OPTIMISED CODE

int spaceMaxSum(int arr[], int n) {

	int sum = arr[0] > 0 ? arr[0] : 0;

	int maxsum = sum;

	for (int i = 1; i < n; i++) {
		sum = sum + arr[i];
		if (sum < 0) {
			sum = 0;
		}
		maxsum = max(sum, maxsum);
	}
	return maxsum;

}

vector<int> returnMaxArray(int arr[], int n) {

	int max_sum_so_far = INT_MIN;
	int max_ending_here = 0;
	int start = 0;
	int end = 0;
	int s = 0;
	for (int i = 1; i < n; i++) {
		max_ending_here = max_ending_here + arr[i];

		if (max_ending_here < 0) {
			max_ending_here = 0;
			s = i + 1;
		}

		if (max_sum_so_far < max_ending_here) {
			max_sum_so_far = max_ending_here;
			start = s;
			end = i;
		}



	}
	vector<int> v;
	for (int i = start; i <= end; i++) {
		v.push_back(arr[i]);
	}

	return v;



}


int main() {

	int arr[] = { -3, 2, 5, -1, 6, 3, -2, 7, -5, 2};
	int n = sizeof(arr) / sizeof(int );
	int dp[100] = {0};
	//cout << maxSum(arr, n, dp);
	//cout << spaceMaxSum(arr, n);

	vector<int>v;
	v = returnMaxArray(arr, n);

	for (auto x : v) {
		cout << x << " ";
	}

	return 0;



}
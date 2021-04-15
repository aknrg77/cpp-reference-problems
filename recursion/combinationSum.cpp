#include<iostream>
using namespace std;


int c = 0;
void sum(vector <int> a, int b , int i, int n, vector<int > s) {
	if (i >= n) {
		return ;
		s.clear();
		c = 0;
	}


	if (c == b) {
		sort(s.begin(), s.end());

		cout << "(";
		for (auto x : s) {
			cout << x << " ";
		}
		cout << ")";
		cout << endl;

		s.clear();
		c = 0;
		return ;
	}

	for (int j = i; j < n; j++) {

		if (c < b) {
			c += a[j];
			s.push_back(a[j]);

			sum(a, b, i, n, s);

		}
		sum(a, b, i + 1, n, s);

	}



}






vector<vector<int> > combinationSum(vector<int> &A, int B) {
	int n = A.size();
	vector <int> s;
	sum(A, B, n, 0, s);
}

int main() {

	vector


}
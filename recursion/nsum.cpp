#include<iostream>
using namespace std;

int recsum(int x) {
	if (x == 0) {
		return x;
	}
	int sum = x + recsum(x - 1);
	return sum;
}

int main() {
	int n;
	cin >> n;

	cout << recsum(n);
}
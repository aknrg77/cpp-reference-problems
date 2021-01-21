#include <iostream>
using namespace std;


void buuble_sort(int a[], int n, int j)
{
	if (n == 1) {
		return;
	}

	if (j == n - 1) {
		buuble_sort(a, n - 1, 0);
	}


	if (a[j] < a[j + 1]) {
		swap(a[j], a[j + 1]);
	}

	buuble_sort(a, n - 1, j + 1);


}

int main() {
	int a[] = {5, 4, 3, 1, 2};

	int n = 5;

	buuble_sort(a, n, 0);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}




}
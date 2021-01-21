#include<iostream>
using namespace std;

bool binarySearch(int a[], int key, int start, int end)
{
	if (start == end) {
		return false;
	}
	else {
		int mid = (start + end) / 2;


		if (a[mid] == key) {
			return true;
		}

		if (key < a[mid]) {

			return binarySearch(a, key, start, mid - 1);
		}

		return binarySearch(a, key, mid + 1, end);

	}


}

int main() {
	int arr [] = {1, 2, 3, 4, 5, 10, 20};
	int n = 7;
	int key = 7;

	cout << binarySearch(arr, key, 0, n - 1);

	return 0;
}
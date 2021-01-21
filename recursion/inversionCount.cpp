//using cross inversion


//1,5,2    6,3,0
//(5,2)		(6,0),(6,3),(3,0)

#include <iostream>
using namespace std;

int merge(int a[], int s, int e)
{
	int mid = (s + e) / 2;
	int i = s;
	int j = (mid + 1);
	int k = s;

	int temp[100000];

	int cnt = 0; // count cross inversions


	while (i <= mid && j <= e) {
		if (a[i] <= a[j]) {
			temp[k] = a[i];
			k++;
			i++;
		} else {
			temp[k] = a[j];
			k++;
			j++;
			cnt = cnt + mid - i + 1;

		}
	}

	while (i <= mid) {
		temp[k++] = a[i++];

	}

	while (j <= e) {
		temp[k++] = a[j++];
	}

	for (int i = s; i <= e; i++) {
		a[i] = temp[i];
	}

	return cnt;



}

int inversionCount(int arr[], int s, int e)
{

	if (s >= e) {
		return 0;
	}

	int m = (s + e) / 2;
	int x = inversionCount(arr, s, m);
	int y = inversionCount(arr, m + 1, e);
	int z = merge(arr, s, e); // cross inversion

	return x + y + z;


}

int main() {
	int arr[] = {1, 5, 2, 6, 3, 0};
	int n = sizeof(arr) / sizeof(int);


	cout << inversionCount(arr, 0, n - 1) << endl;





}
//find the first and last occurence of an element


#include<iostream>
using namespace std;

int firstOccurence(int a[], int key, int n)
{
	if (a[0] == key) {
		return 0;
	}

	if ( n == 0) {
		return -1;
	}


	int i = firstOccurence(a + 1, key, n - 1);

	if (i == -1) {
		return -1;
	} else {
		return i + 1;
	}



}




int lastOccurence(int a[], int key, int n)
{
	if (n == 0) {
		return -1;
	}


	int i = lastOccurence(a + 1, key, n - 1);

	if (i == -1) {

		if (a[0] == key)
		{
			return 0;
		} else {
			return -1;
		}
	}

	return i + 1;

}


int main()
{
	int arr[] = {1, 2, 3, 7, 4, 5, 6, 7, 10};

	int key = 7;

	int n = sizeof(arr) / sizeof(int);
	int out [1000];
	//cout << firstOccurence(arr, key, n);
	//cout << lastOccurence(arr , key , n);
	//cout << storeOccurence(arr, key , n);

}
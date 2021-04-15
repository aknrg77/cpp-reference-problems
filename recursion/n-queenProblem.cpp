#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int downDiag[10] = {0};
int upDiag[10] = {0};
int rs[10] = {0};

// bool placed(int a[20][20], int n, int i, int j) {


// 	if () {

// 		return false;
// 	}

// 	return true;



// }







bool nQueen(int n, int a[20][20], int i) {

	if (i >= n) {


		for (int k = 0; k < n; k++) {
			for (int l = 0; l < n; l++) {
				cout << a[k][l] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}


	for (int j = 0; j < n; j++) {

		//check weather if it should be placed
		if (upDiag[i - j + n - 1] != 1 && downDiag[i + j] != 1 && rs[j] != 1) {

			a[i][j] = 1;
			upDiag[i - j + n - 1] = 1;
			downDiag[i + j] = 1;
			rs[j] = 1;

			bool placedQueen = nQueen(n, a, i + 1);


			a[i][j] = 0;
			upDiag[i - j + n - 1] = 0;
			downDiag[i + j] = 0;
			rs[j] = 0;

		}

	}

	return false;


}

int main() {

	int n = 4;

	int arr[20][20] = {0};


	nQueen(n, arr, 0);

}
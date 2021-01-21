#include<iostream>
using namespace std;

bool printPath(char maze[][10], int soln[][10], int i , int j, int n , int m)
{
	if (i == n and j == m) {

		soln[n][m] = 1;

		//print
		for (int p = 0 ; p <= n; p++) {
			for (int k = 0 ; k <= m; k++) {
				cout << soln[p][k] << " ";
			}
			cout << endl;
		}
		cout << endl;

		return true;
	}

	if (i > n or j > m) {
		return false;
	}

	if (maze[i][j] == 'X') {
		return false;
	}


	soln[i][j]  = 1;


	bool rightSuccess = printPath(maze, soln, i + 1, j, n, m);


	bool downSuccess = printPath(maze, soln, i, j + 1, n, m);

	soln[i][j]  = 0;


	if (rightSuccess or downSuccess) {
		return true;
	}
	return false;





}

int main()
{

	char maze[10][10] = {

		"0000",
		"00X0",
		"000X",
		"0X00",

	};

	int soln[10][10] = {0};
	int m , n ;
	m = n = 4;

	printPath(maze, soln, 0, 0, m - 1 , n - 1);






}
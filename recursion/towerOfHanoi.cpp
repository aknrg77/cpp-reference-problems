#include<iostream>
using namespace std;

void move(int n, char src, char helper, char dest) {
	if (n == 0) {
		return ;
	}

	move(n - 1, src, dest, helper);

	cout << src << "->" << dest << " " << n << " " << "ring" << endl ;


	move(n - 1 , helper, src, dest);






}

int main() {


	int  n = 3 ;

	move(n, 'A', 'B', 'C');
}
#include<iostream>
using namespace std;

char words[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


void printSpelling( int n) {

	if (!n) {
		return ;
	}

	printSpelling(n / 10);

	int rem = n % 10;

	cout << words[rem] << " ";

	return ;



}


int main() {
	int n = 2048;


	printSpelling(n);



}
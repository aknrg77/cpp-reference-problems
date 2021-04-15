//compute  a^n

//a^n = a.a^n-1

#include<iostream>
using namespace std;

int power(int a, int p)
{
	if (p == 0) {
		return 1;
	}

	int lop = a * power(a, p - 1);

	return lop;


}


int fast_power(int a, int p) {

	if (p == 0) {
		return 1;
	}

	int smaller_answer = fast_power(a, p / 2);

	smaller_answer *= smaller_answer;


	if (p & 1) {
		return a * smaller_answer;
	} else {
		return smaller_answer;
	}


}


int main() {

	int a = 361;
	int p = 163;

	//cout << power(a, p) << endl;
	cout << fast_power(a, p) % 1000000007;

}
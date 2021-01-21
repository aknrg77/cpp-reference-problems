#include<iostream>
using namespace std;


int printNumber(char a[], int len)
{

	if (!len) {
		return 0;
	}

	int smaller_ans = printNumber(a, len - 1);


	return (smaller_ans * 10 + a[len - 1] - '0');


}


int main()
{
	char a[] = "1234";

	int len = strlen(a);


	cout << printNumber(a, len);



}
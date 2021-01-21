#include<iostream>
using namespace std;



void generateBrackets(int pos , char s[], int n, int i, int j)
{
	if (pos == 2 * n)
	{
		s[pos] = '\0';
		cout << s << endl;
		return ;
	}

	if (i < n) {
		s[pos] = '(';
		generateBrackets(pos + 1, s, n, i + 1, j);
	}

	if (j < i) {
		s[pos] = ')';
		generateBrackets(pos + 1, s, n, i, j + 1);
	}



	return ;




}

int main()

{

	int n = 3;
	char s[1000];

	generateBrackets(0, s, n, 0, 0);



}
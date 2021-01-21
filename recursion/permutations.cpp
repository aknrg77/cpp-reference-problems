#include<iostream>
using namespace std;
void printPermutaions(char in[], int i)
{
	if (in[i] == '\0')
	{
		cout << in << endl;
		return ;
	}


	for (int j = i; in[j] != '\0'; j++) {
		swap(in[i], in[j]);
		printPermutaions(in, i + 1);
		swap(in[i], in[j]);
	}

	return;



}

int main()
{

	char in[] = "abc";




	printPermutaions(in, 0);





}
#include<iostream>
using namespace std;


//add 96 to each and char(i+96);
int tens  = 0;
void generateStrings(int in[], char out[], int i, int j, int n)
{
	if (i >= n) {
		out[j] = '\0';
		cout << out << endl;
		return ;
	}

	if (in[i] == 0) {
		generateStrings()
	}

	// one digit at a time
	out[j] = in[i] + 'A' - 1;
	generateStrings(in, out, i + 1, j + 1, n);

	// two digit at a time if i< n-1;
	if (i < n - 1) {
		int digit = 0;
		digit = in[i] * 10 + in[i + 1];
		if (digit <= 26) {
			out[j] = digit + 'A' - 1;
			generateStrings(in, out, i + 2, j + 1, n);
		}
	}

	return;


}






int main()
{
	int in[] = {1, 2, 3, 4};
	int n = sizeof(in) / sizeof(int);
	char out[] = "";
	generateStrings(in, out, 0, 0, n);




}
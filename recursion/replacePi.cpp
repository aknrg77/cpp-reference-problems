#include<iostream>
using namespace std;
//Replace pi with 3.14


//xpighpilmpipi --> x3.14gh3.14lm3.143.14
void replacePi (char s[], int pos)
{

	if (s[pos] == '\0' && s[pos + 1] == '\0')
	{
		return ;
	}

	if (s[pos] == 'p' && s[pos + 1] == 'i')
	{
		//Shift by 3 positions

		//move the pointer to last and shift by 2 units
		int j = pos + 2;

		while (s[j] != '\0') {
			j++;
		}

		while (j >= pos + 2) {
			s[j + 2] = s[j];
			j--;
		}

		//place the 3.14
		s[pos] = '3';
		s[pos + 1] = '.';
		s[pos + 2] = '1';
		s[pos + 3] = '4';
		replacePi(s, pos + 4);
	}


	else {

		replacePi(s, pos + 1);

	}

	return;



}




int main()
{

	char s[1000] = "xpighpilmpipi5";


	replacePi(s, 0);

	cout << s;


}
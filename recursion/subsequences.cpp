#include <iostream>
using namespace std;



void printSubsets(char s[], string out)
{
	if (s[0] == '\0')
	{
		cout << out << endl;
		return;
	}

	printSubsets(s + 1, out);
	out.push_back(s[0]);
	printSubsets(s + 1, out);

	return;




}

int main()
{

	char s[] = "abc";

	string out = "";

	printSubsets(s, out);





}
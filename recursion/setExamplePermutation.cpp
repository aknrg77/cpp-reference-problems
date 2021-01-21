#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void permutate(char s[], int i, set<string> &out) {

	if (s[i] == '\0') {
		s[i] = '\0';
		string t(s);
		out.insert(t);
		return ;
	}



	for (int j = i ; s[j] != '\0' ; j++) {
		swap(s[i], s[j]);
		permutate(s, i + 1, out);
		swap(s[i], s[j]);

	}




	return;

}





int main() {


	char s[10] = "abb";
	set <string> out;
	permutate(s, 0, out);

	for (auto x : out) {
		cout << x << endl;
	}




}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void permutate (string s, vector <string>&v, char str[], int i, int j) {
		if (i >= s.size()) {
			str[j] = '\0';
			string t(str);

			v.push_back(t);

			return;
		}


		str[j] = s[i];


		//lena hai space
		if (i < s.length() - 1) {
			str[j + 1] = ' ';
			permutate(s, v, str, i + 1, j + 2);
		}

		//lena nahi hai space
		permutate(s, v, str, i + 1, j + 1);

		return ;

	}


	vector<string> permutation(string S) {
		vector <string>  v;
		char str[] = "";
		permutate(S, v, str, 0, 0);
		reverse(v.begin(), v.end());

		return v;

	}

};

int  main() {
	int t;
	cin >> t;
	while (t--) {
		string S;
		cin >> S;
		vector<string> ans;
		Solution obj;
		ans = obj.permutation(S);
		for (int i = 0; i < ans.size(); i++) {
			cout << "(" << ans[i] << ")";
		}
		cout << endl;
	}
}
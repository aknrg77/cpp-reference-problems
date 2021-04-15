//F(n)= (1) +(2*3) + (4*5*6) ... n.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


long long int R(int n, int i, long long int k) {
    if (i >= n + 1) {
        return 0;
    }

    long long int ans = 1;
    int p = i;
    long long int j = k;
    while (p--) {
        ans = ans * j;
        j++;
    }


    long long int answer = ans +  R(n, i + 1, k + i);

    return answer;


}

int main()
{
    int q = 1;
    //cin >> q;
    while (q--) {

        int n = 7;
        cout << R(n, 1, 1) << endl;








    }















}
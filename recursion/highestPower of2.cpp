#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int remainingItem(int n)
{
    if (n == 1) {
        return 1;
    }

    return 2 * remainingItem(n / 2);

}




int main()
{
    int q;
    cin >> q;
    while (q--) {


        int n;
        cin >> n;
        cout << remainingItem(n);
    }




}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    // base case
    if (n == 0)
        return;
    //recursive call
    cout<<n<<endl;
    print(n - 1);
    cout << n << endl;
}

int fact(int n)
{
    if(n==0)
    return 1;

    //recursive call
    return n*fact(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << endl;

//    print(n);
   int ans = fact(n);
   cout<<ans;
    return 0;
}
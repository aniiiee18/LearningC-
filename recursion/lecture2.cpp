#include <bits/stdc++.h>
using namespace std;

void print(int count, int n)
{

    if (count > n)
        return;
    cout << count << endl;
    print(count + 1, n);
}

void print2(int count, int n)
{

    if (count > n)
        return;
    cout << "aniket" << endl;
    print2(count + 1, n);
}

void print3(int count, int n)
{
    if (count < 1)
        return;
    cout << count << endl;
    print3(count - 1, n);
}

void printwithbacktrack1(int count, int n)
{
    //printing the values from 1 to n with the help of backtracking 

    if (count > n)
        return;
    printwithbacktrack1(count + 1, n);
    cout << count << endl;
}

void printwithbacktrack2(int count, int n)
{
    //printing the values from n to 1 with the help of backtracking

    if (count == 0)
        return;
    printwithbacktrack2(count - 1, n);
    cout << count << endl;
}
int main()
{
    int n;
    cout << "enter your number : ";
    cin >> n;
    int i = 1;
    int j = n;

    // print(i, n);
    // print2(i,n);
    // print3(j, n);
    // printwithbacktrack1(i,n);
    // printwithbacktrack2(j,n);
}
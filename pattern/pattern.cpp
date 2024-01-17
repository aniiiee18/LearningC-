#include<bits/stdc++.h>
using namespace std;


void print(int n)
{
    if(n==0)
    {
        return;
    }
    print(n--);
    cout<<"name"<<"";
}
int main()
{
    int n = 5;
    // print(n);
//    for(int i = 0; i<5; i++)
//    {
//         for(int j = 0; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//    }

//    for(int i = 1; i<5; i++)
//    {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//    }

//    for(int i = 5; i>=0; i--)
//    {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//    }

// for(int i = 5; i>=0; i--)
// {
//     for(int j = 1; j<i; j++)
//     {
//         cout<<" ";
//     }

//     for(int j = i; i-j+1<i; j--)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

// for(int i = 0; i<n; i++)
// {
//     for(int j = i; j>=0; j--)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i = n; i>=0; i--)
// {
//     for(int j = i; j>=0; j--)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

// int count = 1;

// for(int i = 0; i<n; i++)
// {
//     for(int j = i; j>=0; j--)
//     {
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }


}
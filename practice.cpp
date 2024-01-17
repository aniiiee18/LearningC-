#include<bits/stdc++.h>
#include<string.h>
#include<iostream>
#include<math.h>
using namespace std;

//---------->decimal to binary(first approach)<-----
/* void decimaltoBinary(int n)
{
    
    
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout<<"your answer is : "<<ans;
}
*/
   
//---------->second approach<-----------
/* void decimaltoBinary(int n)
{
    int digit =0;
    while (n!=0)
    {
        int digit = n%2;
        n = n/2;
        cout<<digit;
    } 
}
*/


//---------->binary to decimal<------------
/*void binarytoDecimal(int n)
{    
    int i = 0;
    int ans = 0 ;
    while(n!=0)
    {
        int digit = n%10;
        if (digit == 1)
        {
            
             ans = ans + pow(2,i);
        }
        i++;
        n = n/10;
    }
    cout<<ans;
}


    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
    
    
    int m = n;
    int mask = 0 ;
    while(m!=0)
    {
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    int ans = (~n)& mask;
    cout<<ans;

    int i = 2;

    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not a prime number";
            break;
        }
        else
        {
            cout<<"it is prim number for "<<i<<endl;
            
        }
        i++;
    }

*/
//------->even or not<-----------
/* void iseven(int n)
{
    if((n&1)==0)
    {
        cout<<"even";
    }
    else if ((n&1)!= 0)
    {
        cout<<"odd";
    }
}
*/

// int main()
// {
//     int n;
//     cout << "enter your value ";
//     cin >> n;
//     //decimaltoBinary(n);
//    // binarytoDecimal(n);
//    //cout<<n%10;n
//    int sum = 0;
//     for(int i = 2; i<=n; i+2)
//     {
//         sum = sum + i;
//     }
//     cout<<sum;
// }

vector<int> printNos(int x) {
    // Write Your Code h  
    vector<int>ans;
    
    //base case
    if(x==0)
    {
        return ans;
    }
    else{
        ans.push_back(x);
        x--;
    }
    printNos(x);
}

int main()
{
    int n; 
    cin>>n;

    // for(int i = 1; i<n; i++)
    // {
    //     for(int j = 0; j<n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     for(int j = 0; j<n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = 0; j<n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<(2*i)+1; j++)
    //     {
    //         cout<<"*";
    //     }
    //     for(int j = 0; j<n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = n; i>0; i--)
    // {
    //     for(int j = 0; j<n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<(2*i)-1; j++)
    //     {
    //         cout<<"*";
    //     }
    //     for(int j = 0; j<n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i = 0; i<=n; i++)
    // {
    //     for(int j = 0; j<=n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     for(int j = 0; j<=n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    //  for(int i = n; i>0; i--)
    // {
    //     for(int j = 0; j<n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for(int j = 0; j<i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     for(int j = 0; j<n-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = 0; j<=i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = n-1; i>0; i--)
    // {
    //     for(int j = 0; j<i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int start = 1;
    //  for(int i = 0; i<n; i++)
    // {
    //     if(i%2==0) start = 1;
    //     else start = 0;
    //     for(int j = 0; j<=i; j++)
    //     {
    //         cout<<start;
    //         start = 1 - start;
    //     }
    //     cout<<endl;
    // }

    // int spaces = 2*(n-1);
    // for(int i = 1; i<=n; i++)
    // {
    //     //numbers 
    //     for(int j = 1; j<=i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     //spaces
    //     for(int j = 1; j<=spaces; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     //numbers
    //     for(int j = i; j>=1; j--)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    //     spaces -= 2;
    // }
    // for(int i = n; i>0; i--)
    // {
    //     for(int j = 0; j<i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     for(int j = 1; j<=n-i+1; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //  int sum = 1;
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j = 1; j<=i; j++)
    //     {
    //         cout<<sum<<" ";
    //         sum = sum + 1;
    //     }
    //     cout<<endl;
    // }

    // for(int i = n; i>=1; i--)
    // {
    //     char ch = 'A';
    //     for(int j = 1; j<=i; j++)
    //     {
    //         cout<<ch;
    //         ch = ch+1;
    //     }
    //     cout<<endl;
    // }

    // char ch = 'A';
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j = 1; j<=i; j++)
    //     {
    //         cout<<ch;
    //     }
    //     cout<<endl;
    //     ch = ch+1;
    // }

    // for(int i = 0; i<n; i++)
    // {
    //     for(int j = 0; j<n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     char ch = 'A';
    //     int breakpoint = (2*i+1)/2;
    //     for(int j = 1; j<=(2*i)+1; j++)
    //     {
    //         cout<<ch;
    //         if(j<=breakpoint) ch++;
    //         else ch--;
    //     }
    //     for(int j = 0; j<n-i-1; j++)
    //     {
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // int count = 0;
    // while(n!=0)
    // {
    //     count++;
    //     n = n/10;
    // }
    // cout<<count;
    // float x = n;
    // float count = 0;
    // float digit;
    // while(n!=0)
    // {
    //     digit = n%10;
    //     if((x%digit)==0)
    //     {
    //         count++; 
    //     }
    //     n = n/10;
    // }
    // cout<<count;
    // int x = n;
    // int digit;
    // int rev = 0;
    // while(n!=0)
    // {
    //     digit = n%10;
    //     rev = (rev*10)+digit;
    //     n = n/10;
    // }
    // if(x == rev) cout<<"yes";
    // else  cout<<"no";

       printNos(n);
    
}
#include <iostream>
using namespace std;

//----------->binary search<------------//
/* int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }


    return -1;
}

int main()
{
    int arrg[6] = {3,4,5,7,7,8};
    int ans = search(arrg, 6, 7);
    cout << "your key is available at index " << ans;
    return 0;
}
*/

//--------->interview question<---------------//

//--------->first & last occurence<---------------//
/* int firstocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastocc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 1;
    while (start <= end)
    {
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arg[7] = {2, 2, 4, 5, 6, 7, 8};
    int ans = firstocc(arg, 7, 2);
    int answer = lastocc(arg, 7, 2);
    cout << "the left most index of arg array is " << ans << endl;
    cout << "the right most index of arg array is " << answer;
}
/*

//----------->find peak element in a maumtain<-----//
/* int find(int arr[],int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<end)
    {
        if(arr[mid]<arr[mid + 1])
        {
        start = mid + 1;
        }

        else{
            
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;

}
int main()
{
    int arg[6] = {2,3,4,5,4,3};
    int ans = find(arg,6);
    cout<<ans;

}
*/

//------------>find total number of occurance<------//
/* int occ(int arr[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;
    while(start<=end)
    {
        if(key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }   
    return ans;
}

int last(int arr[],int size,int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = 0;
    while(start<=end)
    {
        if(key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }   
    return ans;
}


int main()
{
    int arg[7] = {2,3,4,5,5,5,6};
    int as = occ(arg,7,5);
    int bs = last(arg,7,5);
    int divide = (bs - as) + 1;
    cout<<divide;
}

*/

//------>find pivot in an array<----------//
/* int pivot(int arr[],int size)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;
    while(start<end)
    {
        if(arr[mid]>arr[0])
        {
            start = mid +1;
        }
        else{
            
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main()
{
    int arg[7] = {9,10,11,12,2,3,4};
    int ari[6] = {10,11,12,2,3,4};
    int ans = pivot(arg,7);
    int answer = pivot(ari,7);
    cout<<"the pivot point is "<<ans<<endl;
    cout<<"the pivot point is "<<answer;
}*/

//-------->search in a roatated array<----------//
/* int getpivot(int arg[],int size)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;
    while(start<end)
    {
        if(arg[mid]>arg[0])
        {
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int search(int arrg[],int s,int e,int key)
{
    int start = s;
    int end = e ;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(key == arrg[mid])
        {
            return mid;
        }
        else if(key>arrg[mid])
        {
            start = mid + 1;
        }
        else 
        {
            end = end - 1;
        }
        mid = start + (end - start)/2;
    }
   return -1;

}

int searchkey(int arr[],int s,int e,int key)
{
    int pivot = getpivot(arr,7);
    if(key>=arr[pivot] && key<=arr[e])
    {
        return search(arr,pivot,e,key);
    }
    else 
    {
        return search(arr,s,pivot-1,key);
    }
}

int main()
{
 int arr[7] = {7,8,9,1,2,3,4};
 int ans = searchkey(arr,0,6,9);
 cout<<"your key is available at "<<ans<<" index";
// int ans = getpivot(arr,7);
// cout<<ans;

}
*/

//---------->find squre root<---------//
/* int root(int n)
{
    int start = 0;
    int end = n;
    int ans = 0;
    int mid = start + (end - start)/2;
    while(start<end)
    {
        if((mid*mid) == n)
        {
            ans = mid;
            return ans;
        }
        else if((mid*mid)>n)
        {
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
}
int main()
{
    int n;
    cin>>n;
    int ans = root(n);
    cout<<"your answer is "<<ans;

}
*/

//------------>book allowcation problem<-----//
/* bool pos(int arr[],int noofbooks,int noofstudents,int mid)
{
    int student = 1;
    int pagesum = 0;

    for(int i = 0; i<noofbooks; i++)
    {
        if(pagesum + arr[i]<=mid)
        {
            pagesum = pagesum + arr[i];
        }
        else 
        {
            student++;
            if(student > noofstudents || arr[i] > mid)
            {
                return false;
            }

            pagesum = arr[i];
        }
    }
    return true;
}

int main()
{
    int arr[4] {10,20,30,40};
    int noofstudent = 2;
    int noofbooks = 4;
    int start = 0;
    int sum = 0;
    for(int i = 0; i<noofbooks; i++)
    {
        sum = sum + arr[i];
    } 
    int end = sum;

    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<end)
    {
        if(pos(arr,noofbooks,noofstudent,mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    cout<<"the minimal value will be "<<ans;
}
*/


//----------->painters partision<---------//
/*int pos(int arr[],int n,int k,int mid)
{
    int painters = 1;
    int boards = 0;
    for(int i = 0; i<n; i++)
    {
        if(boards + arr[i]<=mid)
        {
            boards = boards + arr[i];
        }
        else
        {
            painters++;
            if(painters > k || arr[i]>mid)
            {
                return false;
            }
            boards = arr[i];
        }
    }
    return true;
}

int main()
{
    int arr[4] = {5,6,7,8};
    int k = 2;
    int n = 4;
    int start = 0;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    int ans = -1;

    int mid = start + (end - start)/2;
    while(start<=end)
    {
        if(pos(arr,n,k,mid))
        {
            ans = mid ;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    
    cout<<"your answers would be "<<ans;
}
*/


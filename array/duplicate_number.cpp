#include<bits/stdc++.h>
using namespace std;


/*
this is not the optimized solution bcz we have to traverse
till n-1;

code by @swasthiiiiii

in this question one array will be given and we have to find the 
duplicate number which is present in the array
input: (1,2,3,4,5,4)
output: 4

*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int num;

    //storing the array in any order
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

  //sorting the array
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp;
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    /* after sorting we get elements in
    the ascending order and we can apply this loop*/
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            num=arr[i];
           
        }
    }
    

    return 0;
}
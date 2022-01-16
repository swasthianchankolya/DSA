#include<bits/stdc++.h>
using namespace std;

/*
 this by @swasthiiiiii

input :arr1=(1,2,3,4,5,6),arr2=(5,7,8,9,3,4)
output:346(comman in 2 arrays);

this is optimezed bcz all arrays are sorted
*/

    int main()
{
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int num;
    int flag=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

     for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    //sorting first array
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp;
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

//sorting second array
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp;
            if(arr2[i]>arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }


/*
solution 1)
 this can be on of the solution but here loop will go till end
and we can optimize it more
*/
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
            cout<<arr1[i];
            arr2[j]=-1;
            }
        }
    }

    return 0;
}
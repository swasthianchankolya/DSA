#include<iostream>
using namespace std;

/*
this is by @swasthiiiiii
*/

/*
input :arr1=(1,2,3,4,5,6),arr2=(5,7,8,9,3,4)
output:346(comman in 2 arrays);

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

    for(int i=0;i<n;i++)
    {
        int element=arr1[i];
        for(int j=0;j<n;j++)
        {
            if(element==arr2[j])
            {
                flag=1;
                cout<<element;
                arr2[j]=-1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

/*
question: here you will be given on integer s and array arr,
and u have to find the pair of numbers in the array whos sum is
equal to s, and ur pair should be sorted and all the answers also should
be sorted

input s=5 arr={1,2,3,4,5}
output :(1,4)(2,3)
*/


// not completd(i will complete)
int main()
{
    int s=0;
    cin>>s;

    int arr[]={1,2,3,4,5};
     int temp1,temp2;

    for(int i=0;i<5;i++)
    {
        int tem1,temp2;
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==s)
            {
                temp1=arr[i];
                temp2=arr[j];
                cout<<temp1<<"\t"<<temp2<<"\n";
                break;
            }
        }
    }
    return 0;
}
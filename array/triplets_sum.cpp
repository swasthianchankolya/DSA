#include<bits/stdc++.h>
using namespace std;

/*
question: here you will be given on integer s and array arr,
and u have to find the triplets of numbers in the array whos sum is
equal to s, and ur pair should be sorted and all the answers also should
be sorted

input s=5 arr={1,2,3,4,5}
output :(3,4,5)
*/


// not completd(i will complete)
int main()
{
    int s=0;
    cin>>s;

    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    { 
        int temp1,temp2,temp3;
        for(int j=i+1;j<5;j++)
        {
            for(int k=j+1;k<5;k++)
            {
            //here we initialized j as j=i+1 and k=j+1 ( do dry run to understand)
            //if you want all triplests(ex :s=12 (3,4,5),(4,5,3),(5,3,4) then do j=1,k=2)
            if(arr[i]+arr[j]+arr[k]==s)
            {
                temp1=arr[i];
                temp2=arr[j];
                temp3=arr[k];
                cout<<temp1<<"\t"<<temp2<<"\t"<<temp3<<"\n";
                break;
            }
            }
        }
    }
    return 0;
}
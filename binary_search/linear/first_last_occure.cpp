#include<bits/stdc++.h>
using namespace std;


/*
here we have to finf the first and last occurence of the given number
eg: 1 2 3 3 3 4
num=3

output=2,4

if number not exist then return -1
(note:this is not an optimized soltuion)
*/

int main()
{
    int number;
    cin>>number;
    int flag=0;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number to search\n";
    int num;
    cin>>num;
    

    for(int i=0;i<number;i++)
    {
        if(arr[i]==num)
        {
        cout<<"first occurence:"<<i<<"\n";
        break;
        }
    }
    for(int j=number-1;j>0;j--)
    {
        if(arr[j]==num)
        {
        cout<<"last occurence:"<<j<<"\n";
        break;
        }
    }
    for(int i=0;i<number;i++)
    {
        if(arr[i]!=num)
        {
        flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"-1";
    }
    return 0;
}
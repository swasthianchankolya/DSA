/*
using the binary search we can optimize the solurion
*/
#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    /*
    if the value of start and end is 2 to the power 32 than we
    cant store it in mid bcz its out of int range;
    at that time we can use this formula every where

    mid=start +(end-start)/2;
    */

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        /* if key value is greater than mid than start will move to mid+1
        but end will be the same */
        if(key > arr[mid])
        {
            start=mid+1;
        }
         /* if key value is less than mid than end will move to mid-1
        but start will be the same */
        else
        {
            end=mid-1;
        }
        /*
        here after finding new start or end again we have to find the
        middle element to search
        */
        mid=(start+end)/2;
        /*
         mid=start +(end-start)/2;
        */
    }
    //return -1 if the value is not present
    return -1;
}


int main()
{
    int size;
    int key;
    cout<<"enter the array size:"<<"\n";
    cin>>size;
    int arr[size];
    cout<<"enter the array in order\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to search: "<<"\n";
    cin>>key;


    int index=binarysearch(arr,size,key);
    cout<<"element found at index:"<<index;
    return 0;
}
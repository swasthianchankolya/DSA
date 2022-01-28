#include<bits/stdc++.h>
using namespace std;

/*
in this problem we have to find the first and last occurence of 
a given number(this is using binary search,and i posted linear approrch also)
eg: 1 2 3 4 4 4 6
    num=4
output: 3 5
(if number is not existing then return -1)
*/

int firstocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;//(start=(start+end)/2)
    int ans=-1; //by default -1 bcz if the element not present we return -1
  
  while(start<=end)
  {
      if(arr[mid]==key)
      {
    /* here if the key =mid than we are storing its index in ansand  checking its right
     side to see whether there is another occurence of same number,if number exist
     than updating ans value
    */
      ans=mid;
      end=mid-1;
      }
      else if(key>arr[mid])
      {
       start=mid+1;//go to right
      }
      else // if key is less than mid
      {
       end=mid-1;//go to left
      }
      mid=start+(end-start)/2;
  }
  return ans;

}
int laststocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;//(start=(start+end)/2)
    int ans=-1; //by default -1 bcz if the element not present we return -1
  
  while(start<=end)
  {
      if(arr[mid]==key)
      {
    /* here if the key =mid than we are storing its index in ansand  checking its right
     side to see whether there is another occurence of same number,if number exist
     than updating ans value
    */
      ans=mid;
      start=mid+1;//this is the only change we are making
      }
      else if(key>arr[mid])
      {
       start=mid+1;//go to right
      }
      else // if key is less than mid
      {
       end=mid-1;//go to left
      }
      mid=start+(end-start)/2;
  }
  return ans;

}

int main()
{
    cout<<"enter the size:\n";
    int size;
    int key;
    cin>>size;
    int arr[size];
    cout<<"enter the elements:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key";
    cin>>key;
    int first=firstocc(arr,size,key);
    cout<<"first occurence is at index:"<<first<<"\n";
    int last=laststocc(arr,size,key);
    cout<<"last occurence is at index:"<<last;
    return 0;
}
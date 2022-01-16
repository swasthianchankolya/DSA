#include<bits/stdc++.h>
using namespace std;

/*
this is by @swasthiiiiii
*/


/*
here the function is declared globely so that
our main function can acces it
*/
void printarray(int arr[],int size);

int main()
{
    int arr[6]={20,30,40,50,70,60};

    //here we are calling the function,with parameters
    printarray(arr,3);
    return 0;
}

/*here created the function which will not return anything 
 bcz its the void typebut it will be called by the main 
 program,and then the control will come here and print
 the array
*/
void printarray(int arr[],int size)
{
for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\n";
    }
}
#include<iostream>
using namespace std;

/*
this is by @swasthiiiiii
*/

/*
question: in this we have to swap the alternate element
in the array ,example (1,2,3,4,5,6,7) in this arrar swap
1 and 2 ,then swap 3 and 4 ,then swap 5 and 6 ,and at last
for 7 no elements is not there so dont swap

input:(1,2,3,4,5,6,7)
output:(2,1,4,3,6,5,7)
*/


//function to swap the elements
void swaparray(int arr[],int size)
{
    /*
    here we have to increse i value by 2 at the end
    bcz after swapping 2 elemets the control should go to
    3 rd element not second ,bcz if we use i++
    then the control will go to second element which is index 1
    and then swap index 1 and 2 and sooo on,but now control will
    go to 0 and 1 ,then 2 and 3 so on
    */
    for(int i=0;i<size;i=i+2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    //this will print the elements
     for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int even_array[6]={1,2,3,4,5,6};
    int odd_array[5]={1,2,3,4,5};

    swaparray(odd_array,5);
   // printarray(odd_array,5);


    return 0;
}
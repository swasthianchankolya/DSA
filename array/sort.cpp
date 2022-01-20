#include<iostream>
#include<string>
using namespace std;

int main()
{
    int array[6]={5,4,2,1,6,0};

    for(int i=0;i<6;i++)
    {
        for(int j=i;j<6;j++)
        {
            int temp;
            if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
     for(int i=0;i<6;i++)
    {
        cout<<array[i];
    }

    return 0;
}
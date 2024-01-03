#include<iostream>
using namespace std;

void display(int ara[],int asize)
{
    cout<<"Sorted array is : ";
    for(int i=0; i<asize; i++)
    {
        cout<<ara[i]<<" ";
    }
}

void Insertion(int ara[],int asize)
{
   int i;
   for(i=1;i<asize;i++)
    {
        int current=ara[i];
        int j=i-1;
        while(ara[j]>current && j>=0)
        {
            ara[j+1]=ara[j];
            j--;
        }
        ara[j+1]=current;
    }
}

int main()
{
    int i,j,asize,current;
    cout<<"Enter array length"<<endl;
    cin>>asize;
    int ara[asize];
    cout<<"Enter array Elements"<<endl;
    for(i=0; i<asize; i++)
        cin>>ara[i];
    Insertion(ara,asize);
    display(ara,asize);
}

#include<iostream>
using namespace std;
int hash1(int input)
{
    return(input%13);
}
int hash2(int input)
{
    return(7-(input%7));
}
int doublehash(int i,int input,int tablesize)
{
    return((hash1(input)+i*hash2(input))%tablesize);
}
int insert(int h[],int n)
{
    int input;
    cout<<"ENTER THE ELEMENT TO INSERT";
    cin>>input;
    if(h[hash1(input)]==0)
    {
                          h[hash1(input)]=input;
    }
    else
    {
        int i=1;
        while(h[doublehash(i,input,n)]!=0)
        {
                                       i++;
        }
        h[doublehash(i,input,n)]=input;
    }
}

int display(int h[],int n)
{
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
            cout<<i<<" "<<h[i]<<"\n";
    }
}
    
int main()
{
    int n,ch;
    cout<<"INSERT LENGTH";
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
    {
            h[i]=0;
    }
    while(true)
    {
               cout<<"ENTER CHOICE 1.Input 2.Display";
               cin>>ch;
               switch(ch)
               {
                         case(1):
                                 insert(h,n);
                                 break;
                         case(2):
                                 display(h,n);
                                 break;
               }
    }
}


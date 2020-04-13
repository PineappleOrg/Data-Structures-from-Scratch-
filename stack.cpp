#include<iostream>
using namespace std;

void display(int heap[],int n)
{
	cout<<"NEW-HEAP-->\n";
	for(int i=1;i<n;i++)
	{
		cout<<" "<<heap[i];
	}
	cout<<"\n\n";
}
void sink(int heap[],int i)
{
	if(heap[i]>heap[i*2] && heap[i*2]!=0)
	{
		int temp=heap[i];
		heap[i]=heap[i*2];
		heap[i*2]=temp;
		sink(heap,i*2);
	}
	if(heap[(i*2)+1]<heap[i] && heap[(i*2)+1]!=0)
	{
		int temp=heap[i];
		heap[i]=heap[(i*2)+1];
		heap[(i*2)+1]=temp;
		sink(heap,(i*2)+1);
	}
}

void swim(int heap[],int i)
{
	if(heap[i]<heap[i/2])
	{
		int temp=heap[i/2];
		heap[i/2]=heap[i];
		heap[i]=temp;
		swim(heap,i/2);
	}
}

int insert(int heap[],int n)
{
	int input;
	for(int i=1;i<n;i++)
	{
		cout<<"ELEMENT TO BE INSERTED::";
		cin>>input;
		heap[i]=input;
		swim(heap,i);
	}
}

int delete_elmnt(int heap[],int n)
{
	int input;
	int node;
	cout<<"Enter the element to be deleted::";
	cin>>input;
	for(int i=1;i<n;i++)
	{
		if(heap[i]==input)
		{
			int temp=heap[i];
			heap[i]=heap[n-1];
			heap[n-1]=temp;
			node=i;
			break;
		}
	}
	int heapAfdel[n-1];
	heapAfdel[0]=0;
	for(int j=1;j<n-1;j++)
	{
		heapAfdel[j]=heap[j];
	}
	sink(heapAfdel,node);
	display(heapAfdel,n-1);
}

int main()
{
	int p,ch;
	cout<<" THIS IS MIN HEAP IMPLEMENTATION\n\n";
	cout<<"Enter HEIGHT of HEAP::";
	cin>>p;
	int n=p+1;
	int heap[n];
	heap[0]=0;
	insert(heap,n);
	display(heap,n);
	delete_elmnt(heap,n);
}


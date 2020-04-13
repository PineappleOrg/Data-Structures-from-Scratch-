#include<iostream>

using namespace std;

int display(int heap[],int n)
{
	cout<"HEAP-->\n";
	for(int i=1;i<n+1;i++)
	{
		cout<<heap[i]<<"\n";
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

void sink(int heap[],int i)
{
	if(heap[i]>heap[i*2] || heap[i]>heap[(i*2)+1])
	{
		if(heap[i*2]<heap[(i*2)+1])
		{
			int temp=heap[i];
			heap[i]=heap[i*2];
			heap[i*2]=temp;
			sink(heap,i*2);
		}
		if(heap[(i*2)+1]<heap[i*2])
		{
			int temp=heap[i];
			heap[i]=heap[(i*2)+1];
			heap[(i*2)+1]=temp;
			sink(heap,(i*2)+1);
		}
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

void delete_elmnt(int heap [],int n,int z)
{
	int input;
	cout<<"Enter the element to be deleted::";
	cin>>input;
	for(int i=1;i<n+1;i++)
	{
		if(heap[i]==input)
		{
			int temp=heap[i];
			heap[i]=heap[n];
			heap[n]=temp;
			break;
		}
	}
	int heapAfdel[n];
	heapAfdel[0]=0;
	for(int i=1;i<n-1;i++)
	{
		heapAfdel[i]=heap[i];
	}
	display(heapAfdel,n);
}



int main()
{
	int p,ch;
	cout<<" THIS IS MIN HEAP IMPLEMENTATION\n\n";
	cout<<"Enter lenght of HEAP::";
	cin>>p;
	int n=p+1;
	int heap[n];
	heap[0]=0;
	insert(heap,n);
	while(true)
	{
		cout<<"ENTER choice 1.delete 2.display::";
		cin>>ch;
		switch(ch)
		{
			case(1):
				delete_elmnt(heap,p,n);
				break;
			case(2):
				display(heap,p);
				break;
		}	
	}
}

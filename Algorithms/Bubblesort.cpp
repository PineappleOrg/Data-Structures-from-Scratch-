#include <iostream>
using namespace std;

void Bubblesort(int array[],int size)
{
	for (int step=0;step<size-1;step++)
	{
		for(int i=0;i<size-step-1;i++)
		{
			if(array[i]>array[i+1])
			{
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
}
void printArray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<" "<<array[i];
	}
	cout << "\n";
}

int main()
{
	int data[] = {2,-45,-30,0,11,9};
	int size = sizeof(data)/sizeof(data[0]);
	Bubblesort(data,size);
	cout<<"Array in Ascending order:\n";
	printArray(data,size);
}

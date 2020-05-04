#include<iostream>
using namespace std;

void BubbleSort(int array[],int size)
{
	for(int step=0;step<size-1;step++)
	{
		int swapped=0;
		for(int i=0;i<size-step-1;i++)
		{
			if (array[i]>array[i+1])
			{
				int temp=array[i];//value of array[i] gets stored in temp
				array[i]=array[i+1];//value of array[i+1] gets stored in array[i]
				array[i+1]=temp;//value of temp gets stored in array[i+1]
				swapped=1;
			}
		}
		if(swapped=0)
		{
			break;
		}
	}
}
void printArray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<" "<<array[i];
	}
	cout<<"\n";
}
int main()
{
	int data[]={-2,4,6,9};
	int size = sizeof(data)/sizeof(data[0]);
	bubbleSort(data,size);
	printArray(data,size)
}

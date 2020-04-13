#include<iostream>
using namespace std;

int Min(int mst[],int inset[])
{
	int min_value=99;
	int min_index;
	for(int i=0;i<5;i++)
	{
		if(mst[i]<min_value && inset[i]==0)
		{
			min_index=i;
			min_value=mst[i];
		}
	}
	inset[min_index]=1;
	return min_index;
}
int print(int mst[])
{
	for(int i=0;i<5;i++)
	{
		cout<<" "<<mst[i]<<" ";
		
	}
	cout<<"\n";
}

int Prims(int Mat[5][5])
{
	int inset[5]={1,0,0,0,0};
	int mst[5]={0,2,99,6,99};
	int count=0;
	while(count<5)
	{
		int a=Min(mst,inset);
		for(int i=0;i<5;i++)
		{
			if(mst[i]>Mat[a][i] && Mat[a][i]!=0 && inset[i]!=1)
			{
				mst[i]=Mat[a][i];
			}
		}
		count=count+1;
	}
	print(mst);
}
int main()
{
	int Mat[5][5]=  	{{0, 2, 0, 6, 0 },  
    					{2, 0, 3, 8, 5 },  
    					{0, 3, 0, 0, 7 },  
   						{6, 8, 0, 0, 9 },  
    					{0, 5, 7, 9, 0 }};
    					
	Prims(Mat); 
}

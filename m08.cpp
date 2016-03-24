#include <iostream>
using namespace std;
int minInOrder(int *numbers,int length)
{
	if(numbers==NULL ||length<=0){
		cout<<"error input"<<endl;
		return -1;
		
	}
	int min=numbers[0];
	int i=1;
	for(;i<length;i++)
	{
		if(numbers[i]<min)
		{
			min=numbers[i];
		}
	}
	return min;

}
int rotateMin(int *numbers,int length)
{

	if(numbers==NULL ||length<=0){
		cout<<"error input"<<endl;
		return -1;
		
	}
	int left=0;
	int right=length-1;
	int min;
	int mid;
	if(numbers[left]<numbers[right]){  //no retate
		min=numbers[left];
		return min;
	}else if(numbers[left]==numbers[right]){  //1,0,1,1,1 or 1,1,1,0,1
		min= minInOrder(numbers,length);
		return min;
	}else{
		while(numbers[left]>numbers[right]){
			if((right-left)==1){
				min=numbers[right];
				return min;
			}
			mid=(left+right)/2;
			if(numbers[left]<=numbers[mid]){
				left=mid;
			}else if(numbers[right]>numbers[mid]){
				right=mid;
			}else{
				cout<<"error input"<<endl;
				return -1;
			}
				
		}
	
	}

}
int main(void)
{
	int x[]={9,11,1,3,5,7};
	int m=rotateMin(x,6);
	cout<<m<<endl;
	return 0;
}


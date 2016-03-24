#include <iostream>
using namespace std;

int numsOfOne(int n)
{
	int nums=0;
	int flag=1;
	while(flag){
		if(n & flag)
			nums++;

		flag=flag << 1;
	}
	return nums;
}


int NumberOf1(int n)
{
	int count=0;
	while(n){
		++count;
		n=(n-1)&n;
	}
	return count;

}


int main(void)
{
	int x=1024;
	cout<<numsOfOne(x)<<endl;
	return 0;
}

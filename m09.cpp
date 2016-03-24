#include <iostream>
using namespace std;

int fibo(unsigned int n)
{
	int result[2]={0,1};
	if(n<2)
		return result[n];

	int m1=1;
	int m2=0;
	int x;
	int i=2;
	for(;i<=n;i++)
	{
		x=m1+m2;
	
		m2=m1;    //if m1=x;m2=m1 it will result m2=m1=x;
		m1=x;
	}
	return x;
	
}

int main(void)
{
	cout<<fibo(0)<<endl;
	cout<<fibo(1)<<endl;
	cout<<fibo(2)<<endl;
	cout<<fibo(3)<<endl;
	cout<<fibo(4)<<endl;
	cout<<fibo(5)<<endl;
	return 0;
}

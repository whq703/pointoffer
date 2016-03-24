#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
bool Increment(char *number)
{
	int jinwei=1;
	int Overflow=0;
	int length=strlen(number);
	int i=length-1;
	int x=0;
	do{
		x=number[i]-'0'+jinwei;
		if(x>=10){
			if(i==0){
				Overflow=1;
			}
			x=x-10;
			jinwei=1;
		}
		else{
			jinwei=0;
		}

		number[i]='0'+x;
		i--;
		
	}while(i>=0 && jinwei==1);

	return Overflow;
}
void PrintNum(char *num)
{
	int length=strlen(num);
	int i=0;
	bool isbegin=true;
	for(i=0;i<length;i++){
		if(isbegin && num[i]!='0')
			isbegin=false;
		if(!isbegin)
			printf("%c",num[i]);
	}
	printf("\t");
}
void print1ToMaxdigits(int n)
{
	if(n<0)
		return;

	char *num=new char[n+1];
	memset(num,'0',n);
	num[n]='\0';

	while(Increment(num)==0)
		PrintNum(num);

	delete [] num;
}
int main(void)
{
	int y;
	cin>>y;
	print1ToMaxdigits(y);
	return 0;
}

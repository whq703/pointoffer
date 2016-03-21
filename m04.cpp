#include <iostream>
#include <strings.h>
#include <string.h>
using namespace std;

void replaceblank(char str[],int length)
{
	if(str==NULL || length<=0)
		  return;

	int originalLength=0;
	int numberOfBlank=0;
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			numberOfBlank++;
		}
		originalLength++;
		i++;
	}

	int newLength=originalLength+numberOfBlank*2;

	if(newLength>length)
		return;

	int indexOfOriginal=originalLength;
	int indexOfNew=newLength;

	while(indexOfNew>indexOfOriginal && indexOfOriginal>=0){
		if(str[indexOfOriginal]==' '){
			str[indexOfNew--]='0';		
			str[indexOfNew--]='2';		
			str[indexOfNew--]='%';		
			indexOfOriginal--;
		}
		else
			str[indexOfNew--]=str[indexOfOriginal--];
	}

}

int main(void)
{
	char str[100]="hello world !!";
	replaceblank(str,100);
	cout<<str<<endl;
	return 0;

}

#include <iostream>
using namespace std;

double PowerUnsigned(double base,unsigned int exponent);


static bool flag=true;
bool equal(double m1,double m2)
{
	if((m1-m2>-0.0000001) && m1-m2<0.0000001){
		return true;
	}
	else
		return false;
}
double Power(double base,int exponent)
{
	flag=true;
	if(equal(base,0.0) && exponent<=0){
		flag=false;
		return 0.0;
	}

	unsigned int unsgExponent=(unsigned int)exponent;
	double result=PowerUnsigned(base,unsgExponent);

	if(exponent<0){
		result=1.0/result;
	}
	
	return result;
	
}

double PowerUnsigned(double base,unsigned int exponent)
{
	double result=1.0;

	if(exponent==0)
		return result;
	if(exponent==1)
		return base;

	result=PowerUnsigned(base,(exponent >> 1));
	result*=result;
	if(exponent & 0x01 == 1){
		result *= base;
	}
	return result;
}

int main(void)
{
	cout<<"Power(4.0,5):"<<Power(4.0,5);
	cout<<"    flag:"<<flag<<endl;
	cout<<"Power(0.0,-5):"<<Power(0.0,-5);
	cout<<"    flag:"<<flag<<endl;
	cout<<"Power(0.0,5):"<<Power(0.0,5);
	cout<<"    flag:"<<flag<<endl;
	cout<<"Power(4.0,0):"<<Power(4.0,0);
	cout<<"    flag:"<<flag<<endl;
	cout<<"Power(4.0,-4):"<<Power(4.0,-4);
	cout<<"    flag:"<<flag<<endl;
	cout<<"Power(0.0,0):"<<Power(0.0,0);
	cout<<"    flag:"<<flag<<endl;
	return 0;


}

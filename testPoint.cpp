#include <iostream>
using namespace std;


void change(char **str)
{
	cout<<"sizeof(str)="<<sizeof(str)<<endl;
	cout<<"*str="<<*str<<endl;
	cout<<"str="<<str<<endl;
	cout<<"&str="<<&str<<endl;
	cout<<"______________________"<<endl;
	*str="qqqqqqqqqqqqqqq";
	cout<<"sizeof(str)="<<sizeof(str)<<endl;
	cout<<"*str="<<*str<<endl;
	cout<<"str="<<str<<endl;
	cout<<"&str="<<&str<<endl;
	cout<<"______________________"<<endl;

}
int main(void)
{
	char *ss="hehehehehe";
	cout<<"sizeof(ss)="<<sizeof(ss)<<endl;
	cout<<"*ss="<<*ss<<endl;
	cout<<"(main)&ss="<<&ss<<endl;
	cout<<"_________________________"<<endl;

	char **temp=&ss;
	cout<<"(**)temp="<<temp<<endl;
	*temp="qqqq";
	cout<<"ss="<<ss<<endl;
	change(&ss);

	cout<<"after change"<<endl;

	cout<<"sizeof(ss)="<<sizeof(ss)<<endl;
	cout<<"*ss="<<*ss<<endl;
	cout<<"(main)&ss="<<&ss<<endl;
	cout<<"ss="<<ss<<endl;
	cout<<"_________________________"<<endl;
	return 0;
}

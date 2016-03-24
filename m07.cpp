#include <iostream>
#include <stack>
using namespace std;

template<typename T> class CQueue
{
	public:

		void appendTail(const T& node);
		T deleteHead();
	private:
		stack<T> stack1;
		stack<T> stack2;
};
template<typename T>
void CQueue<T>::appendTail(const T& node)
{
	stack1.push(node);
}
template<typename T>
T CQueue<T>::deleteHead()
{
	T temp;
	if(stack2.empty()==0){
		temp=stack2.top();
		stack2.pop();
		return temp;
	}
	else{
		while(stack1.empty()==0){
			temp=stack1.top();
			stack1.pop();
			stack2.push(temp);
		}
		temp=stack2.top();
		stack2.pop();
		return temp;
		
	}
}
int main(void)
{
	CQueue<int> test;
	int select;
	int x;
	while(cin>>select){
		if(select==0){
			cout<<"push:";
			cin>>x;
			test.appendTail(x);
		}
		else if(select==1){
			
			cout<<"deleteHead:"<<test.deleteHead()<<endl;
		}
		else
			break;
	}
	return 0;
}



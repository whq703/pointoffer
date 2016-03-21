#include <iostream>
#include <stack>
using namespace std;

struct ListNode{
	int m_nKey;
	ListNode *m_pNext;
};

void PrintListReversingly_Iteratively(ListNode *pHead)
{
	stack<ListNode*> nodes;
	ListNode *ptr=pHead;
	
//	cout<<"pHead:"<<pHead<<endl;
//	cout<<"ptr:"<<ptr<<endl;
	if(ptr==NULL){
		cout<<"pHead is null\n"<<endl;
		return;
	}
	while(ptr!=NULL){
		nodes.push(ptr);
		ptr=ptr->m_pNext;
	}

	while(nodes.empty()==0){
		cout<<(nodes.top())->m_nKey<<endl;
		nodes.pop();
	}

}

int main(void)
{
	ListNode *pHead=new ListNode();
	ListNode *ptr=pHead;
	int x;
	cin>>x;
	pHead->m_nKey=x;

	while(cin>>x){
		ptr->m_pNext=new ListNode();
		ptr=ptr->m_pNext;
		ptr->m_nKey=x;
	}
	PrintListReversingly_Iteratively(pHead);
	return 0;
}

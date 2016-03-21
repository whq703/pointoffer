#include "BinaryTreeNode.h"
#include <iostream>
#include <assert.h>

using namespace std;

BinaryTreeNode* ConstructCore(int *startPreorder,int* endPreorder,int *startInorder,int *endInorder)
{
	BinaryTreeNode* root=new BinaryTreeNode();
	int rootvalue=startPreorder[0];
	root->m_nValue=rootvalue;
	root->m_pLeft=NULL;
	root->m_pRight=NULL;

	if(startPreorder==endPreorder){
		if(startInorder==endInorder && *startPreorder==*startInorder)
			return root;
		else{
			cout<<"invaild input"<<endl;
			return NULL;
		}
	}

	int *rootInorder=startInorder;
	while(rootInorder<=endInorder && *rootInorder!=rootvalue){
		++rootInorder;
	}
	
	if(rootInorder==endInorder && *rootInorder!=rootvalue){
			cout<<"invaild input"<<endl;
			return NULL;
	}

	int length=rootInorder-startInorder;

	if(length!=0){   
		root->m_pLeft=ConstructCore(startPreorder+1,startPreorder+length,startInorder,rootInorder-1);
	}
	if(rootInorder!=endInorder){
		root->m_pRight=ConstructCore(startPreorder+length+1,endPreorder,rootInorder+1,endInorder);
	}
	return root;
	


}

BinaryTreeNode* Construct(int *preorder,int *inorder,int length)
{
	if(preorder==NULL || inorder==NULL || length==0)
		return NULL;
	return ConstructCore(preorder,preorder+length-1,inorder,inorder+length-1);
}
void preOrderPrint(BinaryTreeNode *root)   //前序遍历
{
	if(root==NULL)
		return;
	cout<<root->m_nValue<<"  ";
	preOrderPrint(root->m_pLeft);
	preOrderPrint(root->m_pRight);
}

int main(void)
{
	BinaryTreeNode *root=NULL;
	int pre[8]={1,2,4,7,3,5,6,8};
	int mid[8]={4,7,2,1,5,3,8,6};

	root=Construct(pre,mid,8);
	preOrderPrint(root);
	return 0;
}

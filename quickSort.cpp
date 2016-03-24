int partition(int *data,int length,int start,int end)
{
	if(data==NULL || start<0 || length<0 || end>=length)
		return -1;
	int index=randomInRange(start,end);

	int temp;
	temp=data[end];
	data[end]=data[index];
	data[index]=temp;

	int small=start-1;
	int i=start;
	for(;i<end;i++){
		if(data[i]<data[end]){
			small++;
			if(i>small){
				temp=data[i];
				data[i]=data[small];
				data[small]=temp;
			}
		}
	}

	temp=data[end];
	data[end]=data[small+1];
	data[small+1]=temp;
	return (small+1);
}

void QuickSort(int *data,int length,int start,int end)
{
	if(length<0 || start==end)
		return ;
	int index=partition(data,length,start,end);
	if(index>start)
		QuickSort(data,length,start,index-1);
	if(index<end)
		QuickSort(data,length,index+1,end);
}

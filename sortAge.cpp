void sortAges(int ages[],int length)
{
	const int ageMax=99;
	int timesOfAges[ageMax+1];
	int i=0;
	for(;i<=ageMax;i++)
		timesOfAges[i]=0;
	int age;
	for(i=0;i<length;i++)
	{
		age=ages[i];
		if(age<0 || age>ageMax)
			continue;
		timesOfAges[age]++;
	}
	int j;
	int index=0;
	for(i=0;i<ageMax;i++)
	{
		for(j=0;j<timesOfAges[i];j++)
		{
			ages[index]=i;
			index++;
		}
	}

}

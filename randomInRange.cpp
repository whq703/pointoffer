#include <stdlib.h>

int randomInRange(int start,int end)
{
	return rand()%(end-start+1)+start;
}

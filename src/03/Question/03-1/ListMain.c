#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	List list;
	int data;
	ListInit(&list);
	
	for (int i = 1; i <= 9; i++)
		LInsert(&list, i);
	
	int numOfSum = 0;
	if (LFirst(&list, &data))
	{
		numOfSum += data;
		
		while (LNext(&list, &data))
		{
			numOfSum += data;
		}
	}
	printf("데이터의 합: %d \n", numOfSum);
	
	if (LFirst(&list, &data))
	{
		if (data % 2 == 0 || data % 3 == 0)
			LRemove(&list);
		
		while (LNext(&list, &data))
		{
			if (data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
		}
	}
	
	if (LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while (LNext(&list, &data))
		{
			printf("%d ", data);
		}
	}
	printf("\n");
	
	return 0;
}
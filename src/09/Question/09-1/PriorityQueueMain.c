#include <stdio.h>
#include "PriorityQueue.h"
#include <string.h>

int DataPriorityComp(char * str1, char * str2)
{
	return strlen(ch2) - strlen(ch1);
}

int main(void)
{
	PQueue pq;
	PQueueInit(&pq, DataPriorityComp);
	
	PEnqueue(&pq, "Apple");
	PEnqueue(&pq, "Banana");
	PEnqueue(&pq, "Cherry-Coke");
	printf("%s \n", PDequeue(&pq));
		
	PEnqueue(&pq, "Apple");
	PEnqueue(&pq, "Banana");
	PEnqueue(&pq, "Cherry-Coke");
	printf("%s \n",PDequeue(&pq));
	
	while (!PQIsEmpty(&pq))
		printf("%s \n", PDequeue(&pq));
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void)
{
	List list;
	ListInit(&list);
	NameCard * card;
	
	card = MakeNameCard("Park", "010-0000-0000");
	LInsert(&list, card);
	card = MakeNameCard("Lee", "010-1234-5678");
	LInsert(&list, card);
	card = MakeNameCard("Kim", "010-1111-1111");
	LInsert(&list, card);
	
	if (LFirst(&list, &card))
	{
		if (NameCompare(card, "Park") == 0)
		{
			ShowNameCardInfo(card);
		}
		else
		{
			while (LNext(&list, &card))
			{
				if (NameCompare(card, "Park") == 0)
					ShowNameCardInfo(card);
			}
		}
	}
	
	if (LFirst(&list, &card))
	{
		if (NameCompare(card, "Lee") == 0)
		{
			ChangePhoneNum(card, "010-9999-9999");
		}
		else
		{
			while (LNext(&list, &card))
			{
				if (NameCompare(card, "Lee") == 0)
					ChangePhoneNum(card, "010-9999-9999");
			}
		}
	}
	
	if (LFirst(&list, &card))
	{
		if (NameCompare(card, "Kim") == 0)
		{
			free(LRemove(&list));
		}
		else
		{
			while (LNext(&list, &card))
			{
				if (NameCompare(card, "Kim") == 0)
					free(LRemove(&list));
			}
		}
	}
	
	printf("\n");
	
	if (LFirst(&list, &card))
	{
		ShowNameCardInfo(card);
		
		while (LNext(&list, &card))
		{
			ShowNameCardInfo(card);
		}
	}
	
	return 0;
}
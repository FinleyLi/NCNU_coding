//��Ƶ��c �t��k �ҵ{���� 
//��¦�޿� ��� 

#include<stdio.h>

int main()
{
	printf("input:");
	int number_1,number_2,number_3,number_4,number_5;
	char confirm,doubleconfirm;
	scanf("%d,%d,%d,%d,%d",&number_1,&number_2,&number_3,&number_4,&number_5);
	
	printf("�аݭn��X�z��J���Ʀr��?(Y/N):");
	scanf(" %c",&confirm);
	
	if(confirm=='Y')
	{
		printf("output:");
		printf("%d",number_1);
		printf(",%d",number_2);
		printf(",%d",number_3);
		printf(",%d",number_4);
		printf(",%d",number_5);
	}
	else
	{
		printf("�ϥΪ̽T�{����X");
	}
}

//��Ƶ��c �t��k �ҵ{���� 
//��¦�޿� �}�C 

#include<stdio.h>

int main()
{
	int index,number[5];
	char confirm;

	for(int count = 0 ; count < 5 ; count++)
	{
		printf("��%d�ӼƦr:",count+1);
		scanf("%d",&number[count]);
	}
	
	printf("�аݭn��X�z��J���Ʀr��?(Y/N):");
	
	scanf(" %c",&confirm);
	
	if(confirm=='Y')
	{
		for(int count = 0 ; count < 5 ; count++)
		{
			printf("�}�C��m%d���Ʀr��:%d\n",count,number[count]);
		}
	}
	else
	{
		printf("�ϥΪ̿�ܤ���X");
	}
}

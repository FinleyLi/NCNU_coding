#include<stdio.h>
#include<stdlib.h> 

int main()
{
	int n,fib[100];
	fib[0] = 0; fib[1] = 1;//���w�_�l�� fib[0] = 0, fib[1] = 1 
	while(1)
	{
		printf("�п�J���F�쪺����:");
		scanf("%d",&n);
		//1.�}�l�p��ƦC (���)
		//�{���X�}�l
		//1.
		//2.
		//�{���X���� 
		
		for(int i =0;i<=n;i++)
			printf("%d ",fib[i]);
		
		printf("\n\n");
        system("PAUSE");
        system("CLS");
	}
	
}

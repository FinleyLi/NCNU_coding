#include<stdio.h>
#include<stdlib.h> 

int main()
{
	int n,fib[100];
	fib[0] = 0; fib[1] = 1;//給定起始值 fib[0] = 0, fib[1] = 1 
	while(1)
	{
		printf("請輸入欲達到的項次:");
		scanf("%d",&n);
		//1.開始計算數列 (兩行)
		//程式碼開始
		//1.
		//2.
		//程式碼結束 
		
		for(int i =0;i<=n;i++)
			printf("%d ",fib[i]);
		
		printf("\n\n");
        system("PAUSE");
        system("CLS");
	}
	
}

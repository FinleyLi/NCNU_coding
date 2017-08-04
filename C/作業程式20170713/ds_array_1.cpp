//資料結構 演算法 課程說明 
//基礎邏輯 陣列 

#include<stdio.h>

int main()
{
	int index,number[5];
	char confirm;

	for(int count = 0 ; count < 5 ; count++)
	{
		printf("第%d個數字:",count+1);
		scanf("%d",&number[count]);
	}
	
	printf("請問要輸出您輸入的數字嘛?(Y/N):");
	
	scanf(" %c",&confirm);
	
	if(confirm=='Y')
	{
		for(int count = 0 ; count < 5 ; count++)
		{
			printf("陣列位置%d的數字為:%d\n",count,number[count]);
		}
	}
	else
	{
		printf("使用者選擇不輸出");
	}
}

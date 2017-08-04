// 資料結構 演算法 課程說明
// 基礎邏輯 重複

#include<stdio.h>

int main()
{
	int sum;
	int startNumber, endNumber;
		
	printf("請問起始數字?:");
	scanf(" %d",&startNumber);
	
	printf("請問結束數字?:");
	scanf(" %d",&endNumber);
	
	if (startNumber < endNumber)
	{
		for(int count = startNumber ; count <= endNumber ; count++)
		{
			sum = sum+count;
		}
		
		printf("數字%d-%d的總和為:%d",startNumber,endNumber,sum);	
	}
	else
	{
		printf("起始數字需小於結束數字");
	}	
}

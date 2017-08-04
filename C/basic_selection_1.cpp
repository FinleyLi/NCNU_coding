// 資料結構 演算法 課程說明 
// 基礎邏輯 選擇

#include<stdio.h>

int main()
{
	printf("input:");
	int number_1,number_2,number_3,number_4,number_5;
	char confirm,doubleconfirm;
	scanf("%d,%d,%d,%d,%d",&number_1,&number_2,&number_3,&number_4,&number_5);
	
	printf("請問要輸出您輸入的數字嘛?(Y/N):");
	scanf(" %c",&confirm);// %c必須加入空格
	
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
		//­ 重複判斷是否不輸出
		printf("請重複確認一次是否真的不要輸出?(Y/N):");
		scanf(" %c",&doubleconfirm);// %c必須加入空格
		if(doubleconfirm=='Y')
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
			printf("使用者確認不輸出");
		} 
	}
}

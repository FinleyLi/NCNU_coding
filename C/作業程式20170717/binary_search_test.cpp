#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
    int search, ans;
    int data[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};

    printf("請輸入欲搜尋的資料: ");
    scanf("%d", &search);

    // 呼叫函式進行搜尋
    ans = binarysearch(data, search, sizeof(data) / sizeof(int));

    if (ans < 0)
        printf("找不到 %d\n", search);
    else
        printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
        
    system("pause");
}

int binarysearch(int data[], int search, int n)
{
    int low = 0, high = n - 1;//為什麼n-1呢? 

    while (low <= high)
    {
    	//1. 二元搜尋演算法 
        int mid = ;//1.1 計算索引值 (應為範圍最小值+範圍最大值)/2 
        if (data[mid] == search)
            return mid;
        else if () //1.2 如果目前data[mid]的資料 大於 search 則進入
        	high = ;//1.3 最大範圍 應該修改為 目前索引值 - 1 
        else if ()//1.4 如果目前data[mid]的資料 小於 search 則進入 
            low = ;//1.5 最小範圍 應該修改為 目前索引值 + 1 
    }

    return -1;
}

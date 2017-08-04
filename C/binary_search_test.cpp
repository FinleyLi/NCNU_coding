#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);
void bubble_sort_asc(int[], int);// 小到大

int main(void)
{
    int search, ans;
    //int data[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};
	int data[] = {23, 32, 41, 57, 73, 89, 93, 3, 7, 14, 20, 44, 56};
	int len = (int) sizeof(data) / sizeof(*data);// 取出陣列長度
	printf("­原始資料:");
	for(int i=0;i<len;i++)
		printf("%d,",data[i]);
	printf("\n");
	bubble_sort_asc(data, len);
	//---

    printf("請輸入欲搜尋的資料: ");
    scanf("%d", &search);

    // 呼叫函式進行搜尋
    ans = binarysearch(data, search, sizeof(data) / sizeof(int));// sizeof(data) / sizeof(int)陣列長度 

    if (ans < 0)
        printf("找不到 %d\n", search);
    else
        printf("在第 %d 筆資料找到 %d\n", ans + 1, search);
        
    system("pause");
}

int binarysearch(int data[], int search, int n)
{
    int low = 0, high = n - 1;// 為何n-1呢? 

    while (low <= high)
    {
    	//1. €G€ž·jŽMºtºâªk 
        int mid = (low + high) / 2;//1.1 ­計算索引值 (應為範圍最小值 + 範圍最大值)/2 
        if (data[mid] == search)
            return mid;
        else if (data[mid] > search) //1.2 如果data[mid]的資料 大於 search 則進入
        	high = mid - 1;//1.3 最大範圍 應修改為 目前索引值 - 1 
        else if (data[mid] < search)//1.4 如果data[mid]的資料 小於 search 則進入
            low = mid + 1;//1.5 最小範圍 應修改為 目前索引值 + 1 
    }

    return -1;
}

void bubble_sort_asc(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			// 請填入程式碼 
			//1.比較相鄰的元素。如果第一個筆第二個大，就交換他們兩個
			if (arr[j] > arr[j+1]) //1.1 比較目前的元素 與 相鄰的元素之大小，如果前項 目前元素 大於 相鄰元素 則進入
			{ 
				temp = arr[j];//1.2 把目前元素，放入暫存區，
				arr[j] = arr[j+1];//1.3 把相鄰元素 放入 目前元素空間 
				arr[j+1] = temp;//1.4 把目前元素 放入 相鄰元素空間 
			}
		}
	}
		
	printf("由小到大排序:");
	for(int i=0;i<len;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

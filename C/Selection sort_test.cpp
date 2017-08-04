#include<stdio.h> 

#define arrLen 10

void selection_sort_asc(int[], int);//小到大 
void selection_sort_desc(int[], int);//大到小 
int main()
{
	int array[arrLen];
	
	for(int i=0;i<arrLen;i++)
		scanf("%d",&array[i]);
	
	selection_sort_asc(array,arrLen);	
	selection_sort_desc(array,arrLen);
}


void selection_sort_asc(int arr[], int len) {
	int i, j, min, temp;
	
	//請填入程式碼 
	for (i = 0; i < len - 1; i++) { 
		min = i;//調整範圍的起點
		for (j = i + 1; j < len; j++)
		{
			//1.交換最小值跟範圍中位置最小的(2行) 
			if (arr[min] > arr[j])//1.1 比較目前的最小值  是否小於 目前範圍位置的值 
				min = j;//1.2 如果前行成立，把目前最小值的位置放入min中 
		}
		//2.交換--把最小的值網範圍起點放(3行)	
	   	temp = arr[min];//2.1 把目前的最小值暫存起來
	   	arr[min] = arr[i];//2.2 把開始位置的值 放入目前最小值的位置 
		arr[i] = temp;//2.3 把最小值放到開始位置
	}
	
	printf("由小到大排序:");
	for(int i=0;i<arrLen;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

void selection_sort_desc(int arr[], int len) {
//請填入程式碼 
	int i, j, min, temp;
	
	//請填入程式碼 
	for (i = 0; i < len - 1; i++) { 
		min = i;//調整範圍的起點
		for (j = i + 1; j < len; j++)
		{
			//1.交換最小值跟範圍中位置最小的(2行) 
			if (arr[min] < arr[j])//1.1 比較目前的最小值  是否小於 目前範圍位置的值 
				min = j;//1.2 如果前行成立，把目前最小值的位置放入min中 
		}
		//2.交換--把最小的值網範圍起點放(3行)	
	   	temp = arr[min];//2.1 把目前的最小值暫存起來
	   	arr[min] = arr[i];//2.2 把開始位置的值 放入目前最小值的位置 
		arr[i] = temp;//2.3 把最小值放到開始位置
	}
	
	printf("由大到小排序:");
	for(int i=0;i<arrLen;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

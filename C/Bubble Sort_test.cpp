#include <stdio.h>


void bubble_sort_asc(int[], int);//小到大 
void bubble_sort_desc(int[], int);//大到小 

int main() {
	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
	int len = (int) sizeof(arr) / sizeof(*arr);//取出陣列長度 
	bubble_sort_asc(arr, len);
	bubble_sort_desc(arr, len);

}

void bubble_sort_asc(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			//請填入程式碼 
			//1.比較相鄰的元素。如果第一個比第二個大，就交換他們兩個
			if (arr[j] > arr[j+1]) //1.1比較目前元素 與 相鄰元素之大小，如果前項 目前元素 大於 相鄰元素，則進入
			{ 
				temp = arr[j];//1.2把目前元素，放入暫存區， 
				arr[j] = arr[j+1];//1.3把相鄰元素放入目前元素的空間 
				arr[j+1] = temp;//1.4把目前元素 放入 相鄰元素的空間 
			}
		}
	}
		
	printf("由小到大排序:");
	for(int i=0;i<len;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

void bubble_sort_desc(int arr[], int len) {
	//請填入程式碼 
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			//請填入程式碼 
			//1.比較相鄰的元素。如果第一個比第二個大，就交換他們兩個
			if (arr[j] < arr[j+1]) //1.1比較目前元素 與 相鄰元素之大小，如果前項 目前元素 大於 相鄰元素，則進入
			{ 
				temp = arr[j];//1.2把目前元素，放入暫存區， 
				arr[j] = arr[j+1];//1.3把相鄰元素放入目前元素的空間 
				arr[j+1] = temp;//1.4把目前元素 放入 相鄰元素的空間 
			}
		}
	}
		
	printf("由大到小排序:");
	for(int i=0;i<len;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

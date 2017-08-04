#include <stdio.h>


void bubble_sort_asc(int[], int);//�p��j 
void bubble_sort_desc(int[], int);//�j��p 

int main() {
	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
	int len = (int) sizeof(arr) / sizeof(*arr);//���X�}�C���� 
	bubble_sort_asc(arr, len);
	bubble_sort_desc(arr, len);

}

void bubble_sort_asc(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			//�ж�J�{���X 
			//1.����۾F�������C�p�G�Ĥ@�Ӥ�ĤG�Ӥj�A�N�洫�L�̨��
			if (arr[j] > arr[j+1]) //1.1����ثe���� �P �۾F�������j�p�A�p�G�e�� �ثe���� �j�� �۾F�����A�h�i�J
			{ 
				temp = arr[j];//1.2��ثe�����A��J�Ȧs�ϡA 
				arr[j] = arr[j+1];//1.3��۾F������J�ثe�������Ŷ� 
				arr[j+1] = temp;//1.4��ثe���� ��J �۾F�������Ŷ� 
			}
		}
	}
		
	printf("�Ѥp��j�Ƨ�:");
	for(int i=0;i<len;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

void bubble_sort_desc(int arr[], int len) {
	//�ж�J�{���X 
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			//�ж�J�{���X 
			//1.����۾F�������C�p�G�Ĥ@�Ӥ�ĤG�Ӥj�A�N�洫�L�̨��
			if (arr[j] < arr[j+1]) //1.1����ثe���� �P �۾F�������j�p�A�p�G�e�� �ثe���� �j�� �۾F�����A�h�i�J
			{ 
				temp = arr[j];//1.2��ثe�����A��J�Ȧs�ϡA 
				arr[j] = arr[j+1];//1.3��۾F������J�ثe�������Ŷ� 
				arr[j+1] = temp;//1.4��ثe���� ��J �۾F�������Ŷ� 
			}
		}
	}
		
	printf("�Ѥj��p�Ƨ�:");
	for(int i=0;i<len;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

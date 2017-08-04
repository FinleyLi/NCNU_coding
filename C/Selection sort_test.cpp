#include<stdio.h> 

#define arrLen 10

void selection_sort_asc(int[], int);//�p��j 
void selection_sort_desc(int[], int);//�j��p 
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
	
	//�ж�J�{���X 
	for (i = 0; i < len - 1; i++) { 
		min = i;//�վ�d�򪺰_�I
		for (j = i + 1; j < len; j++)
		{
			//1.�洫�̤p�ȸ�d�򤤦�m�̤p��(2��) 
			if (arr[min] > arr[j])//1.1 ����ثe���̤p��  �O�_�p�� �ثe�d���m���� 
				min = j;//1.2 �p�G�e�榨�ߡA��ثe�̤p�Ȫ���m��Jmin�� 
		}
		//2.�洫--��̤p���Ⱥ��d��_�I��(3��)	
	   	temp = arr[min];//2.1 ��ثe���̤p�ȼȦs�_��
	   	arr[min] = arr[i];//2.2 ��}�l��m���� ��J�ثe�̤p�Ȫ���m 
		arr[i] = temp;//2.3 ��̤p�ȩ��}�l��m
	}
	
	printf("�Ѥp��j�Ƨ�:");
	for(int i=0;i<arrLen;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

void selection_sort_desc(int arr[], int len) {
//�ж�J�{���X 
	int i, j, min, temp;
	
	//�ж�J�{���X 
	for (i = 0; i < len - 1; i++) { 
		min = i;//�վ�d�򪺰_�I
		for (j = i + 1; j < len; j++)
		{
			//1.�洫�̤p�ȸ�d�򤤦�m�̤p��(2��) 
			if (arr[min] < arr[j])//1.1 ����ثe���̤p��  �O�_�p�� �ثe�d���m���� 
				min = j;//1.2 �p�G�e�榨�ߡA��ثe�̤p�Ȫ���m��Jmin�� 
		}
		//2.�洫--��̤p���Ⱥ��d��_�I��(3��)	
	   	temp = arr[min];//2.1 ��ثe���̤p�ȼȦs�_��
	   	arr[min] = arr[i];//2.2 ��}�l��m���� ��J�ثe�̤p�Ȫ���m 
		arr[i] = temp;//2.3 ��̤p�ȩ��}�l��m
	}
	
	printf("�Ѥj��p�Ƨ�:");
	for(int i=0;i<arrLen;i++)
		printf("%d,",arr[i]);
	printf("\n");
}

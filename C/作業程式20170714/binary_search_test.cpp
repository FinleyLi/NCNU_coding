#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);

int main(void)
{
    int search, ans;
    int data[] = {3, 7, 14, 20, 23, 32, 41, 44, 56, 57, 73, 89, 93};

    printf("�п�J���j�M�����: ");
    scanf("%d", &search);

    // �I�s�禡�i��j�M
    ans = binarysearch(data, search, sizeof(data) / sizeof(int));

    if (ans < 0)
        printf("�䤣�� %d\n", search);
    else
        printf("�b�� %d ����Ƨ�� %d\n", ans + 1, search);
        
    system("pause");
}

int binarysearch(int data[], int search, int n)
{
    int low = 0, high = n - 1;//������n-1�O? 

    while (low <= high)
    {
    	//1. �G���j�M�t��k 
        int mid = ;//1.1 �p����ޭ� (�����d��̤p��+�d��̤j��)/2 
        if (data[mid] == search)
            return mid;
        else if () //1.2 �p�G�ثedata[mid]����� �j�� search �h�i�J
        	high = ;//1.3 �̤j�d�� ���ӭקאּ �ثe���ޭ� - 1 
        else if ()//1.4 �p�G�ثedata[mid]����� �p�� search �h�i�J 
            low = ;//1.5 �̤p�d�� ���ӭקאּ �ثe���ޭ� + 1 
    }

    return -1;
}

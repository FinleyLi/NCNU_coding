//資料結構 演算法 作業練習
//堆疊 實作 

#include<stdio.h>
#include <stdlib.h>

/*typedef struct lnode { 
  struct lnode *next;
} ListNode;

void ListNodePrint(ListNode *node) {
  ListNode *p;
  for (p = node; p != NULL; p=p->next)
    printf("%p-->", p);
}

int main() {
  ListNode node1, node2, node3;
  node1.next = &node2;
  node2.next = &node3;
  node3.next = NULL;
  ListNodePrint(&node1);
}*/

void add();
void del();
void printMemory();
char op;
#define MAXLEN 8 


typedef struct TABLE 
{     
	int data;    // 資料欄位     
	int next;    // 鏈結欄位 
} NODE;

NODE table[MAXLEN]; 
int main()
{
	//initial
	for(int i = 0;i<MAXLEN;i++)
	{
		table[i].data = -1;
		table[i].next = -1;
	}
	
	while(1)
	{
		printf("輸入資料請按A,刪除資料請按D:");
		scanf(" %c",&op);
		
		switch(op)
		{
			case 'A':
				add();
				break;
			case 'D':
				del();
				break;
		}
		printMemory();
	}
}

void add()
{
	int data;
	int next;
	printf("\n請輸入資料?:");
	scanf(" %d",&data);
	printf("請輸入要新增在哪個位址之後?:");
	scanf(" %d",&next);
	
	//先檢查該位置是否有資料
	if(table[next].data == -1)
	{
		printf("位置%d沒有資料，直接將此筆輸入加入位置%d\n",next,next);
		table[next].data = data;
	}
	else
	{
		int address;
		for(int i=0;i<MAXLEN;i++)
		{
			//1.開始找可以放資料的位置 (空的位置) 
			if(table[i].data == -1)//1.1 判斷目前尋攬到的位置 資料是否為空(-1)，是則進入 
			{
				//1.2 把資料放入目前找到的空位置 
				if(table[next].next != -1)//1.3 判斷欲新增的位置之前有無串列，若無則進入 否則另外處李 
				{
					//1.4 將指定位置的指標，轉指向給新資料
					//1.5 將目前位置，轉指向給指定位置 
				}
				else
				{
					//1.6 將目前位置，轉指向給指定位置 
				}
				//插入資料之後 
				break;
			}	
		}
	}
}

void del()
{
	int next;
	printf("請輸入要刪除哪個位址?:");
	scanf(" %d",&next);
	
	//先檢查該位置是否有資料
	if(table[next].data == -1)
	{
		printf("位置%d沒有資料\n",next);
	}
	else
	{
		for(int i = 0 ; i < MAXLEN ; i++)
		{
			//2.刪除節點 找到要刪除的節點的前一個節點 
			if(table[i].next == next) 
			{
				//2.1 將欲刪除的節點的指標位置，轉給前一個位置 
			}
		} 
		table[next].data = -1;
		table[next].next = -1;
	}
}

void printMemory()
{
	printf("目前的記憶體概況為:\n");
	for(int i=0;i<MAXLEN;i++)
	{
		printf("位置%d:[%d,%d],\n",i,table[i].data,table[i].next);
	}
}


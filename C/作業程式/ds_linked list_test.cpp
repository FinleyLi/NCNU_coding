//��Ƶ��c �t��k �@�~�m��
//���| ��@ 

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
	int data;    // ������     
	int next;    // �쵲��� 
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
		printf("��J��ƽЫ�A,�R����ƽЫ�D:");
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
	printf("\n�п�J���?:");
	scanf(" %d",&data);
	printf("�п�J�n�s�W�b���Ӧ�}����?:");
	scanf(" %d",&next);
	
	//���ˬd�Ӧ�m�O�_�����
	if(table[next].data == -1)
	{
		printf("��m%d�S����ơA�����N������J�[�J��m%d\n",next,next);
		table[next].data = data;
	}
	else
	{
		int address;
		for(int i=0;i<MAXLEN;i++)
		{
			//1.�}�l��i�H���ƪ���m (�Ū���m) 
			if(table[i].data == -1)//1.1 �P�_�ثe�M��쪺��m ��ƬO�_����(-1)�A�O�h�i�J 
			{
				//1.2 ���Ʃ�J�ثe��쪺�Ŧ�m 
				if(table[next].next != -1)//1.3 �P�_���s�W����m���e���L��C�A�Y�L�h�i�J �_�h�t�~�B�� 
				{
					//1.4 �N���w��m�����СA����V���s���
					//1.5 �N�ثe��m�A����V�����w��m 
				}
				else
				{
					//1.6 �N�ثe��m�A����V�����w��m 
				}
				//���J��Ƥ��� 
				break;
			}	
		}
	}
}

void del()
{
	int next;
	printf("�п�J�n�R�����Ӧ�}?:");
	scanf(" %d",&next);
	
	//���ˬd�Ӧ�m�O�_�����
	if(table[next].data == -1)
	{
		printf("��m%d�S�����\n",next);
	}
	else
	{
		for(int i = 0 ; i < MAXLEN ; i++)
		{
			//2.�R���`�I ���n�R�����`�I���e�@�Ӹ`�I 
			if(table[i].next == next) 
			{
				//2.1 �N���R�����`�I�����Ц�m�A�൹�e�@�Ӧ�m 
			}
		} 
		table[next].data = -1;
		table[next].next = -1;
	}
}

void printMemory()
{
	printf("�ثe���O���鷧�p��:\n");
	for(int i=0;i<MAXLEN;i++)
	{
		printf("��m%d:[%d,%d],\n",i,table[i].data,table[i].next);
	}
}


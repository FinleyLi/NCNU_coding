//��Ƶ��c �t��k �@�~�m��
//���| ��@ 

#include<stdio.h>
#include <stdlib.h>
#define MAXSTACK 100 /*�w�q�̤j���|�e�q*/
int stack[MAXSTACK];  //���|���}�C�ŧi 
int top=-1;		//���|������
int isEmpty();
void push(int); 
int pop();
 
int main(int argc, char *argv[]) {
	int value;
	int i;
	printf("�Ш̧ǿ�J10�����:\n");
	for(i=0;i<10;i++){
		scanf("%d",&value);
		push(value);
	}
	printf("====================\n");
	while(!isEmpty()){
		printf("���|�u�X�����Ǭ�:%d\n",pop()); 
	}
	pop();
	return 0;
}
/*�P�_�O�_���Ű��|*/
int isEmpty(){
	if(top==-1){
		return 1; 
	}else{
		return 0;
	}
} 
/*�N���w����Ʀs�J���|*/
void push(int data){
	if(top+1>MAXSTACK-1){
		printf("���|�w��,�L�k�A�[�J\n");	
	}else{
		top++;
		stack[top]=data;
	}
 
} 
/*�q���|���X���*/
int pop(){
	int data;
	if(isEmpty()){
		printf("���|�w��\n");
	}else{
		data=stack[top];
		top--;
		return data; 
	}
}

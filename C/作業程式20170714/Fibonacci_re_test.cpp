#include<stdio.h>
#include<stdlib.h> 

int fib(int n){
	//1. �O���ƦC n������ 
    if() //1.1 �� n�����0�����ɭ� ����פ���� 
        return 0;
    if() //1.2 �� n�����1�����ɭ� ����פ����
        return 1;
    return (fib()+fib());//1.3 �B��O���ƦC �ݭn�e��-�ᶵ���ƭȡA�åB�I�s�ۤv�A���줤�����F�� 
}
 
int main(){
    int input, i;
    while(1){
        printf("�п�J���F�쪺����:");
        scanf("%d", &input);
        
        for(i=0; i<=input; i++)
        	printf("%d  ", fib(i));

        printf("\n\n");
        system("PAUSE");
        system("CLS");
    }
    return 0;
}

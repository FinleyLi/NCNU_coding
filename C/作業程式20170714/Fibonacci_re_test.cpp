#include<stdio.h>
#include<stdlib.h> 

int fib(int n){
	//1. 費式數列 n為項次 
    if() //1.1 當 n等於第0項的時候 等於終止條件 
        return 0;
    if() //1.2 當 n等於第1項的時候 等於終止條件
        return 1;
    return (fib()+fib());//1.3 運算費式數列 需要前項-後項的數值，並且呼叫自己，直到中止條件達成 
}
 
int main(){
    int input, i;
    while(1){
        printf("請輸入欲達到的項次:");
        scanf("%d", &input);
        
        for(i=0; i<=input; i++)
        	printf("%d  ", fib(i));

        printf("\n\n");
        system("PAUSE");
        system("CLS");
    }
    return 0;
}

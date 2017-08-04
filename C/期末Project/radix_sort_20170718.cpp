#include<stdio.h> 
#define arrLen 10

void radix(int data[], int size);//宣告radix函數矩陣與大小 

int main()
{   //利用讀入陣列資料的方式輸入10筆未排序的數字資料 
	int data[10]={100,212,321,231,2,32,11,32,324,21};
	int size=10;
	//先依序印出陣列中未排序的10筆數字資料 
	printf("排序開始前\n");
	for(int i=0;i<size;i++)
	printf("data[%d]=%d\n",i,data[i]);
	
	//呼叫radix函數，並將資料陣列(data[])和陣列大小(size)丟進radix函數中 
	radix(data,size);
	
	
	//依序印出已經排序完成的資料陣列 
	printf("排序完成\n");
	for(int i=0;i<size;i++)
	printf("data[%d]=%d\n",i,data[i]);
}


void radix(int data[], int size) {
	int i, j, k, n, m; //n為基數(個位數、十位數、百位數、...)。
	                   //m為某個位數的值(個位數的值、十位數的值、百位數的值) 
	
	for (n = 1; n <=100;n=n*10) { //n為基數，
	                              //由個位數字開始(十位數、百位數)排序 
		int temp[10][100]={0}; //設定暫存陣列temp
		                       //temp[0~9位數][資料個數],所有內容均預設為0 
		                      
         //每一回合，比對所有資料，依序依據找到的m值，將data[i]放入temp[m][]陣列中 
		 //(m為每筆數字資料的比對值，
		 //如第一回，m=每筆數字的個位數。
		 //  第二回，m=每筆數字的十位數。
		 //  第三回，m=每筆數字的百位數。 ) 
		for (i =0; i < size; i++)
		{
			m=(data[i]/n)%10;//如第1回(n為個位數字)，m= 212取個位數(212/1)%10=2 
			                 //  第2回(n為十位數字)，m= 212取十位數(212/10)%10=21%10=1
							 //  第3回(n為百位數字)，m= 212取百位數(212/100)%10=2%10=2 
			temp[m][i]=data[i]; //把data[i]的值，暫存於temp[m][]中 
			                    //如第1回
								//將data[i]=212放入temp[2][]的陣列中 
			                    //第2回
								//將data[i]=212放入temp[1][]的陣列中
								//第3回
								//將data[i]=212放入temp[2][]的陣列中 
		}
		
		k=0;
		for(i=0;i<10;i++)   //執行10回 
		{ 
			for(j=0;j<size;j++)//每1回，比對每一個temp[i][]中的值
			                   //如temp[0][],temp[1][],...temp[9][]中的值 
			{
				if(temp[i][j]!=0) //如果temp[i][]中的值不等於0，表示它裡面有data[]的暫存值。 
				{
					data[k]=temp[i][j]; //把temp的值，依序回存data裡(從data[0]、data[1]、...依序放入。) 
					k++;                //如temp[0][]={2,11,21,32,32}，
					                    //依序放入data[0],data[1],data[2],data[3],data[4]
										//再去檢查temp[1][]的值是否不等於0，
										//若是，再將temp[1][]中的值，依序再放入data[]中 
				}

			} 
		}
		printf("經過%3d位數排序後:\n",n);
		printf("------------------\n");
		//依序列印出data[]陣列中的值。 
		for(int i=0;i<size;i++)
	    printf("data[%d]=%d\n",i,data[i]);
	}
}


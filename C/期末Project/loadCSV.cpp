#include <stdio.h>
#include <stdlib.h>

void Load_CSV(void);
void radixSort(int[]);

int main(int argc, char *argv[])
{
       Load_CSV();
       system("PAUSE"); 
       return 0;
}

void Load_CSV(void)
{
       FILE *fp;
       //讀取CSV輸入為個別變數 
	   //int x,y,z;

       if( ( fp = fopen( "test.csv", "r")) == NULL) 
       {
              puts("Cannot oepn the file");
       }
       
	   int data[10];
	   while (!feof(fp))
       {
			//讀取CSV輸入為陣列data[] 
			for(int count = 0 ; count < 10 ; count++)
			{
				fscanf( fp, "%d",&data[count]);
			}
			//讀取CSV輸入為個別變數並列印 
              /*fscanf( fp, "%d%d%d,",&x,&y,&z);
              printf("x = %d\n",x);
              printf("y = %d\n",y);
              printf("z = %d\n",z);*/         
       }
       fclose(fp);
       
       printf("\n排序前: \n");
		for(int count = 0 ; count < 10 ; count++)
		{
			printf("陣列位置%d的數字為:%d\n",count,data[count]);
		}
		
		radixSort(data);//呼叫基數排序副程式 
			
		printf("\n排序後: \n");
		for(int count = 0 ; count < 10 ; count++)
		{
			printf("陣列位置%d的數字為:%d\n",count,data[count]);
		}
	         
}

void radixSort(int data[]) {

	//radixSort實作 
	int temp[10][10] = {0}; 
    int order[10] = {0}; 
    
    int n = 1; 
    while(n <= 100) { //100可排序三位數數字 
        
        int i;
        for(i = 0; i < 10; i++) { //數字0-9
            int lsd = ((data[i] / n) % 10); //取餘數判斷排序 
            temp[lsd][order[lsd]] = data[i]; //將data[]放入暫存柱列中 
            order[lsd]++; 
        } 
        
        // 重新排列-將資料從暫存柱列取出放入data[] 
        int k = 0;
        for(i = 0; i < 10; i++) { 
            if(order[i] != 0)  {
                int j;
                for(j = 0; j < order[i]; j++, k++) { 
                    data[k] = temp[i][j]; 
                } 
            }
            order[i] = 0; 
        } 
        //每次排序一個位數列印一次檢查錯誤 
        printf("\n排序中(/%d mod 10): \n", n);
		for(int count = 0 ; count < 10 ; count++)
		{
			printf("陣列位置%d的數字為:%d\n",count,data[count]);
		}
		
		//n 控制變數-決定判斷位數為個拾佰仟萬 
        n *= 10; 
        
    }
}

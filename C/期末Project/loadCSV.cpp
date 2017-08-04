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
       //Ū��CSV��J���ӧO�ܼ� 
	   //int x,y,z;

       if( ( fp = fopen( "test.csv", "r")) == NULL) 
       {
              puts("Cannot oepn the file");
       }
       
	   int data[10];
	   while (!feof(fp))
       {
			//Ū��CSV��J���}�Cdata[] 
			for(int count = 0 ; count < 10 ; count++)
			{
				fscanf( fp, "%d",&data[count]);
			}
			//Ū��CSV��J���ӧO�ܼƨæC�L 
              /*fscanf( fp, "%d%d%d,",&x,&y,&z);
              printf("x = %d\n",x);
              printf("y = %d\n",y);
              printf("z = %d\n",z);*/         
       }
       fclose(fp);
       
       printf("\n�Ƨǫe: \n");
		for(int count = 0 ; count < 10 ; count++)
		{
			printf("�}�C��m%d���Ʀr��:%d\n",count,data[count]);
		}
		
		radixSort(data);//�I�s��ƱƧǰƵ{�� 
			
		printf("\n�Ƨǫ�: \n");
		for(int count = 0 ; count < 10 ; count++)
		{
			printf("�}�C��m%d���Ʀr��:%d\n",count,data[count]);
		}
	         
}

void radixSort(int data[]) {

	//radixSort��@ 
	int temp[10][10] = {0}; 
    int order[10] = {0}; 
    
    int n = 1; 
    while(n <= 100) { //100�i�ƧǤT��ƼƦr 
        
        int i;
        for(i = 0; i < 10; i++) { //�Ʀr0-9
            int lsd = ((data[i] / n) % 10); //���l�ƧP�_�Ƨ� 
            temp[lsd][order[lsd]] = data[i]; //�Ndata[]��J�Ȧs�W�C�� 
            order[lsd]++; 
        } 
        
        // ���s�ƦC-�N��Ʊq�Ȧs�W�C���X��Jdata[] 
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
        //�C���ƧǤ@�Ӧ�ƦC�L�@���ˬd���~ 
        printf("\n�ƧǤ�(/%d mod 10): \n", n);
		for(int count = 0 ; count < 10 ; count++)
		{
			printf("�}�C��m%d���Ʀr��:%d\n",count,data[count]);
		}
		
		//n �����ܼ�-�M�w�P�_��Ƭ��ӬB�եa�U 
        n *= 10; 
        
    }
}

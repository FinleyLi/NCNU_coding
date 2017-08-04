#include<stdio.h> 
#define arrLen 10

void radix(int data[], int size);//痻皚籔 

int main()
{   //ノ弄皚戈よΑ块10掸ゼ逼计戈 
	int data[10]={100,212,321,231,2,32,11,32,324,21};
	int size=10;
	//ㄌ皚いゼ逼10掸计戈 
	printf("逼秨﹍玡\n");
	for(int i=0;i<size;i++)
	printf("data[%d]=%d\n",i,data[i]);
	
	//㊣radixㄧ计盢戈皚(data[])㎝皚(size)メ秈radixㄧ计い 
	radix(data,size);
	
	
	//ㄌ竒逼ЧΘ戈皚 
	printf("逼ЧΘ\n");
	for(int i=0;i<size;i++)
	printf("data[%d]=%d\n",i,data[i]);
}


void radix(int data[], int size) {//祘Αメ戈皚秈data皚い祘Αメ皚秈跑计sizeい 
	int i, j, k, n, m; //n膀计(计计κ计...)m琘计(计计κ计) 
	
	for (n = 1; n <=100;n=n*10) { //n膀计パ计秨﹍(计κ计)逼 
		int temp[10][100]={0}; //砞﹚既皚[0~9计][戈计],┮Τず甧А箇砞0 
		                       //:既皚[0][戈计程100]既皚[1][戈计程100]
							   //既皚[3][戈计程100] 既皚[4][戈计程100]
							   //既皚[5][戈计程100] 既皚[6][戈计程100]
							   //既皚[7][戈计程100] 既皚[8][戈计程100]
							   //既皚[9][戈计程100]

         //–ゑ癸┮Τ戈 (m–掸计戈ゑ癸材–掸计计材–掸计计材–掸计κ计 ) 
		for (i =0; i < size; i++)
		{
			m=(data[i]/n)%10; //材n=1(计)m=(计戈/1)mod10眔计
			                  //mn计材1(n计)36计(36/1)%10=6
			                                //  材2(n计)36计(36/10)%10=3.6%10=3
											//  材3(nκ计)36κ计(36/100)%10=0.36%10=0 
			temp[m][i]=data[i]; //рdata[i]既temp[m][]い (材计3data[i]temp[3][]皚い 
			                    //–р┮Τ戈ㄌ才ゑ癸既temp皚い 
			                    //计3メ秈temp既皚[3][]い 
		}
		
		k=0;
		for(i=0;i<10;i++)   
		{ 
			for(j=0;j<size;j++)//ゑ癸–temp[i][]い 
			{
				if(temp[i][j]!=0) //狦temp[i][]いぃ单0ボウ琌data既tempい 
				{
					data[k]=temp[i][j]; //рtempㄌdata柑(眖data[0]data[1]...ㄌ 
					k++; 
				}

			} 
		}
		printf("竒筁%3d计逼:\n",n);
		printf("------------------\n");
		//ㄌdata[]皚い 
		for(int i=0;i<size;i++)
	    printf("data[%d]=%d\n",i,data[i]);
	}
}


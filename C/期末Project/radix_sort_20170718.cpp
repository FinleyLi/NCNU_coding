#include<stdio.h> 
#define arrLen 10

void radix(int data[], int size);//�ŧiradix��Ưx�}�P�j�p 

int main()
{   //�Q��Ū�J�}�C��ƪ��覡��J10�����ƧǪ��Ʀr��� 
	int data[10]={100,212,321,231,2,32,11,32,324,21};
	int size=10;
	//���̧ǦL�X�}�C�����ƧǪ�10���Ʀr��� 
	printf("�ƧǶ}�l�e\n");
	for(int i=0;i<size;i++)
	printf("data[%d]=%d\n",i,data[i]);
	
	//�I�sradix��ơA�ñN��ư}�C(data[])�M�}�C�j�p(size)��iradix��Ƥ� 
	radix(data,size);
	
	
	//�̧ǦL�X�w�g�Ƨǧ�������ư}�C 
	printf("�Ƨǧ���\n");
	for(int i=0;i<size;i++)
	printf("data[%d]=%d\n",i,data[i]);
}


void radix(int data[], int size) {
	int i, j, k, n, m; //n�����(�Ӧ�ơB�Q��ơB�ʦ�ơB...)�C
	                   //m���Y�Ӧ�ƪ���(�Ӧ�ƪ��ȡB�Q��ƪ��ȡB�ʦ�ƪ���) 
	
	for (n = 1; n <=100;n=n*10) { //n����ơA
	                              //�ѭӦ�Ʀr�}�l(�Q��ơB�ʦ��)�Ƨ� 
		int temp[10][100]={0}; //�]�w�Ȧs�}�Ctemp
		                       //temp[0~9���][��ƭӼ�],�Ҧ����e���w�]��0 
		                      
         //�C�@�^�X�A���Ҧ���ơA�̧Ǩ̾ڧ�쪺m�ȡA�Ndata[i]��Jtemp[m][]�}�C�� 
		 //(m���C���Ʀr��ƪ����ȡA
		 //�p�Ĥ@�^�Am=�C���Ʀr���Ӧ�ơC
		 //  �ĤG�^�Am=�C���Ʀr���Q��ơC
		 //  �ĤT�^�Am=�C���Ʀr���ʦ�ơC ) 
		for (i =0; i < size; i++)
		{
			m=(data[i]/n)%10;//�p��1�^(n���Ӧ�Ʀr)�Am= 212���Ӧ��(212/1)%10=2 
			                 //  ��2�^(n���Q��Ʀr)�Am= 212���Q���(212/10)%10=21%10=1
							 //  ��3�^(n���ʦ�Ʀr)�Am= 212���ʦ��(212/100)%10=2%10=2 
			temp[m][i]=data[i]; //��data[i]���ȡA�Ȧs��temp[m][]�� 
			                    //�p��1�^
								//�Ndata[i]=212��Jtemp[2][]���}�C�� 
			                    //��2�^
								//�Ndata[i]=212��Jtemp[1][]���}�C��
								//��3�^
								//�Ndata[i]=212��Jtemp[2][]���}�C�� 
		}
		
		k=0;
		for(i=0;i<10;i++)   //����10�^ 
		{ 
			for(j=0;j<size;j++)//�C1�^�A���C�@��temp[i][]������
			                   //�ptemp[0][],temp[1][],...temp[9][]������ 
			{
				if(temp[i][j]!=0) //�p�Gtemp[i][]�����Ȥ�����0�A��ܥ��̭���data[]���Ȧs�ȡC 
				{
					data[k]=temp[i][j]; //��temp���ȡA�̧Ǧ^�sdata��(�qdata[0]�Bdata[1]�B...�̧ǩ�J�C) 
					k++;                //�ptemp[0][]={2,11,21,32,32}�A
					                    //�̧ǩ�Jdata[0],data[1],data[2],data[3],data[4]
										//�A�h�ˬdtemp[1][]���ȬO�_������0�A
										//�Y�O�A�A�Ntemp[1][]�����ȡA�̧ǦA��Jdata[]�� 
				}

			} 
		}
		printf("�g�L%3d��ƱƧǫ�:\n",n);
		printf("------------------\n");
		//�̧ǦC�L�Xdata[]�}�C�����ȡC 
		for(int i=0;i<size;i++)
	    printf("data[%d]=%d\n",i,data[i]);
	}
}


#include<stdio.h> 
#define arrLen 10

void radix(int data[], int size);//�ŧi�x�}�P�j�p 

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


void radix(int data[], int size) {//�D�{����J����ư}�C��idata�}�C���A�D�{����J���}�C�j�p��i�ܼ�size�� 
	int i, j, k, n, m; //n�����(�Ӧ�ơB�Q��ơB�ʦ�ơB...)�Cm���Y�Ӧ�ƪ���(�Ӧ�ƪ��ȡB�Q��ƪ��ȡB�ʦ�ƪ���) 
	
	for (n = 1; n <=100;n=n*10) { //n����ơA�ѭӦ�Ʀr�}�l(�Q��ơB�ʦ��)�Ƨ� 
		int temp[10][100]={0}; //�]�w�Ȧs�}�C�A[0~9���][��ƭӼ�],�Ҧ����e���w�]��0 
		                       //�p:�Ȧs�}�C[0][��ƭӼƳ̦h��100��]�B�Ȧs�}�C[1][��ƭӼƳ̦h��100��]�B
							   //�Ȧs�}�C[3][��ƭӼƳ̦h��100��]�B �Ȧs�}�C[4][��ƭӼƳ̦h��100��]�B
							   //�Ȧs�}�C[5][��ƭӼƳ̦h��100��]�B �Ȧs�}�C[6][��ƭӼƳ̦h��100��]�B
							   //�Ȧs�}�C[7][��ƭӼƳ̦h��100��]�B �Ȧs�}�C[8][��ƭӼƳ̦h��100��]�B
							   //�Ȧs�}�C[9][��ƭӼƳ̦h��100��]

         //�C�@�^�X�A���Ҧ���� (m���C���Ʀr��ƪ����ȡA�p�Ĥ@�^�A�C���Ʀr���Ӧ�ơC�ĤG�^�A�C���Ʀr���Q��ơC�ĤT�^�A�C���Ʀr���ʦ�ơC ) 
		for (i =0; i < size; i++)
		{
			m=(data[i]/n)%10; //�Ĥ@�^n=1(�Ӧ�Ʀr)�Am=(�Ʀr���/1)mod10�A�o��Ӧ�Ʀr�C
			                  //m��n��ƪ��ȡA�p��1�^(n���Ӧ�Ʀr)�A36���Ӧ��(36/1)%10=6
			                                //  ��2�^(n���Q��Ʀr)�A36���Q���(36/10)%10=3.6%10=3
											//  ��3�^(n���ʦ�Ʀr)�A36���ʦ��(36/100)%10=0.36%10=0 
			temp[m][i]=data[i]; //��data[i]���ȡA�Ȧs��temp[m][]�� (�p�Ĥ@�^�Ӧ�Ʀr��3��data[i]�A��Jtemp[3][]�}�C���C 
			                    //�C�@�^�X�A��Ҧ���ơA�̧ǩ�J�ŦX���Ȫ��Ȧstemp�}�C�� 
			                    //�p�Ӧ�Ʀr3�A��itemp�Ȧs�}�C[3][]�� 
		}
		
		k=0;
		for(i=0;i<10;i++)   
		{ 
			for(j=0;j<size;j++)//���C�@��temp[i][]������ 
			{
				if(temp[i][j]!=0) //�p�Gtemp[i][]�����Ȥ�����0�A��ܥ��Odata�Ȧs�btemp������ 
				{
					data[k]=temp[i][j]; //��temp���ȡA�̧Ǧ^�s��^data��(�qdata[0]�Bdata[1]�B...�̧ǩ�J�C 
					k++; 
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


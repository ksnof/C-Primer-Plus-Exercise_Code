/**T5
  *�޸ĳ����嵥8.4�Ĳ�������Ϸ
  *ʹ�ö��ֲ��Ҳ���
  *���磺���������50��ѯ���û��´��˻��ǲ�С�˻��ǲ¶���
  *�����С�ˣ��´ξͲ�50-100����ֵ��Ҳ����75
  *�����β´��ˣ���ô�´β²��ֵӦ����50-75����ֵ
  *Author: Yukai
  *Date: 27/Jan/2018
  */
  
#include <stdio.h>

int main(void)
{
	int guess = 50;
	char reponse;
	int upper_bound = 100;
	int lower_bound = 0;
	
	printf("���������һ��1-100�����֣��ҽ����в²�\n");
	printf("����Ҳ´����ˣ�������b��ʾ��,�����С�ˣ�������s��ʾ��\n");
	printf("����¶��ˣ�������y\n");
	printf("��Ϸ��ʼ��\n");
	printf("�Ҳ²���%d\n", guess);
	while ((reponse = getchar()) != 'y' )
	{
		if (reponse == 'b')
		{
			upper_bound = guess;
			guess = (upper_bound + lower_bound) / 2;
			printf("�Ҳ���%d\n", guess);
			while ((reponse = getchar()) != '\n')
				continue;
		}
		else if (reponse == 's')
		{
			lower_bound = guess;
			guess = (upper_bound + lower_bound) / 2;
			printf("�Ҳ���%d\n", guess);
			while ((reponse = getchar()) != '\n')
				continue;
		}
		else 
		{
			printf("�Բ�����ֻ��ʶ��b,s����y\n");
			while ((reponse = getchar()) != '\n')
				continue;
		}
	}
	printf("Bingo! �¶��ˣ�");
	
	return 0;
}
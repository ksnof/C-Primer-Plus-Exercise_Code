/**T6
  *�޸ĳ����嵥8.8�е�get_first()�������øú������ض�ȡ�ĵ�һ���ǿհ��ַ�
  *��һ���򵥵ĳ����в��Ըú���
  *Author: Yukai
  *Date: 29/Jan/2018
  */
  
#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
	char ch;
	
	printf("���������ʲô���ҽ����ص�һ���ǿհ��ַ�\n");
	ch = get_first();
	printf("��������������У���һ���ǿհ��ַ�Ϊ%c", ch);
	
	return 0;
}

char get_first(void)
{
	int ch, waste;
	
	do 
	{
		ch = getchar();
	}while (isspace(ch));
		
	while ((waste = getchar()) != '\n' && waste != EOF)
		continue;
	
	return ch;
}
/**T3
  *��дһ������������EOF֮ǰ����������Ϊ�ַ�������ȡ
  *�ó���Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ���
  *�����Сд��ĸ��ֵ�������ģ�����ʹ��ctype.h���к��ʵķ��ຯ��������
  *Author: Yukai
  *Date: 27/Jan/2018
*/

#include <stdio.h>

int main(void)
{
	int A_Count = 0;		//ͳ�ƴ�д��ĸ
	int a_Count = 0;		//ͳ��Сд��ĸ
	int ch;
	
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 90)
			A_Count++;
		else if (ch >= 97 && ch <= 122)
			a_Count++;
	}
	printf("��д��ĸ��%d����Сд��ĸ��%d��", A_Count, a_Count);
	
	return 0;
}
/**T4
  *��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ
  *����ƽ��ÿ�����ʵ���ĸ��
  *���ѿհ׺ͱ���������
  *Author: Yukai
  *Date: 27/Jan/2018
  */
  
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;
	int letter = 0;		//ͳ����ĸ��
	int word = 0;		//ͳ�Ƶ�����
	
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
			letter++;
		else if (isspace(ch))
			word++;
	}
	printf("ƽ��ÿ��������%d����ĸ", letter / (word + 1));

	return 0;
}
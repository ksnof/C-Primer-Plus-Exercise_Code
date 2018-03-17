/**T6
  *修改程序清单8.8中的get_first()函数，让该函数返回读取的第一个非空白字符
  *在一个简单的程序中测试该函数
  *Author: Yukai
  *Date: 29/Jan/2018
  */
  
#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
	char ch;
	
	printf("请随便输入什么，我将返回第一个非空白字符\n");
	ch = get_first();
	printf("在你输入的内容中，第一个非空白字符为%c", ch);
	
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
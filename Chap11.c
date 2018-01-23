/**11.12复习题
  *T9 - s_gets function
  *基于fgets()函数自定义s_gets函数
  *读取整行输入并用空字符代替换行符
  *or读取一部分输入，并丢弃剩余部分
  *author: Yukai
  *date: 23/Jan/2018
*/

#include <stdio.h>
#include <stdlib.h>

/*数组表示法*/
char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val)		//即 ret_val != NULL
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n' )
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

/*指针表示法*/
char * s_gets(char * st, int n)
{
	char * ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\0' && *st != '\n')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

/*测试指针表示法的s_gets函数*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

char * s_gets(char * , int);

int main()
{
    char a[SIZE];
    char * b;

    b = s_gets(a, SIZE);
    printf("a = %p\tb = %p", &a, &b);
    return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (*st != '\0' && *st != '\n')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}

/**T10
  *编写strlen()函数
  *接收一个指向字符串的指针作为参数，并返回该字符串的长度
  *author: Yukai
  *date: 23/Jan/2018
  */

#include <stdio.h>
#include <string.h>

int strlen (const char * str)
{
	int count = 0;		//用于返回字符串长度

	while (*str++)
		count++;
	return count;
}

/**T11
  *改写自定义的s_gets函数，用strchr()函数代替while循环查找换行符
  *author: Yukai
  *date: 23/Jan/2018
  */

#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * a;		//用来接收返回的换行符指针

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		a = strchr(st, '\n')
		if (a)
			*a = '\0'
		else
			while (getchar() != '\n')
				continue;
	}
}

/**T12
  *设计一个函数
  *接收一个指向字符串的指针，返回指向该字符串第一个空格字符的指针
  *如果未找到空格字符，则返回空指针
  *author: Yukai
  *date: 23/Jan/2018
*/

#include <stdio.h>

char * find_blank(const char * str)
{
	char * find;		//用来接收返回的空格字符指针

	while (*str != '\0')
	{
		if (*str == ' ')
		{
			find = str;
			break;
		}
		else
			find = NULL;
		str++;
	}
	return find;
}




12334



















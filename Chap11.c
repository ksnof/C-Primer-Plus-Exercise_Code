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


/**T1
  *设计一个程序，统计在读到文件结尾（EOF）之前读取的字符数
  *Author：Yukai
  *Date: 27/Jan/2018
*/

#include <stdio.h>

int main(void)
{
	int count = 0;		//用来统计字符数
	int ch;

	while (ch = getchar() != EOF)
		count++;
	if (count > 1)
		printf("The program has totally fetched %d characters\n", count);
	else
		printf("The program has totally fetched %d character\n", count);
	
	return 0;
}

/**T4
  *编写一个程序，在遇到EOF之前，把输入作为字符流读取
  *报告平均每个单词的字母数
  *不把空白和标点计算在内
  *Author: Yukai
  *Date: 27/Jan/2018
  */
  
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;
	int letter = 0;		//统计字母数
	int word = 0;		//统计单词数
	
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
			letter++;
		else if (isspace(ch))
			word++;
	}
	printf("平均每个单词有%d个字母", letter / (word + 1));

	return 0;
}
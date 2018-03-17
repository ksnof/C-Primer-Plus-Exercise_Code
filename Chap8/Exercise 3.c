/**T3
  *编写一个程序，在遇到EOF之前，把输入作为字符流来读取
  *该程序要报告输入中的大写字母和小写字母的个数
  *假设大小写字母数值是连续的，或者使用ctype.h库中合适的分类函数更方便
  *Author: Yukai
  *Date: 27/Jan/2018
*/

#include <stdio.h>

int main(void)
{
	int A_Count = 0;		//统计大写字母
	int a_Count = 0;		//统计小写字母
	int ch;
	
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 90)
			A_Count++;
		else if (ch >= 97 && ch <= 122)
			a_Count++;
	}
	printf("大写字母有%d个，小写字母有%d个", A_Count, a_Count);
	
	return 0;
}
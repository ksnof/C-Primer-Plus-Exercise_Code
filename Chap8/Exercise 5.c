/**T5
  *修改程序清单8.4的猜数字游戏
  *使用二分查找策略
  *例如：程序最初猜50，询问用户猜大了还是猜小了还是猜对了
  *如果猜小了，下次就猜50-100的中值，也就是75
  *如果这次猜大了，那么下次猜测的值应该是50-75的中值
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
	
	printf("请心里想好一个1-100的数字，我将进行猜测\n");
	printf("如果我猜大了了，请输入b提示我,如果猜小了，请输入s提示我\n");
	printf("如果猜对了，请输入y\n");
	printf("游戏开始！\n");
	printf("我猜测是%d\n", guess);
	while ((reponse = getchar()) != 'y' )
	{
		if (reponse == 'b')
		{
			upper_bound = guess;
			guess = (upper_bound + lower_bound) / 2;
			printf("我猜是%d\n", guess);
			while ((reponse = getchar()) != '\n')
				continue;
		}
		else if (reponse == 's')
		{
			lower_bound = guess;
			guess = (upper_bound + lower_bound) / 2;
			printf("我猜是%d\n", guess);
			while ((reponse = getchar()) != '\n')
				continue;
		}
		else 
		{
			printf("对不起我只能识别不b,s或者y\n");
			while ((reponse = getchar()) != '\n')
				continue;
		}
	}
	printf("Bingo! 猜对了！");
	
	return 0;
}
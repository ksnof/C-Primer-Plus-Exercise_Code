/**T8
  *编写一个程序，显示一个提供加法、减法、乘法、除法的菜单
  *获得用户的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作
  *程序只接受菜单提供的选项，
  *使用float类型变量存储用户输入的数字
  *如果用户输入失败，允许再次输入
  *除法运算时，如果用户输入0作为第二个数（除数）， 程序应提示重新输入
  *Author: Yukai
  *Date: 29/Jan/2018
  */
  
#include <stdio.h>

char get_choice(void);
char get_first(void);
float get_number(void);
void add(float, float);
void sub(float, float);
void multi(float, float);
void div(float, float);

int main(void)
{
	char choice;
	float num1, num2;
	
	while ((choice = get_choice()) != 'q')
	{
		printf("Enter first number:");
		num1 = get_number();
		printf("Enter second number:");
		num2 = get_number();
		switch (choice)
		{
			case 'a': add(num1, num2);
				break;
			case 's': sub(num1, num2);
				break;
			case 'm': multi(num1, num2);
				break;
			case 'd': div(num1, num2);
				break;
			default: printf("Program error!\n");
				break;
		}
	}
	printf("Bye.\n");
	
	return 0;
}

char get_choice(void)
{
	int ch;
	
	printf("Enter the operation of your choice:\n");
	printf("a. add       s.subtract\n");
	printf("m. multiply  d. divide\n");
	printf("q. quit\n");
	
	ch = get_first();
	
	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q' )
	{
		printf("Please respond with a, s, m, q!\n");
		ch = get_first();
	}
	
	return ch;	
}

char get_first(void)
{
	int ch;
	
	fflush(stdin);							//清空缓冲区里的换行符，避免麻烦
	ch = getchar();
	while (getchar() != '\n')
		continue;
	
	return ch;
}

float get_number(void)
{
	float num;
	char ch;
	
	while (scanf("%f", &num) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);					//处理错误输入
		printf(" is not a number, such as 2.5, -1.78E8, or 3:");
	}
	
	return num;
}

void add(float num1, float num2)
{
	float result;
	
	result = num1 + num2;
	printf("%.2f + %.2f = %.2f\n", num1, num2, result);
}

void sub(float num1, float num2)
{
	float result;
	
	result = num1 - num2;
	printf("%.2f - %.2f = %.2f\n", num1, num2, result);
}

void multi(float num1, float num2)
{
	float result;
	
	result = num1 * num2;
	printf("%.2f * %.2f = %.2f\n", num1, num2, result);
}

void div(float num1, float num2)
{
	float result;
	
	while (num2 == 0)
	{
		printf("Enter a number other than 0:");
		num2 = get_number();
	}
	result = num1 / num2;
	printf("%.2f / %.2f = %.2f\n", num1, num2, result);
}




























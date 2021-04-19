#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int test_flag = 0;

void menu()
{
	printf("*********************************\n");
	printf("*** 1.开始游戏  2.结束游戏*******\n");
	printf("*********************************\n");
}

void game()
{
	int guss,ret,guss_flag = 0;
	scanf_s("%d", &guss);
	rand();
	ret = rand() % 100 + 1;
	while (!guss_flag)
	{
		if (guss < ret)
		{
			printf("猜小了\n");
			printf("请输入猜的数<:");
			scanf_s("%d", &guss);
		}
		else if (guss > ret)
		{
			printf("%猜大了\n");
			printf("请输入猜的数<:");
			scanf_s("%d", &guss);
		}
		else
		{
			printf("%猜对了\n");
			guss_flag = 1;
		}
	}
}

void test()
{
	int a;
	scanf_s("%d", &a);
	switch(a)
	{
		case 1:
			printf("请输入猜的数<:"); 
			game();
			break;
		case 2:
			test_flag = 1; 
			break;
		default:
			printf("输入错误！！！\n");
			break;
	}

}

int main()
{
	int i;
	srand((unsigned int)time(NULL));
	while (!test_flag)
	{
		menu();
		test();
	}
	return 0;
}
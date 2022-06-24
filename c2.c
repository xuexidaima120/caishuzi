//#include <stdio.h>
//void test()
//{
//	static int  i = 0;
//	i++;
//	printf("%d\n", i);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		
//			count++;	
//		if (i / 10 == 9)
//			count++;
//		
//		
//	}
//	
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;	
//		if (i / 10 == 9)
//			count++;	
//	}
//	
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i= 1; i <= 100;i++) 
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}
//打印乘法口诀表


//int main()
//{
//	int i = 0;
//	//确认打印9行
//	for (i = 1; i <= 9; i++) {
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
//电脑会生成一个随机数，猜数字
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>

#include <stdio.h>
void menu()
{
	printf("***********************************\n");
	printf("****     1.play     0.exit     ****\n");
	printf("***********************************\n");
}
//RAND_MAX-32767
void game()
{
	
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;
	//time_t time(time_t *timer)
	//srand((unsigned int)time(NULL));
	//时间戳：当前计算机的时间-计算机的起始时间(1970.1.1,0:0:0)=(xxxx)秒
    ret = rand()%100+1;//生成1-100之间的随机数
	//2.猜数字
	
	//printf("%d\n", ret);//打印出随机数
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");

		}
	} while (input);
	return 0;
	
}
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
//��ӡ�˷��ھ���


//int main()
//{
//	int i = 0;
//	//ȷ�ϴ�ӡ9��
//	for (i = 1; i <= 9; i++) {
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ
//���Ի�����һ���������������
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
	
	//1.����һ�������
	int ret = 0;
	int guess = 0;
	//time_t time(time_t *timer)
	//srand((unsigned int)time(NULL));
	//ʱ�������ǰ�������ʱ��-���������ʼʱ��(1970.1.1,0:0:0)=(xxxx)��
    ret = rand()%100+1;//����1-100֮��������
	//2.������
	
	//printf("%d\n", ret);//��ӡ�������
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���");
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
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");

		}
	} while (input);
	return 0;
	
}
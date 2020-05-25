//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
#include<stdio.h>
#include<Windows.h>
void Juge()
{
	int a = 1;
	for (; a <= 5; a++)
	{
		int b = 1;
		for (; b <= 5; b++)
		{
			int c = 1;
			for (; c <= 5; c++)
			{
				int d = 1;
				for (; d <= 5; d++)
				{
					int e = 1;
					for (; e <= 5; e++)
					{
						printf("%d", a);
					}
				}
			}
		}
	}
}
int main()
{
	Yanghui();
	system("pause");

}
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
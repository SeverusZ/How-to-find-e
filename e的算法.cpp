
#include <iostream>
#include <iomanip>	//����ͷ�ļ���ͷ�ļ��а����ó�������Ҫ�ĺ���
using namespace std;

int f(int x)	//int��ʾ���������Ҳ�����Ϊ���롣�������뺯��f(x)�������·�������ж���
{
	int S = 1;
	int i;
	if (x == 0)	//==�ǵ��ںţ�=�Ǹ�ֵ��
		return 1;	//return��ʾ���ؽ��
	else
	{
		for (i = 1; i <= x; i++)	// for��ʾ�ڸ�������ѭ����i++ ��ʾi��ֵ����+1
			S *= i;		//��ʾS=S��i
	}
	return S;	//����S��ֵ
}	//���庯��f(x)Ϊ ��x�Ľ׳�x!

int main()	//��������������ʾ����Ӵ˴���ʼ����
{
	cout << "���룺";		//��ʾ �����룺�� cout��Ϊ ��ʾ
	int i = 1, n;		//�����i��ֵ��Ϊ�˳�ʼ������������i��ֵ����������ֵ
	double E = 0;     //double��ʾ˫���ȸ������ͣ���߾���  
	cin >> n;	//�����������ֵ����n
	if (n < 0)
	{
		cout << "ERROR" << endl;	//endl��ʾ����
		system("pause");	//������ͣ��������������н������Զ��ر�	
		return 0;	//����ֵ0����ʾ���������رգ���ֹռ���ڴ�
	}
	else if (n >= 34)
	{
		cout << "����������ֹ������������� :-)" << endl;
		system("pause");
			return 0;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			E += 1.0 / f (i);	//��ʾA=A+1/f(i)��1.0�Ǹ�����������ʹ���ΪС����������
		}
		cout << setiosflags(ios::fixed);	//�̶�С��λ������ֹ���� С��ĩβΪ0����ʾ �����
		cout << setprecision(51) << "e��" << E << endl;	//setprecision(51)��ʾ��ʾ51λС��
		system("pause");		
		return 0;	
	}
}


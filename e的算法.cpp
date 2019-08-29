
#include <iostream>
#include <iomanip>	//声明头文件，头文件中包含该程序所需要的函数
using namespace std;

int f(int x)	//int表示定义变量，也可理解为输入。这里输入函数f(x)，并在下方对其进行定义
{
	int S = 1;
	int i;
	if (x == 0)	//==是等于号，=是赋值号
		return 1;	//return表示返回结果
	else
	{
		for (i = 1; i <= x; i++)	// for表示在该条件下循环，i++ 表示i的值连续+1
			S *= i;		//表示S=S×i
	}
	return S;	//返回S的值
}	//定义函数f(x)为 求x的阶乘x!

int main()	//声明主函数，表示程序从此处开始运行
{
	cout << "输入：";		//显示 “输入：” cout意为 显示
	int i = 1, n;		//这里给i赋值是为了初始化变量，赋予i的值可以是任意值
	double E = 0;     //double表示双精度浮点类型，提高精度  
	cin >> n;	//将键盘输入的值赋予n
	if (n < 0)
	{
		cout << "ERROR" << endl;	//endl表示换行
		system("pause");	//程序暂停，避免程序在运行结束后自动关闭	
		return 0;	//返回值0，表示程序正常关闭，防止占用内存
	}
	else if (n >= 34)
	{
		cout << "您输入的数字过大，请重新输入 :-)" << endl;
		system("pause");
			return 0;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			E += 1.0 / f (i);	//表示A=A+1/f(i)。1.0是浮点数，可以使结果为小数而非整数
		}
		cout << setiosflags(ios::fixed);	//固定小数位数，防止出现 小数末尾为0则不显示 的情况
		cout << setprecision(51) << "e≈" << E << endl;	//setprecision(51)表示显示51位小数
		system("pause");		
		return 0;	
	}
}


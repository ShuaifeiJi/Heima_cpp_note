/*
引用做函数参数
	作用：函数传参时，可以利用引用的技术让形参修饰实参
	优点：可以简化指针修改实参
*/

#include <iostream>
using namespace std;

// 交换函数

// 1、值传递
void mySwap01(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a = " << a << endl;
	cout << "swap02 b = " << b << endl;
}

// 2、地址传递
void mySwap02(int *a, int *b) // *a  *b是指针
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 3、引用传递
void mySwap03(int &a, int &b) //这是引用，相当于形参做了实参的别名
{
	int temp = a;
	a = b;
	b = temp;
}


int main91() {
	int a = 10;
	int b = 20;
	
	// 值传递，形参不会修饰实参
	mySwap01(a, b);
	cout << "值传递a = " << a << endl;
	cout << "值传递b = " << b << "\n";

	// 地址传递，形参会修饰实参
	mySwap02(&a, &b);
	cout << "地址传递a = " << a << endl;
	cout << "地址传递b = " << b << endl;

	// 引用传递，形参会修饰实参
	mySwap03(a, b);
	cout << "引用传递" << a << endl;
	cout << "引用传递" <<b << endl;

	system("pause");
	return 0;
}
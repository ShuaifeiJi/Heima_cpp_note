/*
引用注意事项：
	1、引用必须初始化
		例如：int &b; // 错误的
	2、引用在初始化后，不可以改变
		例如： int &b = a;则不能再让b是变量c的别名了；
*/

#include <iostream>
using namespace std;

int main90() {

	int a = 10;

	// 1、引用必须初始化
	// int &b; 报错：必须初始化引用
	int &b = a;

	cout << "b的地址： " << &b << endl;
	cout << "a的地址： " << &a << endl; // 地址相同，相当于b和a是这块地址的不同名字

	// 2、引用在初始化后，不可以改变
	int c = 20;

	b = c; // 这是赋值操作，而不是更改引用
	cout << "b的值： " << b << endl;
	cout << "c的值： " << c << endl;

	cout << "b的地址： " << &b << endl;
	cout << "c的地址： " << &c << endl; // 地址不同

	system("pause");
	return 0;

}
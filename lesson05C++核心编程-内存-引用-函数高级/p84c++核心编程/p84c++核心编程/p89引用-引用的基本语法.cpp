/*
引用的作用：	给变量起别名

引用的语法：	数据类型 &别名 = 原名

注意：别名和原名 操作的是同一块内存
（脱裤子放屁）
*/

#include <iostream>
using namespace std;

int main89()
{
	// 引用的基本语法
	// 数据类型 &别名 = 原名

	int a = 10;
	int &b = a;

	// ab值相同
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// ab地址相同
	cout << "a address: " << &a << endl;
	cout << "b address: " << &b << endl;

	// ab改一个则都改
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a address " << &a << endl;
	cout << "b address " << &b << endl;

	system("pause");
	return 0;
}

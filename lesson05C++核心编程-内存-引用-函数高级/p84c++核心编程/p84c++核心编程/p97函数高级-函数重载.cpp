/*
函数重载概述：
作用：函数名可以相同，提高复用性
*/

/*
函数重载满足的条件：
	同一作用域下（现阶段写的都是全局函数）
	函数名称相同
	函数参数类型不同， 或者 个数不同 或者 顺序不同

	注意： 函数的返回值不可以作为函数重载的条件
*/

#include <iostream>
using namespace std;

// 函数重载
// 可以让函数名相同，提高复用性


// 函数重载需满足的条件（必要条件，3个都要满足）
// 1、同一个作用域下
// 2、函数名称相同
// 3、函数参数类型不同，或者个数不同，或者顺序不同
void func05() 
{
	cout << "func05的调用" << endl;
}

void func05(int a) //参数个数不同
{
	cout << "func05的调用!!! " << a << endl;
}

void func05(double a) // 参数类型不同
{
	cout << "func05的调用---" << a << endl;
}

void func05(int a, double b)
{
	cout << "func05的调用***" << a << "  "<< b << endl;
}

void func05(double b, int a)
{
	cout << "func05的调用###" << a << "  "<< b << endl;
}

// 注意事项：函数的返回值不可以作为函数重载的条件
// (即无法重载仅按返回值区分的函数)（因为有歧义，二义性）
//int func05(double b, int a) // 返回值不可以作为函数重载的条件
//{
//	cout << "func05的调用###" << a << "  " << b << endl;
//	return 0; 
//}

int main97() {

	func05(); // 这个调用第一个

	func05(3); // 这个调用第二个
	// 即根据不同的参数，调用不同的函数

	func05(8.88);

	func05(3, 3.33);

	func05(6.66, 6);

	system("pause");
	return 0;
}

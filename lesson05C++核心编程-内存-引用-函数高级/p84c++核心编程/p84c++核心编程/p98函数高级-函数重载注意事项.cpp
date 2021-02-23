#include <iostream>
using namespace std;

// 函数重载的注意事项
// 1、引用作为重载的条件
void func06(int &a) // int &a = 10是不合法的，而const int &a = 10是合法的（相当于编译器创建了一个临时的temp=10）
{
	cout << "func06(int &a)调用" << endl;
}

void func06(const int &a)  // const int &a 和int &a属于类型不同
{
	cout << "func(const int &a)调用" << endl;
}

// 2、函数重载碰到默认参数
void func07(int a, int b = 10) 
{
	cout << "func07的调用!!!" << endl;
}

void func07(int a)
{
	cout << "func07的调用***" << endl;
}

int main() 
{
	int a = 10;
	func06(a); // 因为a是变量，可读可写，所以调用了第一个func06

	func06(10); // 因为第二个合法，所以调用的是第二个func06
	
	//func07(10); 因为有二义性，报错，对重载函数的调用不明确

	func07(22, 88);

	system("pause");
	return 0;
}

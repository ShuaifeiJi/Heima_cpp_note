/*
c++对象模型和this指针

	成员变量 和 成员函数 是 分开存储的
		在c++中，类的成员变量和成员函数分开存储
		只有非静态成员变量才属于类的对象上
*/

#include <iostream>
using namespace std;

class Person14 
{

};

class Person141 
{
	int m_A; // 非静态成员变量
	//int m_B;

	static int m_C; // 静态成员变量， 类内声明，类外初始化

	// 非静态成员变量， 属于类的对象上
	// 静态成员变量，  不属于类的对象上
	// 非静态成员函数，不属于类的对象上
	// 静态成员函数，  不属于类的对象上


	void func() {} // 非静态成员函数

	static void func2() {} // 静态成员函数
};

int Person141::m_C = 100; // 静态成员变量，类内声明，类外初始化

void test141() 
{
	Person14 p;

	// 空对象占用的内存空间为：1 个字节
	// c++会为每个空对象分配一个内存空间，是为了区分空对象占内存的位置
	// 每个空对象也应该有一个独一无二的内存地址
	cout << "空类内存占用 size of p = " << sizeof(p) << endl;
}

void test142() 
{
	Person141 p;
	cout << "Person141类的 内存占用size of p = " << sizeof(p) << endl;
	// 一个int 非静态成员变量时，内存占用4个字节
	// 2个int	非静态成员变量时，内存占用8个字节
	// （是什么类型，分配多少内存，  即非静态成员变量，属于类的对象上）


}

int main114() 
{
	test141();

	test142();

	system("pause");
	return 0;
}

/*
总结：
只有非静态成员函数属于类的对象上

考试题/面试：
	空类sizeof是多大？  答案：1个字节
*/

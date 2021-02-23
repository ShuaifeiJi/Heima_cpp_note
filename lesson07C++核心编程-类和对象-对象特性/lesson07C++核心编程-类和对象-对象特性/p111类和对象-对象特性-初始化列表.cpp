/*
初始化列表
	作用：
	c++提供了初始化列表语法，用来初始化属性

	1、构造函数可以初始化
	2、初始化列表也能初始化


	语法：
	构造函数():  属性1（值1）, 属性2（值2）,....{}
*/

#include <iostream>
using namespace std;

// 初始化列表
class Person8 
{
public:
	// 传统初始化操作 （即使用构造函数初始化）
	/*Person8(int a, int b, int c) 
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	// 采用初始化列表  初始化属性
	// Person8() : m_A(10), m_B(20), m_C(30) 一种写死的写法
	Person8(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
	{
		cout << "使用初始化列表初始化属性" << endl;
	}

	int m_A;
	int m_B;
	int m_C;
};

void test09() 
{
	//Person8 p(6,7,8);
	
	Person8 p(10, 11, 12);

	cout << "m_A: " << p.m_A << endl;
	cout << "m_B: " << p.m_B << endl;
	cout << "m_C: " << p.m_C << endl;
}

int main111() 
{
	test09();

	system("pause");
	return 0;
}
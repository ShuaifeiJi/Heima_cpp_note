/*
静态成员
	静态成员 就是 在成员变量和成员函数前 加上关键字static， 称为静态成员

静态成员分为：
	静态成员变量：
		所有对象共享同一份数据
		在编译阶段分配内存
		类内声明，类外初始化

	静态成员函数：
		所有对象共享一个函数；
		静态成员函数只能访问静态成员变量；
*/


#include <iostream>
using namespace std;

// 静态成员函数
// 所有对象共享同一个函数
// 静态成员函数只能访问静态成员变量

class Person13 
{
public: // public作用域
	// 静态成员函数
	// (就是在成员函数前 加上static关键字)
	static void func() 
	{
		m_A = 100; // 静态成员函数可以访问静态成员变量

		//m_B = 100; // 报错，静态成员函数不可以访问非静态成员变量
		/*因为调用这个static void func的时候，
			函数体内部不知道改变的是哪个对象的m_B变量（例如通过类名::访问）
			所以报错
			（即无法区分到底是那个对象的m_B属性）
		*/

		cout << "static void func调用" << endl;
	}

	// 静态成员变量
	static int m_A; //类内声明，类外初始化

	int m_B; // 非静态成员变量

// 静态成员函数也是有访问权限的
private:

	static void func2() // 这个函数在 类外无法访问 
	{
		cout << "static void func2" << endl;
	}

};


int Person13::m_A = 0; // 类内声明，类外初始化

// 静态成员函数的 两种访问方式
void test13() 
{
	// 1、通过对象访问 （创建对象，然后访问）
	Person13 p;
	p.func();

	// 2、通过类名访问
	Person13::func(); // person作用域下的func函数

	//Person13::func2(); // 无权限访问 private
	// 类外 访问不到 私有静态成员函数
}


int main113() 
{
	test13();
	system("pause");
	return 0;
}
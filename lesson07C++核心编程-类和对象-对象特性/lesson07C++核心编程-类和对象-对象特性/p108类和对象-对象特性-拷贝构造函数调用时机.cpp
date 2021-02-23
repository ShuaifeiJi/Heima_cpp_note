/*
拷贝构造函数调用时机

拷贝函数调用时机通常有三种情况：
	1、使用 一个已经创建完毕的对象 来初始化一个新对象
	2、值传递的方式给函数参数传值
	3、以值方式返回局部对象
*/

#include <iostream>
using namespace std;

class Person3 
{
public:
	Person3() 
	{
		cout << "Person3默认构造函数的调用" << endl;
	}

	// 有参构造
	Person3(int age) 
	{
		cout << "Person3有参构造函数的调用" << endl;
		m_Age = age;
	}

	// 拷贝构造
	Person3(const Person3 & p) 
	{
		cout << "Person3拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
	}


	~Person3() 
	{
		cout << "Person3析构函数的调用" << endl;
	}

	int m_Age = 0;
};

// 1、使用一个已经创建完毕的对象来初始化一个新对象
void test03() 
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2的年龄为：" << p2.m_Age << endl;
}

// 2、值传递的方式给函数参数传值

void doWork(Person3 p) 
{
	cout << "doWork的调用  " << p.m_Age << endl;
	p.m_Age = 1000;
	cout << "doWork中拷贝构造的年龄 形参:" << p.m_Age << endl;
}

void test04()
{
	Person3 p; // 调用默认构造
	doWork(p); 
	// doWork函数使用了值传递的方式，  值传递的本质是拷贝一个临时函数
	// 本质是调用拷贝构造函数
	// 即实参 传递给 形参 的时候，会调用拷贝构造函数
	// 如果把拷贝函数 整个注释掉，就只调用了析构函数，不知道为啥？？

	cout << "外边的年龄 实参：" << p.m_Age << endl;
	// 把拷贝函数整个注释掉， 结果仍相同
}

// 值方式返回局部对象
// 也会调用 拷贝构造函数，
Person3 doWork2() 
{
	Person3 p1;
	cout << (int)&p1 << endl; // 打印对象的地址
	return p1; // 使用 值方式返回， 返回的时候根据p1创建新的对象
}

void test05()
{
	Person3 p = doWork2(); // 返回了一个对象p,  赋值给Person3 p
	cout << (int)&p << endl; // 打印对象的地址
	// Int是转换为整形
	// &p是取16进制 地址
}

int main108() {

	//test03();

	//test04();

	test05();

	system("pause");
	return 0;
}
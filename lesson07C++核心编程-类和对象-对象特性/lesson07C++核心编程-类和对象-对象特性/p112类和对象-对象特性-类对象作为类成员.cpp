/*
类对象 作为 类成员

c++中类的成员可以是类的对象，我们称该成员为 对象成员

其构造顺序和析构顺序？
*/

#include <iostream>
using namespace std;
#include <string>

// 类对象作为类成员

// 手机类
class Phone 
{
public:
	Phone(string pName) 
	{
		m_PName = pName;
		cout << "Phone有参构造函数的调用  初始化 机类" << endl;
	}

	~Phone() 
	{
		cout << "Phone析构函数的调用" << endl;
	}


	// 品牌
	string m_PName;
};


// 人类
class Person10 
{
public:
	Person10(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		// Phone m_Phone = pName;   相当于这个 隐式转换法
		cout << "Person10有参构造函数的调用。  初始化人类" << endl;
	}

	~Person10() 
	{
		cout << "Person10析构函数的调用" << endl;
	}


	// 姓名
	string m_Name;

	// 手机
	Phone m_Phone;
};

// 当其他类的对象作为本类的成员，构造时候先构造类对象，再构造自身
// (想象成 组装汽车，先装发动机，再装汽车)

// 析构时候，先析构自身，再析构类对象
// （想象成拆汽车，先拆汽车，再拆发动机）
void test10() 
{
	Person10 p("张三", "苹果11");
	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main112() 
{
	test10();

	system("pause");
	return 0;
}
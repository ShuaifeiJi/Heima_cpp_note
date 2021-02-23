/*
深浅拷贝是面试经典问题，也是常见的一个坑

浅拷贝： 简单的赋值拷贝操作

深拷贝： 在堆区重新申请空间，进行拷贝操作
*/

#include <iostream>
using namespace std;

// 深拷贝与浅拷贝

class Person7
{
public:
	Person7() 
	{
		cout << "Person7的默认构造函数调用" << endl;
	}

	Person7(int age, int height) 
	{
		m_Age = age;
		m_Height = new int(height); // 把数据放在堆区， new int()返回的是一个指针
		// 堆区的数据由程序员手动开辟，手动释放
		// 即需要在这个对象 被销毁的时候， 释放堆区数据，即在~Person7析构函数中
		
		cout << "Person7的有参构造函数的调用" << endl;
	}
	
	// 自己实现 拷贝构造函数，解决浅拷贝带来的问题
	Person7(const Person7 & p)
	{
		m_Age = p.m_Age;
		// m_Height = p.m_Height; 编译器默认实现就是这行代码，这行代码会报错，重复释放 堆区内存
		
		m_Height = new int(*p.m_Height); // 深拷贝， 括号里是解引用的数据
										 // 把数据解引用，再在堆区 开辟一块内存空间 
		cout << "Person7的拷贝构造函数的调用" << endl;
	}

	~Person7() 
	{
		// 析构代码，将堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height; //  delete关键字，删除堆区数据的指针
			m_Height = NULL; //  置空，防止野指针出现
		}

		cout << "Person7的析构函数的调用" << endl;
	}

	int m_Age; // 年龄
	int *m_Height; //身高的指针，因为准备把身高的数据开辟到堆区

};

void test08() 
{
	Person7 p1(18, 180); // 调用有参构造，实例化顺带初始化
	cout << "p1的年龄为：" << p1.m_Age << endl;
	cout << "p1的身高为：" << *p1.m_Height << endl;// 指针解引用

	Person7 p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << endl; // 当用户没有提供拷贝构造的时候
												// 编译器会提供 一个 前拷贝操作
												// 类似于把age传递输出
	cout << "p2的身高为：" << *p2.m_Height << endl; // 指针解引用
}

int main100() 
{
	test08();

	system("pause");
	return 0;
}

/*
Person p2(p1);
如果使用编译器提供的拷贝构造函数，会做浅拷贝操作
（浅拷贝就是将 p1的数据 逐字节拷贝到p2）


先进后出，所以p2先被释放

假如int * m_Height指向的内存是0x0011， 0x0011存放的数据是180

那么p2执行析构函数的时候，0x0011这块内存 被释放一次

当p1执行同样的析构函数的时候，0x0011再释放一次， 会报错，重复释放 堆区数据
（非法操作）

【浅拷贝带来的问题是堆区内存的重复释放】
*/

/*
浅拷贝产生的问题要利用深拷贝 解决

自己写一个拷贝构造函数，重新在堆区申请一块内存 0x0022存放数据180

则p1指向堆区0x0011,  p2指向堆区0x0022
*/

//总结：
//		如果属性是在堆区开辟的，一定要自己提供拷贝构造函数
//		防止浅拷贝带来的问题
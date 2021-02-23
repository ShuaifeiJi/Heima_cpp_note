/*
堆区数据的开辟：
	new
堆区数据的释放：
	delete
*/

#include <iostream>
using namespace std;

// 1、new的基本语法
int * func3() 
{
	// 在堆区创建整形数据
	// new返回的是该数据类型的指针
	int *p = new int(10);
	return p;
}

void test01() 
{
	int *p = func3();
	cout << "new开辟的堆区数据的地址是：" << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	// 堆区的数据由程序员管理开辟，程序员管理释放
	// 如果想释放堆区的数据，利用关键字delete
	system("pause");

	delete p;
	//cout << "释放后：" << *p << endl; // 报错，因为内存已经被释放，再次访问就是非法操作
}

// 2、在堆区利用new开辟数组
void test02()
{
	// 在堆区 创建一个10个整形元素 构成的数组
	int * arr = new int[10]; // 10代表有10个元素
	//赋值
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100; // 给10个元素赋值，  100到109
	}

	// 打印
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// 释放堆区数组
	// 释放数组的时候，要加[]才可以
	delete[] arr;

}


int main88() 
{
	test01();
	test02();
	system("pause");
	return 0;
}
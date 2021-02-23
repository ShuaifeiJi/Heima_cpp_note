/*
内存四区——堆区：
	由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
	在c++中主要利用new在堆区开辟内存
*/

/*
堆区数据的释放：
	堆区数据由程序员手动开辟、手动释放，释放利用操作符delete
*/

#include <iostream>
using namespace std;

int * func2()
{
	// 利用new关键字，可以将数据开辟到堆区， 返回堆区数据地址，需要用指针接收
	// 指针本质也是局部变量，放在栈上，指针指向的数据是放在堆区
	int * p = new int(10);
	return p;
}

int main87() 
{
	// 在堆区开辟数据

	int * p = func2();

	cout << *p << endl; // 解引用
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}

// 利用new关键字，可以将数据开辟到堆区，返回这个数据的地址，需要用指针接收
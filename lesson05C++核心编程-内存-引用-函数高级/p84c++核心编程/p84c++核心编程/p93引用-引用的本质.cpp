/*
引用：
	引用的本质是一个指针常量

	引用一旦初始化后，就不可以发生改变，
	因为是指针常量 int * const ref = &a

	用的时候，就把ref当成a的别名就行了，
	不要想太多

	（题上考引用是什么东西，再说是指针常量）
*/

#include <iostream>
using namespace std;

// 发现是引用，编译器会将其转换为int* const ref = &a;
void func(int& ref) 
{
	ref = 100; // ref是引用，转换为*ref = 100;
}

int main93() 
{
	int a = 10;

	// 自动转换为int * const ref = &a;
	// 指针常量是指针指向不可改，也说明为什么引用不可更改
	int& ref = a;
	ref = 20; // 内部发现ref是引用，自动帮我们转换为*ref = 20;

	cout << "a:   " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);
	cout << "func后的a: " << a << endl;

	system("pause");
	return 0;
}
// 结论：c++推荐用 引用技术，因为语法方便
//		引用的本质是指针常量，但是所有指针操作 编译器都帮我们做了






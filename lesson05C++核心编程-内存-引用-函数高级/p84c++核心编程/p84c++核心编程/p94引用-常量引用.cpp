/*
常量引用
	作用： 主要用来修饰形参，防止误操作
	在函数形参列表中，可以加const修饰形参，防止形参改变实参
*/

#include <iostream>
using namespace std;

// 打印数据函数
void showValue(int & val) // 引用，相当于形参val是实参的别名
{
	val = 1000;
	cout << "val = " << val << endl; // 打印别名指向的内存空间
}

// 加上const后，就不能在函数中修改
// 比如： 只想打印，不想修改实参，防止误操作，就这样写
void showValue02(const int & val)
{
	// val = 2000; // 报错，左值不可修改
	cout << "val = " << val << endl;
}

int main94() {

	// 常量引用
	// 使用场景： 用来修饰形参，防止误操作

	// int &ref = 10;错误，因为引用必须引用内存上合法的内存空间，比如栈或堆上的数据

	const int & ref = 10; // 正确，编译器将代码修改为：int temp = 10; const int & ref = temp;
	// 此时，只能用别名ref操作这块内存空间
	// 加上const后，限定为只读状态，不可以修改
	
	// ref = 20; 错误，因为只读，不可修改

	int a = 100;
	showValue(a);
	cout << "实参a = " << a << endl;

	showValue02(a);

	system("pause");
	return 0;
}
/*作用：引用是可以作为引用的返回值存在的
注意：不要返回局部变量引用
用法：函数调用作为左值，等号的左边是左值
*/
#include <iostream>
using namespace std;

// 引用作为函数的返回值
// 1、不要返回局部变量的引用
int& test01() // 以引用的方式返回
{
	int a = 10; // 局部变量存放在四区中的 栈区
	// 栈区的特点，在test01()执行完之后，栈区就释放掉了
	return a;
}


// 2、函数的调用可以作为左值
int& test02()
{
	static int a = 10; 
	// static修饰的局部变量，静态变量，放在全局区
	// 全局区上的数据在整个程序执行完后由系统释放
	return a;
}

int main92() 
{
	// 不要返回局部变量的引用，不合法
	// 因为第二次就释放了
	//int &ref = test01();
	//cout << "ref = " << ref << endl; // 第一次结果正确，因为编译器做了保留
	//cout << "ref = " << ref << endl; // 第二次结果错误，因为a的内存已经释放

	int &ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;
	cout << test02() << endl;
	cout << "左值ref2 = " << ref2 << endl;
	cout << "左值ref2 = " << ref2 << endl;
	// 因为test02()返回的是a的一个引用
	// a的引用 = 1000，则a = 1000； (这的语法规则与下边的变量引用不太相同)
	// 因为ref2是a的别名，所以ref2也 = 1000；

	int b = 222;
	cout << b << endl;
	int &c = b;
	c = 2222;
	cout << b << endl;


	system("pause");
	return 0;
}
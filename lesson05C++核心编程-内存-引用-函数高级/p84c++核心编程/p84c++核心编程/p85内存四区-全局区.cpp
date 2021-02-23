#include <iostream>
using namespace std;

// 全局变量
int g_a = 10;
int g_b = 20;

// const修饰的全局变量
const int c_g_a = 30;
const int c_g_b = 40;

int main85() 
{
	//全局区

	//全局变量、静态变量、常量
	// （没有写在函数体中的变量都叫全局变量）


	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl; 
	cout << "局部变量b的地址为：" << (int)&b << endl;
	
	cout << "全局变量g_a的地址为：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (int)&g_b << endl; // 全局变量和局部变量在内存中的不同区域

	// 静态变量(在普通变量前面加static关键字，就属于静态变量了)
	static int s_a = 10;
	static int s_b = 20; 
	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;
	// 静态变量也会放在全局区里边

	// 常量
	// 字符串常量 "hello world"
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;
	
	// const修饰变量
	// const修饰的全局变量、const修饰的局部变量
	// （const修饰的全局变量在全局区）
	// （const修饰的局部变量在局部区）

	cout << "const修饰的全局常量c_g_a的地址为：" << (int)&c_g_a << endl;
	cout << "const修饰的全局常量g_c_b的地址为：" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "const修饰的局部常量c_l_a的地址为：" << (int)&c_l_a << endl;
	cout << "const修饰的局部变量c_l_b的地址为：" << (int)&c_l_b << endl;

	system("pause");
	return 0;
}

/*
总结：
	在程序运行之前分为全局区和代码区
	代码区特点是共享和只读
	全局区中存放全局变量、静态变量、常量
	常量区中存放const修饰的全局常量 和 字符串常量
*/
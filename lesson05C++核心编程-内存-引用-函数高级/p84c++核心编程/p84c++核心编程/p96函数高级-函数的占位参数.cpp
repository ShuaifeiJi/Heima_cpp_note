/*
c++中形参列表可以有占位参数，用来做占位，调用函数时候必须填补该位置

语法：
	返回值类型 函数名 (数据类型) {}

在现阶段函数的占位参数存在的意义不大，但是后面的课程中会用到该技术
*/

#include <iostream>
using namespace std;

void func05(int a, int)
{
	cout << "this is function a "<< a << endl;
}

// 占位参数可以有默认参数
void func06(int a, int = 10)
{
	cout << "占位参数可以是默认参数" << endl;
}

int main96() 
{

	func05(3, 8888); // 传进来的8888在函数中，现在暂时用不到
	func06(6); // 占位参数可以是默认参数

	system("pause");
	return 0;
}




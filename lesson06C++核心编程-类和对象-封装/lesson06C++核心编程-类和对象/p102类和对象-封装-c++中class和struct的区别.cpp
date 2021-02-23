/*
struct和class的区别：

唯一的区别在于 默认的访问权限不同

struct默认的访问权限是公有 public

class默认的访问权限是私有 private
*/

#include <iostream>
using namespace std;

class C1 
{
	int m_A; // 默认权限是私有
};

struct C2
{
	int m_A; // 默认权限是公共
};

int main102() {
	// struct和class的区别
	// struct 默认权限是 公共 public
	// class  默认权限是 私有 private
	
	C1 c1; //实例化
	//c1.m_A = 100; 报错，不可访问

	C2 c2;
	c2.m_A = 888; // 在struct中，默认的访问权限是公共，因此可以访问
	cout << c2.m_A << endl;





	system("pause");
	return 0;
}
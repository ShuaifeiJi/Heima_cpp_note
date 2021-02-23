/*
友元
（好朋友的意思）

	生活中有客厅（Public），有你的卧室（Private）
	客厅所有来的客人都可以进去，但是你的卧室是私有的，也就是说只有你能进去
	但是呢，你也可以允许你的好闺蜜好基友进去

	在程序里，有些私有属性，也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术

	友元的目的就是让一个函数或者类 访问另一个类中的私有成员

	友元的关键字为friend
*/

/*
友元的三种实现
	全局函数做友元
	类做友元
	成员函数做友元
*/

#include <iostream>
using namespace std;
#include <string>

// Building类
class Building 
{
	// 友元，可以访问Building类中的私有成员
	friend void goodGay(Building * building);
public:
	Building() 
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}// 构造函数
public:
	string m_SittingRoom; // 客厅

private:
	string m_BedRoom; // 卧室
};

void goodGay(Building * building) //指针和引用 都行
{
	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
	// 报错，因为私有属性在类外是访问不到的
	// 在类中加了友元后，就不报错了
}

void test01() 
{
	Building building;
	goodGay(&building); // 传入对象地址
}

int main() 
{
	test01();
	system("pause");
	
	return 0;
}

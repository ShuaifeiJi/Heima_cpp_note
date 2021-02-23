#include <iostream>
using namespace std;
#include <string>

class Building; // 先告诉编译器有这个类

// 类做友元
class GoodGay 
{
public:
	GoodGay(); // 构造函数。在类外实现， 创建了GoodGay的构造函数。

	void visit(); // 参观函数，访问Building中的属性：公共属性、私有属性
	Building * building; // 实例的指针
};

class Building 
{
	// GoodGay类是本类的好朋友，可以访问本类中的私有成员
	friend class GoodGay;
public:
	Building();

public:
	string m_SittingRoom; // 客厅

private:
	string m_BedRoom; // 卧室
};

// 类外写成员函数
Building::Building() 
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

// 类外写成员函数
GoodGay::GoodGay() 
{
	// 创建建筑物对象
	building = new Building; // 在堆区创建一个对象。new什么数据类型，
	// 就返回什么数据类型的指针
	// 即构建Building实例，并返回Building实例的指针
	// 其中构建Building实例的时候，要调用Building::Building(){}构造函数
}

void GoodGay::visit() 
{
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

void test02() 
{
	GoodGay gg;
	gg.visit();
}

int main() 
{
	test02();

	system("pause");
	return 0;
}
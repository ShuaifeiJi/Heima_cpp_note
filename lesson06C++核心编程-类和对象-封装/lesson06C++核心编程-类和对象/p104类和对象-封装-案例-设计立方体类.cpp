/*
练习案例1： 设计立方体类

设计立方体类Cube

求出立方体的面积和体积

分别用全局函数和成员函数判断两个立方体是否相等

（注意：类的属性一般是不公开的，只用对外提供接口 读写就行了）
*/

#include <iostream>
using namespace std;

// 立方体类设计.
// 1、创建立方体类
// 2、设计属性
// 3、设计行为  获取立方体面积和体积
// 4、分别利用全局函数和成员函数判断两个立方体是否相等
class Cube
{
public:
	// 设置长、宽、高
	void setL(int l)
	{
		m_L = l;
	}

	void setW(int w) 
	{
		m_W = w;
	}

	void setH(int h) 
	{
		m_H = h;
	}

	// 获取长、宽、高
	int getL() 
	{
		return m_L;
	}

	int getW() 
	{
		return m_W;
	}

	int getH() 
	{
		return m_H;
	}

	// 计算返回面积
	int calcuteArea() 
	{
		int area = 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
		cout << "面积是：" << area << endl;
		return area;
	}

	// 计算返回体积
	int calcuteVolume() 
	{
		int volume = m_L * m_W * m_H;
		cout << "体积是：" << volume  << endl;
		return volume;
	}

	// 利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c) // 传一个立方体，和现有的对比 
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			cout << "成员函数判断相等" << endl;
			return true;
		}
		else
		{
			cout << "成员函数判断 不相等" << endl;
			return false;
		}
	}

private: // 一般属性都是私有的，然后通过写接口访问
	int m_L;
	int m_W;
	int m_H;

};

// 利用全局函数判断两个立方体是否相等
// （值传递会拷贝数据，影响效率）
bool isSame(Cube &c1, Cube &c2) // 引用的方式，使用原始数据，不需要再拷贝为形参那个变量
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) 
	{
		cout << "全局函数判断相等" << endl;
		return true;
	}
	else
	{
		cout << "全局函数判断  不相等" << endl;
		return false;
	}
}

int main104() {

	Cube c1; // 创建立方体对象

	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << c1.getL() << " "<< c1.getW() << " "  << c1.getH() << endl;

	c1.calcuteArea();
	c1.calcuteVolume();

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	cout << isSame(c1, c2) << endl;

	cout << c2.isSameByClass(c1) << endl;

	system("pause");
	return 0;
}
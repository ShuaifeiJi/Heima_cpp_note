#pragma once
#include <iostream>
using namespace std;
#include "point.h" // 在一个类中用到另一个类，只需要把头文件包含即可

// 设计类的时候，只需要函数的声明
class Circle
{
public:
	// 设置半径
	void setR(int r);

	// 获取半径
	int getR();

	// 设置圆心
	void setCenter(Point center);
	
	// 获取圆心
	Point getCenter();

private:
	// 在类中，可以让另一个类作为本类中的成员
	Point m_Center; // 圆心
	int m_R;

};
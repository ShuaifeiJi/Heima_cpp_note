#pragma once
#include <iostream>
using namespace std;
#include "point.h" // ��һ�������õ���һ���ֻ࣬��Ҫ��ͷ�ļ���������

// ������ʱ��ֻ��Ҫ����������
class Circle
{
public:
	// ���ð뾶
	void setR(int r);

	// ��ȡ�뾶
	int getR();

	// ����Բ��
	void setCenter(Point center);
	
	// ��ȡԲ��
	Point getCenter();

private:
	// �����У���������һ������Ϊ�����еĳ�Ա
	Point m_Center; // Բ��
	int m_R;

};
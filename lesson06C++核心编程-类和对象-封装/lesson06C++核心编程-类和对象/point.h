#pragma once 
// ��ֹͷ�ļ��ظ�����
#include <iostream>
using namespace std;

// �������ʱ��ֻ��Ҫ��Ա����������
class Point
{
public:
	// ����x
	void setX(int x);
	// ��ȡx
	int getX();

	// ����y
	void setY(int y);
	// ��ȡy

	int getY();

private:
	int m_X;
	int m_Y;
};
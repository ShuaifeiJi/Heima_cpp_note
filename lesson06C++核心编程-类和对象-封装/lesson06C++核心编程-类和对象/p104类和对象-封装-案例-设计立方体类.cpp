/*
��ϰ����1�� �����������

�����������Cube

������������������

�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

��ע�⣺�������һ���ǲ������ģ�ֻ�ö����ṩ�ӿ� ��д�����ˣ�
*/

#include <iostream>
using namespace std;

// �����������.
// 1��������������
// 2���������
// 3�������Ϊ  ��ȡ��������������
// 4���ֱ�����ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
class Cube
{
public:
	// ���ó�������
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

	// ��ȡ��������
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

	// ���㷵�����
	int calcuteArea() 
	{
		int area = 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
		cout << "����ǣ�" << area << endl;
		return area;
	}

	// ���㷵�����
	int calcuteVolume() 
	{
		int volume = m_L * m_W * m_H;
		cout << "����ǣ�" << volume  << endl;
		return volume;
	}

	// ���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube &c) // ��һ�������壬�����еĶԱ� 
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			cout << "��Ա�����ж����" << endl;
			return true;
		}
		else
		{
			cout << "��Ա�����ж� �����" << endl;
			return false;
		}
	}

private: // һ�����Զ���˽�еģ�Ȼ��ͨ��д�ӿڷ���
	int m_L;
	int m_W;
	int m_H;

};

// ����ȫ�ֺ����ж������������Ƿ����
// ��ֵ���ݻ´�����ݣ�Ӱ��Ч�ʣ�
bool isSame(Cube &c1, Cube &c2) // ���õķ�ʽ��ʹ��ԭʼ���ݣ�����Ҫ�ٿ���Ϊ�β��Ǹ�����
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) 
	{
		cout << "ȫ�ֺ����ж����" << endl;
		return true;
	}
	else
	{
		cout << "ȫ�ֺ����ж�  �����" << endl;
		return false;
	}
}

int main104() {

	Cube c1; // �������������

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
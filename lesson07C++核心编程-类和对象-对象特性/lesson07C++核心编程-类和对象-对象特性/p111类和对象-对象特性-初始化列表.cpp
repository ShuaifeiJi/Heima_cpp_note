/*
��ʼ���б�
	���ã�
	c++�ṩ�˳�ʼ���б��﷨��������ʼ������

	1�����캯�����Գ�ʼ��
	2����ʼ���б�Ҳ�ܳ�ʼ��


	�﷨��
	���캯��():  ����1��ֵ1��, ����2��ֵ2��,....{}
*/

#include <iostream>
using namespace std;

// ��ʼ���б�
class Person8 
{
public:
	// ��ͳ��ʼ������ ����ʹ�ù��캯����ʼ����
	/*Person8(int a, int b, int c) 
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}*/

	// ���ó�ʼ���б�  ��ʼ������
	// Person8() : m_A(10), m_B(20), m_C(30) һ��д����д��
	Person8(int a, int b, int c) : m_A(a), m_B(b), m_C(c)
	{
		cout << "ʹ�ó�ʼ���б��ʼ������" << endl;
	}

	int m_A;
	int m_B;
	int m_C;
};

void test09() 
{
	//Person8 p(6,7,8);
	
	Person8 p(10, 11, 12);

	cout << "m_A: " << p.m_A << endl;
	cout << "m_B: " << p.m_B << endl;
	cout << "m_C: " << p.m_C << endl;
}

int main111() 
{
	test09();

	system("pause");
	return 0;
}
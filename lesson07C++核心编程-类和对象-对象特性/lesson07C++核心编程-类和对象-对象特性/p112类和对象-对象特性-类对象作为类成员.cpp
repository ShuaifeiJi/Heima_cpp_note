/*
����� ��Ϊ ���Ա

c++����ĳ�Ա��������Ķ������ǳƸó�ԱΪ �����Ա

�乹��˳�������˳��
*/

#include <iostream>
using namespace std;
#include <string>

// �������Ϊ���Ա

// �ֻ���
class Phone 
{
public:
	Phone(string pName) 
	{
		m_PName = pName;
		cout << "Phone�вι��캯���ĵ���  ��ʼ�� ����" << endl;
	}

	~Phone() 
	{
		cout << "Phone���������ĵ���" << endl;
	}


	// Ʒ��
	string m_PName;
};


// ����
class Person10 
{
public:
	Person10(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		// Phone m_Phone = pName;   �൱����� ��ʽת����
		cout << "Person10�вι��캯���ĵ��á�  ��ʼ������" << endl;
	}

	~Person10() 
	{
		cout << "Person10���������ĵ���" << endl;
	}


	// ����
	string m_Name;

	// �ֻ�
	Phone m_Phone;
};

// ��������Ķ�����Ϊ����ĳ�Ա������ʱ���ȹ���������ٹ�������
// (����� ��װ��������װ����������װ����)

// ����ʱ�����������������������
// ������ɲ��������Ȳ��������ٲ𷢶�����
void test10() 
{
	Person10 p("����", "ƻ��11");
	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
}

int main112() 
{
	test10();

	system("pause");
	return 0;
}
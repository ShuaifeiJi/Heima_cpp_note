/*
�������캯������ʱ��

������������ʱ��ͨ�������������
	1��ʹ�� һ���Ѿ�������ϵĶ��� ����ʼ��һ���¶���
	2��ֵ���ݵķ�ʽ������������ֵ
	3����ֵ��ʽ���ؾֲ�����
*/

#include <iostream>
using namespace std;

class Person3 
{
public:
	Person3() 
	{
		cout << "Person3Ĭ�Ϲ��캯���ĵ���" << endl;
	}

	// �вι���
	Person3(int age) 
	{
		cout << "Person3�вι��캯���ĵ���" << endl;
		m_Age = age;
	}

	// ��������
	Person3(const Person3 & p) 
	{
		cout << "Person3�������캯���ĵ���" << endl;
		m_Age = p.m_Age;
	}


	~Person3() 
	{
		cout << "Person3���������ĵ���" << endl;
	}

	int m_Age = 0;
};

// 1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test03() 
{
	Person3 p1(20);
	Person3 p2(p1);

	cout << "p2������Ϊ��" << p2.m_Age << endl;
}

// 2��ֵ���ݵķ�ʽ������������ֵ

void doWork(Person3 p) 
{
	cout << "doWork�ĵ���  " << p.m_Age << endl;
	p.m_Age = 1000;
	cout << "doWork�п������������ �β�:" << p.m_Age << endl;
}

void test04()
{
	Person3 p; // ����Ĭ�Ϲ���
	doWork(p); 
	// doWork����ʹ����ֵ���ݵķ�ʽ��  ֵ���ݵı����ǿ���һ����ʱ����
	// �����ǵ��ÿ������캯��
	// ��ʵ�� ���ݸ� �β� ��ʱ�򣬻���ÿ������캯��
	// ����ѿ������� ����ע�͵�����ֻ������������������֪��Ϊɶ����

	cout << "��ߵ����� ʵ�Σ�" << p.m_Age << endl;
	// �ѿ�����������ע�͵��� �������ͬ
}

// ֵ��ʽ���ؾֲ�����
// Ҳ����� �������캯����
Person3 doWork2() 
{
	Person3 p1;
	cout << (int)&p1 << endl; // ��ӡ����ĵ�ַ
	return p1; // ʹ�� ֵ��ʽ���أ� ���ص�ʱ�����p1�����µĶ���
}

void test05()
{
	Person3 p = doWork2(); // ������һ������p,  ��ֵ��Person3 p
	cout << (int)&p << endl; // ��ӡ����ĵ�ַ
	// Int��ת��Ϊ����
	// &p��ȡ16���� ��ַ
}

int main108() {

	//test03();

	//test04();

	test05();

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

class Person 
{
public: //����Ȩ�ޣ����ܷ���
	void showClassName() 
	{
		cout << "this is Person class" << endl;
	}

	void showPersonAge() 
	{
		if (this == NULL) 
		{
			return;
		}
		cout << "person age =" << m_Age << endl;
		// m_AgeĬ�Ͼ��� this->m_Age�����Ǳ����У� this�ǿ�ָ�룬û��ָ��ȷ�е�m_Age
		// ��û����ȷ�Ķ����޷�����m_Age
	}

	int m_Age;
};

void test01() 
{
	Person * p = NULL;

	p->showClassName();

	p->showPersonAge(); // ��m_Ageû�г�ʼֵ��ʱ�򣬻��
	// ��Ϊ�ǿ��ڴ� Ϊ��
}

int main116() {

	test01();

	system("pause");
	return 0;
}
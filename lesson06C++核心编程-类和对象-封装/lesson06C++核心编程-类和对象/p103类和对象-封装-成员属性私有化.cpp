/*
��Ա��������Ϊ˽�� private

�ŵ�1��	����Ա��������Ϊ˽�У������Լ����ƶ�дȨ��

�ŵ�2�� ����дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
*/

#include <iostream>
using namespace std;
#include <string>

// ��Ա��������Ϊ˽�� private
// 1�������Լ����ƶ�дȨ��
// 2������д�����Լ�����ݵ���Ч��

// ���Person��
class Person02
{
public:
	// ��������
	void setName(string name) 
	{
		m_Name = name;
	}

	// ��ȡ����
	string getName() 
	{
		return m_Name;
	}

	//��ȡ����  �ɶ���д  ������޸ģ����䷶Χ������0 ~ 150֮�䣩
	int getAge() 
	{
		//m_Age = 18; //��ʼ��Ϊ
		return m_Age;
	}

	void setAge(int age) 
	{
		if (age < 0 || age > 150) 
		{
			cout << "�������������0 ~ 150֮��" << endl;
			return;
		}
		m_Age = age;
	}

	//�������� ֻд
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	// ����	�ɶ���д
	string m_Name;
	// ����	ֻ��
	int m_Age = 0;
	// ����	ֻд
	string m_Lover;
	
};

int main103() {

	Person02 p; // ʵ����
	p.setName("����");

	cout << "�����ǣ�" << p.getName() << endl;
	 
	p.setAge(88);

	cout << "�����ǣ�" << p.getAge() << endl;

	p.setLover("����"); // ��������Ϊ ����
	// ֻ��д�������Է���


	system("pause");
	return 0;
}
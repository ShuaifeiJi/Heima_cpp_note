#include <iostream>
using namespace std;
#include <string>

// ���һ��ѧ���࣬������������ѧ��
// ���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

// ���ѧ����
class Student
{
public: // ����Ȩ��
	// ����
	string m_Name; // ����
	int m_Id; // ѧ��

	// ��Ϊ
	// ��ʾ������ѧ��
	void showStudent() 
	{
		cout << "������ " << m_Name << endl;
		cout << "ѧ�ţ� " << m_Id << endl;
	}

	// ��������ֵ
	void setName(string name) 
	{
		m_Name = name;
	}

};

int main100() {
	
	// ʵ����
	// ����һ�������ѧ�� ��ʵ��������
	Student s1;
	// ��s1���� �������Ը�ֵ����
	s1.m_Name = "����";
	s1.setName("��С��");
	s1.m_Id = 88888888;

	// ��ʾѧ����Ϣ
	s1.showStudent();


	// ����һ�������ѧ��
	Student s2;	
	
	s2.m_Name = "����";
	s2.m_Id = 66666666;
	s2.showStudent();

	system("pause");

	return 0;
}

// ���е����Ժ���Ϊ��ͳһ��Ϊ��Ա
// �����ֽУ�   ��Ա���ԡ� ��Ա����
// ��Ϊ�ֽУ�	��Ա������ ��Ա����
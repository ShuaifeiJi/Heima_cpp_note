/*
struct��class������

Ψһ���������� Ĭ�ϵķ���Ȩ�޲�ͬ

structĬ�ϵķ���Ȩ���ǹ��� public

classĬ�ϵķ���Ȩ����˽�� private
*/

#include <iostream>
using namespace std;

class C1 
{
	int m_A; // Ĭ��Ȩ����˽��
};

struct C2
{
	int m_A; // Ĭ��Ȩ���ǹ���
};

int main102() {
	// struct��class������
	// struct Ĭ��Ȩ���� ���� public
	// class  Ĭ��Ȩ���� ˽�� private
	
	C1 c1; //ʵ����
	//c1.m_A = 100; �������ɷ���

	C2 c2;
	c2.m_A = 888; // ��struct�У�Ĭ�ϵķ���Ȩ���ǹ�������˿��Է���
	cout << c2.m_A << endl;





	system("pause");
	return 0;
}
/*
thisָ��ĸ���

��c++�У���Ա�����ͳ�Ա�����Ƿֿ��洢��

ÿһ���Ǿ�̬��Ա����ֻ�ᵮ��һ�ݺ���ʵ����Ҳ����˵���ͬ���͵Ķ���Ṳ��һ�����
��ô�����ǣ� ��һ���������������ĸ���������Լ��أ�
*/

/*
c++ͨ���ṩ����Ķ���ָ�룬thisָ�룬����������⣬
��thisָ��ָ�򱻵��õĳ�Ա���������Ķ��󡿣��ĸ�������������������ָ���ĸ�����

thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
thisָ�벻��Ҫ���壬ֱ��ʹ�ü���
*/

/*
thisָ�����;
	���βκͳ�Ա����ͬ��ʱ������thisָ��������
	����ķǾ�̬��Ա�����з��ض�������ʹ��return *this
	*/

#include<iostream>
using namespace std;

class Person15 
{
public:
	Person15(int age) // �вι��캯��
	{
		//age = age; // �������age��ֵ, ��������д����������Ƴ�ͻ
		// ������������Ϊ����age��ͬһ��

		this->age = age; // thisָ�� ָ�� �����õĳ�Ա���� �����Ķ���
		// �����õĳ�Ա������ Person15�вι��캯��
		// ����ĳ�Ա������age
	}

	Person15& PersonAddAge(Person15 &p) // ���õķ�ʽ���롣���õķ�ʽ���ء���ֵ�ķ�ʽ���ص�ʱ�򣬻´��һ���µ�this����
	{
		this->age += p.age;
		
		return *this; // this��p2��ָ�룬 *this��p2�ı���
						// Person& ʹ�����õķ�ʽ����
	}

		int age;
};

// 1�� ������Ƴ�ͻ
void test151() 
{
	Person15 p1(18);

	cout << "p1������Ϊ��" << p1.age << endl;
}

void test152() 
{
	Person15 p1(10);
	Person15 p2(15);

	//p2.PersonAddAge(p1);

	// ��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	// ��p2.PersonAddAge()�����ķ���ֵ��void��ʱ�򣬱���
	// ��p2.PersonAddAge()����ֵ��p2��ʱ�򣬲Ŷ�   ����return * this��

	// ��ʽ���˼��
	cout << "p2������Ϊ��" << p2.age << endl;
}

// 2�� ���ض�������*this

int main115() {

	//test151();

	test152();

	system("pause");
	return 0;
}




















/*
案例描述：
学校正在做毕设项目，每名老师带5名学生
总共有3名老师，需求如下：
设计学生和老师的结构体，其中在老师的结构体中，
有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数、

创建数组存放3名老师，

通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据
*/

#include <iostream>
#include <string>
using namespace std;
#include <ctime>

// 学生结构体定义
struct Student {
	// 学生姓名
	string sName;
	// 学生分数
	int score;
};


// 老师结构体的定义
struct Teacher {
	// 姓名
	string tName;
	// 学生数组 (由结构体组成的数组)
	struct Student sArray[5];
};

// 给三名老师赋值的函数
void allocateSpace(struct Teacher tArray[], int len)  // 用数组接收， 另一种写法是用指针接收
{
	// 小技巧
	string nameSeed = "ABCDE";
	// 外侧循环，给老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		
		// 通过循环给每名老师带的学生赋值
		for (int j = 0; j < 5; j++) 
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			// rand函数产生0到最大随机数的 整数
			// % 61会产生0~60的随机数
			int random = rand() % 61 + 40; // 40~99
			tArray[i].sArray[j].score = random; // 全都是88分
		}
		
	}
};

// 打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "teacher name：" << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tstudent name: " << tArray[i].sArray[j].sName << endl;
			cout << "\tstudent score: " << tArray[i].sArray[j].score << endl;
		}
	}
};


int main70() {

	// 随机数种子，按照系统当前时间产生随机数，确保真正随机
	srand((unsigned int)time(NULL));


	// 1、创建3名老师的数组
	struct Teacher tArray[3];

	// 1、通过函数给三名老师的信息赋值，并且给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray,len);

	// 1、打印所有老师及所带的学生的信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}
/*
案例描述：
设计一个英雄的结构体，包括成员姓名、年龄、性别；
创建结构体数组，数组中存放5名英雄

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序

最终打印排序后的结果
*/

/*
五名英雄的信息如下：
{"liubei", 23, "male"},
{"guanyu", 22, "male"},
{"zhangfei", 20, "male"},
{"zhaoyun", 21, "male"},
{"diaochan", 16, "female"}
*/

#include <iostream>
using namespace std;
#include <string>

// 1、设计英雄结构体
// 英雄的结构体
struct Hero {
	// 姓名
	string name;
	// 年龄
	int age;
	// 性别
	string sex;
};

// 冒泡排序 实现年龄的升序排列
void bubbleSort(struct Hero heroArray[], int len) 
{
	// 外圈 第i轮冒泡，一共冒泡len-1次
	for (int i = 0; i < len - 1; i++) 
	{
		// 内圈，左右比较次数，一共len-i-1次
		for (int j = 0; j < len - i - 1; j++)
		{
			// 如果j下标元素的年龄，大于j+1下标元素的年龄，则交换
			if (heroArray[j].age > heroArray[j+1].age) 
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			};
		}
	}
	
}

// 打印
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << heroArray[i].name << endl;
		cout << "\t" << heroArray[i].age << endl;
		cout << "\t" << heroArray[i].sex << endl;
	}
}


int main71() {

	// 2、创建数组存放5名英雄
	struct Hero heroArray[5] = 
	{
		{ "liubei", 23, "male" },
		{ "guanyu", 22, "male" },
		{ "zhangfei", 20, "male" },
		{ "zhaoyun", 21, "male" },
		{ "diaochan", 16, "female" }
	};
	// 【阶段性测试】 验证可否正常打印
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << heroArray[i].name << endl;
	//	cout << heroArray[i].age << endl;
	//	cout << heroArray[i].sex << endl;
	//};
	 
	// 3、对数组进行排序，按照年龄进行升序排序
	bubbleSort(heroArray, len);

// 4、将排序后的结果打印输出
	printHero(heroArray, len);

	system("pause");
	return 0;
}

// 总结：数组名就是首地址，传入数组名本质上是地址传递
// 所以[]运算符和*运算符，都能改变实参的值
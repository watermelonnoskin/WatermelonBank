#include<iostream>
using namespace std;
#include<list>
void printlist02(const list<int>l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//赋值
void test02()
{
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printlist02(l1);

	list<int>l2;		//operator赋值
	l2 = l1;
	printlist02(l2);

	list<int>l3;								//(l2.begin(), l2.end());
	l3.assign(l2.begin(), l2.end());			//l3(l2.begin(), l2.end())
	printlist02(l3);

	list<int>l4(l2);
	printlist02(l4);

	list<int>l5;
	l5.assign(10, 100);
	printlist02(l5);
}
//交换
void test002()
{
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	list<int>l2;
	l2.assign(10, 100);
	cout << "交换前：" << endl;
	printlist02(l1);
	printlist02(l2);
	l1.swap(l2);
	cout << "交换后：" << endl;
	printlist02(l1);
	printlist02(l2);
}
int main02()
{
	//赋值
	test02();
	//交换
	test002();
	system("pause");
	return 0;
}
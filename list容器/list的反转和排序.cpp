#include<iostream>
using namespace std;
#include<list>
void printlist06(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//降序函数
bool mycompare(int v1,int v2)
{
	//降序  第一个数 > 第二个数
	return v1 > v2;
}
//反转
void test06()
{
	list<int>l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);
	cout << "反转前" << endl;
	printlist06(l1);

	//反转
	l1.reverse();
	cout << "反转后" << endl;
	printlist06(l1);
}

//排序
void test006()
{
	list<int>l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);
	cout << "排序前" << endl;
	printlist06(l1);
	//不能用sort(l1.begin(),l1.end())
	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//不支持随机访问迭代器的容器，内部会提供一些相应的算法
	l1.sort();		//默认排序从小到大 升序排列
	cout << "排序后（升序）" << endl;
	printlist06(l1);
	l1.sort(mycompare);
	cout << "排序后（降序）" << endl;
	printlist06(l1);
}
int main06()
{
	test06();
	test006();
	system("pause");
	return 0;
}
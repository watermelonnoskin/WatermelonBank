#include<iostream>
using namespace std;
#include<map>
void printmap02(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;	//也可以写成 (*it)->first
	}
	cout << endl;
}
//大小
void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));

	if (m.empty())
	{
		cout << "该容器为空" << endl;
	}
	else
	{
		cout << "该容器不为空,容器大小为" << m.size() << endl;
	}
}
//交换
void test002()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 40));
	m2.insert(pair<int, int>(5, 50));
	m2.insert(pair<int, int>(6, 60));

	cout << "交换前" << endl;
	printmap02(m1);
	printmap02(m2);

	cout << "交换后" << endl;
	m1.swap(m2);
	printmap02(m1);
	printmap02(m2);
}
int main02()
{
	test02();
	cout << endl;
	test002();
	system("pause");
	return 0;
}
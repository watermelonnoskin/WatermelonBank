#include<iostream>
using namespace std;
#include<list>
void printlist05(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test05()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printlist05(l1);

	//l1[0] 不可以用[]访问list容器中的元素
	//l1.at(0) 不可以用at方式list容器中的元素
	//原因：list是链表，不是用连续的线性空间存储数据，迭代器也是不支持随机访问的

	cout << "第一个元素为：" << l1.front() << endl;
	cout << "最后一个元素为：" << l1.back() << endl;

	//验证迭代器是不支持随机访问的
	list<int>::iterator it = l1.begin();
	it++;				//支持双向
	it--;
	//it = it + 1;		//不支持随机访问	//报错
	//it = it - 1;							//报错
}
int main05()
{
	test05();
	system("pause");
	return 0;
}
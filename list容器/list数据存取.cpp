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

	//l1[0] ��������[]����list�����е�Ԫ��
	//l1.at(0) ��������at��ʽlist�����е�Ԫ��
	//ԭ��list���������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�

	cout << "��һ��Ԫ��Ϊ��" << l1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << l1.back() << endl;

	//��֤�������ǲ�֧��������ʵ�
	list<int>::iterator it = l1.begin();
	it++;				//֧��˫��
	it--;
	//it = it + 1;		//��֧���������	//����
	//it = it - 1;							//����
}
int main05()
{
	test05();
	system("pause");
	return 0;
}
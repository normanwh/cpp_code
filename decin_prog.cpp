/*************************************************************************
	> File Name: decin_prog.cpp
	> Author: marswh
	> Mail: norman9702@outlook.com 
	> Created Time: 2021年03月28日 星期日 20时53分04秒
 ************************************************************************/
//p11 1.11
#include<iostream>
using namespace std;

int main()
{
	int val1 = 0,val2 = 0,i = 0;
	cout << "请输入两个不同整数" << endl;
	cin >> val1 >> val2;
	if(val1 < val2 - 1)
	{
		i = val1 + 1;
		while(i < val2)
		{
			cout << i << endl;
			++i;
		}
	}
	else if(val1 > val2 + 1 )
	{
		i = val2 + 1;
		while(i > val2)
		{
			cout << i << endl;
			++i;
		}
	}
	else
		cout << "两个数之间没有整数" << endl;
	return 0;
}

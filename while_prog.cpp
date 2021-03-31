/*************************************************************************
	> File Name: while_prog.cpp
	> Author: marswh
	> Mail: norman9702@outlook.com 
	> Created Time: 2021年03月28日 星期日 19时19分48秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int sum = 0,val = 1;
	//只要val的值小于等10，while循环就会持续进行
	while (val <= 10)
	{
		sum += val;
		val++;
	}
	cout << "sum of 1 to 10 zhi is"
		 << sum << endl;
	return 0;
}

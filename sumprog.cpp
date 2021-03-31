/*************************************************************************
	> File Name: sumprog.cpp
	> Author: marswh
	> Mail: norman9702@outlook.com 
	> Created Time: 2021年03月28日 星期日 20时37分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int val = 50,sum = 0;
	while(val <= 100)
	{
		sum += val;
		++val;
	}
		cout << "sum of 50 to 100 is" << sum << endl;
		return 0;
}

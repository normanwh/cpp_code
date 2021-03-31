/*************************************************************************
	> File Name: stay_cin.cpp
	> Author: marswh
	> Mail: norman9702@outlook.com 
	> Created Time: 2021年03月30日 星期二 17时50分58秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int value = 0,sum = 0;
	while(cin >> value)
		sum += value;
	cout << "sum is " << sum << endl;
	return 0;
}

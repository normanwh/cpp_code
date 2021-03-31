/*************************************************************************
	> File Name: io_prog.cpp
	> Author: marswh
	> Mail: norman9702@outlook.com 
	> Created Time: 2021年03月28日 星期日 16时43分57秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0,v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of" << v1 << " and " << v2 << "is" << v1 + v2 <<
		std::endl;
	return 0;
}

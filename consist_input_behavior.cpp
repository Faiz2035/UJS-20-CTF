#include<iostream>
using namespace std;
int main()
{

	char b;
	int a, c,temp , zhengshu;
	cout << "Input numerator/denominator:";
	cin >> a >> b >> c;     //当进行连续输入时的变量不是相同类型的,比如char和int,那么就不需要空白符隔开各个待输入的字符
	temp = a % c;
	zhengshu = (a - temp)/c;
	cout <<"=" <<zhengshu << "U" << temp << "/" << c;
	return 0;





}

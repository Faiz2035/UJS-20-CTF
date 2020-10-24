#include<iostream>
#include<regex>             //引入正则头文件
#include <string>
using namespace std;
int main()
{
	smatch result;
	string str ;
	regex pattern("(\\d+)/(\\d+)");      //一般的,正则只需要\d即可匹配数字,但在C++中,需要用转义字符\来对\d进行转义,所以这里使用两个\,第一个\表示转义,第二个\与d是一个整体
	string numerator, denominator;
	int pred_numerator, zhengshu;
	int n, d;

    cout << "Input  numerator/denominator: ";
	cin >> str;
	regex_match(str, result, pattern);    //ÀûÓÃÕýÔò
	numerator = result[1];
	denominator = result[2];
	n = stoi(numerator, 0, 10);           //这里的result得到的是string类型,需要使用非标准函数stoi进行转换
	d = stoi(denominator, 0 ,10);         //def stoi:stoi( 原字符串 , 转换起始字符的下标 , 转换成的进制 )
	pred_numerator = n % d;
	zhengshu = (n - pred_numerator) / d;
	cout << zhengshu << "U" << pred_numerator << "/" << denominator;

	return 0;








}



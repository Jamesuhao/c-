//#1iNOC产品部--完全数计算
#if 0
/*
完全数（Perfect number），又称完美数或完备数，是一些特殊的自然数。
它所有的真因子（即除了自身以外的约数）的和（即因子函数），恰好等于它本身。
例如：28，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加，1+2+4+7+14=28。
给定函数count(int n),用于计算n以内(含n)完全数的个数。计算范围, 0 < n <= 500000
返回n以内完全数的个数。 异常情况返回-1
输入描述:
输入一个数字
输出描述:
输出完全数的个数
示例1
输入
1000
输出
3
*/
#include<iostream>
#include<math.h>
using namespace std;
#include<math.h>
#include<iostream>
using namespace std;
bool isPrefectNum(int num)
{
	int sum = 1;
	for (int i = 2; i < sqrt(num); ++i)
	{
		if (num % i == 0)
		{
			sum += i;
			sum += num / i;
		}
	}
	if (sum == num)
	{
		return true;
	}
	return false;
}
int main()
{
	int num = 0;
	while (cin >> num)
	{
		int count = 0;
		for (int i = 2; i < num; ++i)
		{
			if (isPrefectNum(i))
			{
				++count;
			}
		}
		cout << count << endl;
	}
	return 0;
}
#endif

//#2扑克牌大小
/*
题目描述
扑克牌游戏大家应该都比较熟悉了，一副牌由54张组成，含3~A、2各4张，小王1张，大王1张。牌面从小到大用如下字符和字符串表示（其中，小写joker表示小王，大写JOKER表示大王）：
3 4 5 6 7 8 9 10 J Q K A 2 joker JOKER
输入两手牌，两手牌之间用"-"连接，每手牌的每张牌以空格分隔，"-"两边没有空格，如：4 4 4 4-joker JOKER。
请比较两手牌大小，输出较大的牌，如果不存在比较关系则输出ERROR。
基本规则：
（1）输入每手牌可能是个子、对子、顺子（连续5张）、三个、炸弹（四个）和对王中的一种，不存在其他情况，由输入保证两手牌都是合法的，顺子已经从小到大排列；
（2）除了炸弹和对王可以和所有牌比较之外，其他类型的牌只能跟相同类型的存在比较关系（如，对子跟对子比较，三个跟三个比较），不考虑拆牌情况（如：将对子拆分成个子）；
（3）大小规则跟大家平时了解的常见规则相同，个子、对子、三个比较牌面大小；顺子比较最小牌大小；炸弹大于前面所有的牌，炸弹之间比较牌面大小；对王是最大的牌；
（4）输入的两手牌不会出现相等的情况。
输入描述:
输入两手牌，两手牌之间用"-"连接，每手牌的每张牌以空格分隔，"-"两边没有空格，如 4 4 4 4-joker JOKER。
输出描述:
输出两手牌中较大的那手，不含连接符，扑克牌顺序不变，仍以空格隔开；如果不存在比较关系则输出ERROR。
示例1
输入
4 4 4 4-joker JOKER
输出
joker JOKER
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	return 0;
}
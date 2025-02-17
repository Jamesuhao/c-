//#1洗牌
#if 0
/*
题目描述
洗牌在生活中十分常见，现在需要写一个程序模拟洗牌的过程。 现在需要洗2n张牌，
从上到下依次是第1张，第2张，第3张一直到第2n张。首先，我们把这2n张牌分成两堆，
左手拿着第1张到第n张（上半堆），右手拿着第n+1张到第2n张（下半堆）。
接着就开始洗牌的过程，先放下右手的最后一张牌，再放下左手的最后一张牌，
接着放下右手的倒数第二张牌，再放下左手的倒数第二张牌，直到最后放下左手的第一张牌。
接着把牌合并起来就可以了。 例如有6张牌，最开始牌的序列是1,2,3,4,5,6。首先分成两组，
左手拿着1,2,3；右手拿着4,5,6。在洗牌过程中按顺序放下了6,3,5,2,4,1。把这六张牌再次合成一组牌之后，
我们按照从上往下的顺序看这组牌，就变成了序列1,4,2,5,3,6。 现在给出一个原始牌组，请输出这副牌洗牌k次之后从上往下的序列。
输入描述:
第一行一个数T(T ≤ 100)，表示数据组数。对于每组数据，第一行两个数n,k(1 ≤ n,k ≤ 100)，
接下来一行有2n个数a1,a2,...,a2n(1 ≤ ai ≤ 1000000000)。表示原始牌组从上到下的序列。
输出描述:
对于每组数据，输出一行，最终的序列。数字之间用空格隔开，不要在行末输出多余的空格。
示例1
输入
3 
3 1 
1 2 3 4 5 6 
3 2 
1 2 3 4 5 6 
2 2 
1 1 1 1
输出
复制
1 4 2 5 3 6 1 5 4 3 2 6 1 1 1 1
题目解析：
本题题目的意思是模拟洗牌过程，牌被分成两组，且每组数量相等，然后每组牌从最后一个牌交叉排列，最
后再把排列逆序就是一次洗牌的过程，K次需要重复K次这样的过程。
解题思路：
每次读取一个数之后，算出他经过k次洗牌后的位置，只用一个长度为2n数组用来输出。
根据当前数的位置，可以算出经过一次洗牌后的位置：
如果当前数小于等于n（即在左手），则他下次出现的位置是  2*当前位置
与之对应的 当前位置+n（即在右手）的牌,则他下次出现的位置是  2*当前位置 + 1
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//T为共有多少组数据
	//n为数据总数的一半
	//k为每组数据共需洗牌的次数
	int T, n, k;
	cin >> T;
	while (T)
	{
		cin >> n >> k;
		//vec1存储初始数据以及洗过牌但未达到洗牌次数的数据
		vector<int>vec1(2 * n, 0);
		//输入数据
		for (int i = 0; i < 2 * n; ++i)
		{
			cin >> vec1[i];
		}
		//重复洗牌
		while (k)
		{
			//vec2为临时存储数据的数组，，是vec1的一份拷贝，用以改变vec1中元素的位置。
			vector<int>vec2(vec1.begin(), vec1.end());
			//一次洗牌共调整n次，小于n(左手)与大于n(右手)的数据一起调整
			for (int i = 0; i < n; ++i)
			{
				//小于n(左手)的数据一次洗牌后i位置元素就被放到了2*i的位置
				vec1[2 * i] = vec2[i];
				//大于n(右手)的数据一次洗牌后i+n位置的元素就被放到了2*i+1的位置
				vec1[2 * i + 1] = vec2[i + n];
			}
			//一次洗牌完成后，减少洗牌的次数
			--k;
		}
		//一组数据洗牌完成后输出该组数据
		//因题目要求每一行输出末尾不能有多余的空格，所以先输出前2*n-1个数据
		for (int i = 0; i < 2 * n - 1; ++i)
		{
			cout << vec1[i] << " ";
		}
		//在输出第n个数据
		cout << vec1[2 * n - 1] << endl;
		//一组数据输出后，减少数据的组数
		--T;
	}
	return 0;
}
#endif

//#2MP3光标的位置
#if 0
/*
题目信息：
https://www.nowcoder.com/practice/eaf5b886bd6645dd9cfb5406f3753e15?tpId=37&&tqId=21287&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking
*/
#endif

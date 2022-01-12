//#include <stdio.h>
//#include <string>
//#include <iostream>
//using namespace std;
//int c[21][21];
//int n;
//long long test(string pre, string post) {
//	long long sum = 1;
//	int num = 0;
//	int k = 0, i;
//	pre.erase(pre.begin());
//	post = post.substr(0, post.length() - 1);
//	while (k < pre.length()) {
//		for (i = 0; i < post.length(); i++)
//			if (pre[k] == post[i]) {
//				sum *= test(pre.substr(k, i - k + 1),
//					post.substr(k, i - k + 1));
//				num++; //num代表串被分成了几段(例如 (bejkcfghid,jkebfghicd) = (bejk, cfghi, d) )
//				k = i + 1;
//				break;
//			}
//	}
//	//cout << pre << "  " << post <<"  " << t1 << " =" << num << endl << endl;
//	sum *= c[num][n]; //从n中取num个的取法个数
//	return sum;
//}
//void getsc() {
//	int i, j;
//	c[0][1] = c[1][1] = 1;
//	for (i = 2; i < 21; i++) {
//		c[0][i] = 1;
//		for (j = 1; j <= i; j++) {
//			if (i == j)
//				c[j][i] = 1;
//			else
//				c[j][i] = c[j - 1][i - 1] + c[j][i - 1];
//
//		}
//	}
//}
//int main() {
//	string pre, post;
//	getsc();
//	while ((cin >> n >> pre >> post) && n) {
//
//		cout << test(pre, post) << endl; //printf("%ld\n",test(pre,post));
//	}
//	return 0;
//}


#include<iostream>
#include<string>
using namespace std;

long cal(long n, long x)
{
	long a=1, b=1;
	for (int i = 1; i <= x; i++)
		b *= i;
	while (x--)
	{
		a *= n;
		n--;
	}
	return a / b;
}

long Combination(string pre, string post, long n)
{
	if (pre.length() == 1)
		return 1;
	long sum = 1, count = 0;
	string sub1, sub2;
	int first = 1, old = 0;
	while (first < pre.length())
	{
		int len = post.find(pre[first]) -old + 1;
		sub1 = pre.substr(first, len);
		sub2 = post.substr(old, len);
		sum *= Combination(sub1, sub2, n);
		old += len;
		first += len;
		count++;
	}
	long tmp = cal(n, count);
	sum *= tmp;
	return sum;
}

int main()
{
	long n;
	string pre, post;
	while (cin >> n >> pre >> post)
	{
		long sum = 1;
		cout<< Combination(pre, post, n) << endl;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//input one line, find out words
#include <iostream>
#include <string>
using namespace std;

//求给定字符串中无重叠最长重复子字符串的长度
int main()
{
	int getmaxlength(string);     //function
	string str;
	int t;

	cin >> t;
	cin.ignore(10, '\n');
	while (t--)
	{
		getline(cin, str);       //input 
		cout << getmaxlength(str) << endl;     //call function , output result
	}

	system("pause");
	return 0;
}

//get the maxlength of substr
int getmaxlength(string str)
{
	string substring;
	int start, maxlength, findresult;

	for (maxlength = str.length() / 2; maxlength >= 1; maxlength--)     //length of substr
	{
		for (start = 0; start + 2 * maxlength <= (int)str.length(); start++)    //start index
		{
			substring = str.substr(start, maxlength);     //compute substr
			findresult = str.find(substring, start + maxlength);   //find  substr from start+maxlength

			if (findresult != string::npos)        //match
				return maxlength;
		}
	}
	return maxlength;          //not found, return 0
}



//输入一行字符串，找出所有的单词。
//int main()
//{
//	string line;
//	string words[100];
//
//	getline(cin, line, '\n');    //input
//
//	int start = 0;
//	int end = 0;
//	while (end != string::npos)
//	{
//		start = line.find_first_not_of(" ", start);   //start of word
//		end = line.find_first_of(" ", start + 1);     //end of word
//		cout << line.substr(start, end - start) << endl;
//		start = end + 1;
//	}
//
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
#include <sstream>
#include <regex>
using namespace std;

//p83	输入两个字符串。若均为数字串，输出两个数字的和；否则，输出串链接。

bool alldigit(string s)
{
	for (auto x : s)
	if (x < '0' || x > '9')
		return false; 
	return true;       
}

int main()
{
	string str1, str2;
	//stringstream ss;
	int num1, num2;
	while (cin >> str1 >> str2)
	{
		//if (alldigit(str1) && alldigit(str2)) 
		regex rnum("[[:d:]]+");
		if (regex_match(str1, rnum) && regex_match(str2, rnum))
		{
			stringstream ss;			  
			ss << str1 << " " << str2;
			ss >> num1 >> num2;
			ss.clear();                  




			/*num1 = stoi(str1);        
			num2 = stoi(str2);*/

			//sscanf(str1.c_str(),"%d",&num1);  
			//sscanf(str2.c_str(),"%d",&num2);
			cout << num1 + num2 << endl;
		}
		else
			cout << str1 + str2 << endl;
	}
	system("pause");
	return 0;
}


////p82	输入一行字符串，将所有单词逆序输出。（OJ正话反说）
//
//int main()
//{
//	string line, words[1000];
//	stringstream ss;         
//	int i;
//
//	while (getline(cin, line))   //input one line
//	{
//		ss.str(line);         
//
//		i = 0;
//		while (ss >> words[i]) i++;    //input words from stringstream
//
//		for (--i; i >= 0; i--)       //output
//			cout << words[i] << " ";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}




////p50	求给定字符串中无重叠最长重复子字符串的长度
//int main()
//{
//	int getmaxlength(string);     //function
//	string str;
//	int t;
//
//	cin >> t;
//	cin.ignore(10, '\n');
//	while (t--)
//	{
//		getline(cin, str);       //input 
//		cout << getmaxlength(str) << endl;     //call function , output result
//	}
//
//	system("pause");
//	return 0;
//}
//
////get the maxlength of substr
//int getmaxlength(string str)
//{
//	string substring;
//	int start, maxlength, findresult;
//
//	for (maxlength = str.length() / 2; maxlength >= 1; maxlength--)     //length of substr
//	{
//		for (start = 0; start + 2 * maxlength <= (int)str.length(); start++)    //start index
//		{
//			substring = str.substr(start, maxlength);     //compute substr
//			findresult = str.find(substring, start + maxlength);   //find  substr from start+maxlength
//
//			if (findresult != string::npos)        //match
//				return maxlength;
//		}
//	}
//	return maxlength;          //not found, return 0
//}




////p49   输入一行字符串，找出所有的单词。
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


////p33    C++11—右值引用
//class ccomplex
//{
//	int real, imge;
//public:
//	ccomplex() = default;
//	ccomplex(int rval, int ival) :real(rval), imge(ival){}
//	~ccomplex() = default;
//	ccomplex add(ccomplex &rhs) const    //const ccomplex &rhs
//	{
//		return ccomplex(real + rhs.real, imge + rhs.imge);
//	}
//	/*ccomplex add(const ccomplex &&rhs) const
//	{
//	return ccomplex(real+rhs.real, imge+rhs.imge);
//	}*/
//	ccomplex operator+(const ccomplex &rhs) const
//	{
//		return ccomplex(real + rhs.real, imge + rhs.imge);
//	}
//	void print()
//	{
//		cout << real << " + " << imge << "i" << endl;
//	}
//};
//
//int main()
//{
//	int t, real, imge;
//	ccomplex res;
//
//	cin >> t;
//	while (t--)
//	{
//		cin >> real >> imge;
//		ccomplex c1(real, imge);
//		cin >> real >> imge;
//		ccomplex c2(real, imge);
//
//		res = c1.add(c2);
//		res.print();
//		c1.add(c1 + ccomplex(1, 2)).print();
//
//		res = c1 + c2;
//		res.print();
//	}
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	string str;
//
//	getline(cin, str, ',');
//	for (auto it = str.rbegin(); it != str.rend(); it++)
//		cout << *it;
//	system("pause");
//	return 0;
//}

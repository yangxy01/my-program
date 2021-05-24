#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Birth
{
	int y, m, d;
public:
	Birth(int yval = 0, int mval = 0, int dval = 0) :y(yval), m(mval), d(dval){}
	friend class IDcard;
};
class IDcard
{
	int type;
	string number;
	Birth Bir;
public:
	IDcard(int t, string n, int yval, int mval, int dval) :Bir(yval, mval, dval)
	{
		type = t;
		number = n;
	}
	IDcard(IDcard&obj)
	{
		if (obj.type == 2)
		{
			type = obj.type;
			number = obj.number;
			Bir = obj.Bir;
		}
		else
		{
			Bir = obj.Bir;
			type = 2;
			number = obj.number.substr(0, 6);
			number += to_string(obj.Bir.y);
			number += obj.number.substr(8, 7);
			int sum = 0;
			for (int i = 0; i < number.size(); i++)
			{
				string s = number.substr(i, 1);
				sum += stoi(s);
			}
			if (sum % 10 == 0)
				number += 'X';
			else
				number += to_string(sum%10);
		}
	}
	void display()
	{
		cout << "type=" << type<<" ";
		cout << "birth=" << Bir.y <<"."<< setfill('0') << setw(2)
			<< Bir.m << "." << setfill('0') << setw(2)
			<< Bir.d << endl<< "ID=" << number << endl;
	}

};

int main()
{
	int t, type, y, m, d;
	string num;
	cin >> t;
	while (t--)
	{
		cin >> type >> num >> y >> m >> d;
		IDcard id(type, num, y, m, d);
		IDcard newid(id);
		newid.display();
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;



////---------G. �����˻�����̬��Ա����Ԫ������---------
//class Account
//{
//	string name;
//	int AccountID;
//	static float rate;//����
//	static float total;//�ܶ�
//	float balance, deposit, withdraw;
//public:
//	Account(int id=0, string str="0") 
//	{
//		AccountID = id;
//		name = str;
//	}
//	void setbalance(float bal){ balance = bal; }
//	void setdeposit(float dep)
//	{ 
//		deposit = dep; 
//		balance += dep;
//	}
//	void setwithdraw(float wit)
//	{
//		withdraw = wit;
//		balance -= wit;
//	}
//	void show(){ cout << AccountID << " " << name; }
//	void showbalance()	{cout<< " " << balance ;}
//
//	friend void Update(Account& a);//�����Ϣ������
//	friend void print();//����ܶ�
//	static void setrate(float rate_val);
//	static void settotal(Account& a);
//	~Account(){}
//};
//float Account::rate = 0.0;
//float Account::total = 0.0;
//void Account::setrate(float rate_val){ rate = rate_val; }
//void Account::settotal(Account& a){ total += a.balance; }
//
//void Update(Account& a)//�����Ϣ������
//{
//	a.balance = a.balance + (a.balance)*Account::rate;
//}
//
//void print()
//{
//	cout << Account::total << endl;
//}
//
//int main()
//{
//	string name;
//	int AccountID,n;
//	float rate,balance, deposit, withdraw;
//	cin >> rate;
//	Account::setrate(rate);
//	cin >> n;
//	Account*pac = new Account[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> AccountID>>name>>balance>> deposit>> withdraw;
//		pac[i] = Account(AccountID, name);
//		pac[i].setbalance(balance);//�������
//		pac[i].show();//���������Ϣ
//		
//		pac[i].setdeposit(deposit);
//		pac[i].showbalance();//������
//		Update(pac[i]);//��Ϣ������
//		pac[i].showbalance();
//		pac[i].setwithdraw(withdraw);
//		pac[i].showbalance();
//		cout << endl;
//		Account::settotal(pac[i]);
//	}
//	print();
//	return 0;
//}




////----------F. ���ӻ���ң��������Ԫ�ࣩ----------
//class TV
//{
//	int state, volume, maxchannel, channel, mode, input;
//public:
//	TV(int s = 0, int v = 0, int c = 0, int m = 0, int in = 0, int mc = 0)
//	{
//		state = s;
//		volume = v;
//		channel = c;
//		mode = m;
//		input = in;
//		maxchannel = mc;
//	}
//	void onoff()
//	{
//		if (state == 0)
//			state = 1;
//		else
//			state = 0;
//	}
//	bool ison()
//	{
//		if (state == 0)
//			return false;
//		else
//			return true;
//	}
//	bool volup()
//	{
//		if (volume < 20)
//		{
//			volume++;
//			return true;
//		}
//		return false;
//	}
//	bool voldown()
//	{
//		if (volume >0)
//		{
//			volume--;
//			return true;
//		}
//		return false;
//	}
//	void chanup()	{channel++;}
//	void chandown()	{ channel--; }
//	void set_mode()	{ 
//		if (mode == 0)	mode = 1;
//		else mode = 0;
//	}
//	void set_input(){
//		if (input == 0)	input = 1;
//		else input = 0;
//	}
//	void settings()
//	{
//		if (state == 0)
//			cout << "off " << volume << " " << channel << " ";
//		else
//			cout << "on " << volume << " " << channel << " ";
//
//		if (mode == 0)
//			cout << "Cable ";
//		else
//			cout << "Antenna ";
//		if (input == 0)
//			cout << "VCR" << endl;
//		else
//			cout << "TV" << endl;
//	}
//	friend class Remote;
//};
//
//class Remote
//{
//	int mode;
//public:
//	Remote(int m) :mode(m){}
//	bool volup(TV& t){ return t.volup();}
//	bool voldown(TV&t){ return t.voldown(); }
//	void onoff(TV&t){ t.onoff(); }
//	void chanup(TV&t){ t.chanup(); }
//	void chandown(TV&t){ t.chandown(); }
//	void set_chan(TV&t, int c){ 
//		if (c<100)
//		t.channel = c; }
//	void set_mode(TV&t){ t.set_mode(); }
//	void set_input(TV&t){ t.set_input(); }
//};
//int main()
//{
//	int state=0, volume, channel, mode=0, input=0,maxchannel = 100;
//	string str1,str2,str3;
//	cin >> str1 >> volume >> channel >> str2>>str3;
//	if (str1 == "on")
//		state = 1;
//	if (str2 == "Antenna")
//		mode = 1;
//	if (str3 == "TV")
//		input = 1;
//	TV T(state, volume, channel, mode, input, maxchannel);
//	Remote R(mode);
//	string str;
//	if (state == 0)
//	{
//		for (int i = 0; i < 5; i++)
//		{
//			cin >> str;
//			if (str == "onoff")
//				R.onoff(T);
//			else if (str == "volup")
//				R.volup(T);
//			else if (str == "voldown")
//				R.voldown(T);
//			else if (str == "chanup")
//				R.chanup(T);
//			else if (str == "chandown")
//				R.chandown(T);
//			else if (str == "set_chan")
//			{
//				int c;
//				cin >> c;
//				R.set_chan(T, c);
//			}
//			else if (str == "set_mode")
//				R.set_mode(T);
//			else if (str == "set_input")
//				R.set_input(T);
//
//		}
//	}	
//	else
//	{
//		R.onoff(T);
//	}
//	T.settings();
//	return 0;
//}









////-----------E. ����ʱ��ϲ��������Ԫ������------------------
//class Time;
//class Date
//{
//	int year, month, day;
//public:
//	Date(int y, int m, int d) :year(y), month(m), day(d){}
//	friend void Display(Date &d, Time &t);
//};
//class Time
//{
//	int hour, min, sec;
//public:
//	Time(int h, int m, int s) :hour(h), min(m), sec(s){}
//	friend void Display(Date &d, Time &t);
//};
//
//void Display(Date &d, Time &t)
//{
//	cout << d.year << "-" << setfill('0') << setw(2) << d.month << "-"
//		<< setfill('0') << setw(2) << d.day <<" ";
//	cout << setfill('0') << setw(2) << t.hour << ":" 
//		<<setfill('0') << setw(2) << t.min<< ":" 
//		<<setfill('0') << setw(2) << t.sec << endl;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int year, month, day;
//		int hour, min, sec;
//		cin >> year >> month >> day;
//		Date D(year, month, day);
//		cin >> hour >> min >> sec;
//		Time T(hour, min, sec);
//		Display(D, T);
//	}
//	return 0;
//}










////-----------D. ������㣨��Ԫ������--------------
//class Distance;
//class Point
//{
//private:
//	double x, y;
//public:
//	Point(int x_value = 0, int y_value = 0) :x(x_value), y(y_value){}
//	friend double Distance(Point&a, Point&b);
//};
//
//double Distance(Point&a, Point&b)
//{
//	double dis;
//	dis = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
//	return dis;
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		Point A(x1, y1);
//		Point B(x2, y2);
//		int ret = Distance(A, B);
//		cout << ret << endl;
//	}
//	return 0;
//}




////-----------D. ������㣨��Ԫ������--------------
//class Distance;
//class Point;
//class Distance
//{
//	double dis;
//public:
//	Distance(){}
//	double getdis(Point&a, Point&b);
//};
//
//class Point
//{
//private:
//	double x, y;
//public:
//	Point(int x_value = 0, int y_value = 0) :x(x_value), y(y_value){}
//	friend double Distance::getdis(Point&a, Point&b);
//};
//
//double Distance::getdis(Point&a, Point&b)
//{
//	return dis = sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
//}
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int x1, y1, x2, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		Point A(x1, y1);
//		Point B(x2, y2);
//		Distance D;
//		int ret=D.getdis(A, B);
//		cout << ret << endl;
//	}
//	return 0;
//}




//---------C. ĸţ��Сţ����(��̬���ݳ�Ա�뾲̬��Ա����)---------
class Cow
{
	int year;
	static int count;
public:
	Cow(){ year = 0; }
	static void addcount();
	static void subcount();
	static void printcount();
	int age()
	{
		year++;
		if (year >= 4 && year <= 10)
			return 1;//������
		else if (year > 10)
			return 0;//ȥ��
		else
			return -1;
	}
};
int Cow::count = 1;
void Cow::addcount()
{
	count++;
}
void Cow::subcount()
{
	count--;
}
void Cow::printcount()
{
	cout << count << endl;
}

int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int k;//k��
		int num=1;
		cin >> k;
		Cow*p = new Cow[10000];
		int j = 0;
		int l = 0;
		for (int i = 0; i < k; i++)
		{
			for ( j=l; j < num; j++)
			{
				int ret = p[j].age();
				if (ret==1)//������
				{
					num++;
					Cow::addcount();
				}
				else if (ret==0)
				{
					l++;
					Cow::subcount();
				}
			}
		}
		Cow::printcount();

		delete[]p;
	}
	return 0;
}










////-----------B. �ù��ÿ͹�����̬��Ա��---------
//class Customer
//{
//	static int TotalCusNum;
//	static int Rent;
//	static int Year;
//	static int CustID;
//	char*CustName;
//public:
//	Customer(char*name = "no name")
//	{ 
//		CustName = new char[strlen(name) + 1];
//		strcpy(CustName, name);
//	}
//	~Customer()	{delete[]CustName;}
//	static void setyear(int y);
//	static void setCustID();
//	void setID(int count)	{ CustID = count; }
//	void Display()
//	{
//		cout << CustName << " " << Year << setfill('0')
//			<< setw(4) << CustID << " " << CustID << " " 
//			<< Rent*CustID << endl;
//	}
//
//};
//int Customer::Rent = 150;
//int Customer::TotalCusNum=0;
//int Customer::Year=0;
//int Customer::CustID=0;
//void Customer::setyear(int y){ Year = y; }
//void Customer::setCustID(){ CustID++; }
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int year;
//		cin >> year;
//		Customer::setyear(year);
//		char name[30];
//		while (1)
//		{
//			cin >> name;
//			if (strcmp(name, "0") == 0)
//				break;
//			Customer C(name);
//			Customer::setCustID();
//			C.Display();
//		}
//
//	}
//	return 0;
//}






////-------------A. ��߳ɼ�����̬��Ա��----------------
//class Student 
//{
//private:
//	int id;//ѧ��
//	int score; //�ɼ�
//	static int  maxscore;//��߷���
//	static int maxid;//��߷���ѧ��ѧ��
//public:
//	Student(int ti = 0, int ts = 0):id(ti), score(ts){}
//	static void findMax(Student & st); //Ѱ����߳ɼ���ѧ��
//	static int getMaxScore(); //������߳ɼ�
//	static int getMaxID();//������߳ɼ���ѧ��
//};
//int Student::maxscore = 0;
//int Student::maxid = 0;
//void Student::findMax(Student & st) //Ѱ����߳ɼ���ѧ��
//{
//	if (st.score > maxscore)
//	{
//		maxscore = st.score;
//		maxid = st.id;
//	}
//	return;
//}
//int Student::getMaxScore() //������߳ɼ�
//{
//	return maxscore;
//}
//int Student::getMaxID()//������߳ɼ���ѧ��
//{
//	return maxid;
//}
//
//
//int main()
//{
//	int n, id, score;
//	cin >> n;
//	while (n--)
//	{
//		cin >> id >> score;
//		Student S(id, score);
//		Student::findMax(S);
//	}
//	score = Student::getMaxScore();
//	id = Student::getMaxID();
//	cout << id << "--" << score << endl;
//	return 0;
//}
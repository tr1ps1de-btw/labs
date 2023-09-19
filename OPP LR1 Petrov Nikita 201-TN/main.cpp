#include<iostream>

using namespace std;

struct mult
{
	int first;
	double second;
	mult init(int f, double s);
	void Multiplay(int a);
	void Read();
	void Display();

};

int main() {
	mult qwe;
	qwe.Read();
	qwe.Multiplay(2);
	qwe.Display();
}

mult mult::init(int f, double s)
{
	mult temp;
	temp.first = f;
	temp.second = s;
	return temp;
}

void mult::Read()
{
	cout << "input first \t";
	cin >> first;
	cout << "input second \t";
	cin >> second;
}

void mult::Display()
{
	cout << "first=" << first << endl;
	cout << "second=" << second << endl;
}

void mult::Multiplay(int a)
{
	first *= a;
	second *= a;
}

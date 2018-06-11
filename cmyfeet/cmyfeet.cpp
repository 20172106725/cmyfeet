// cmyfeet.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	void setfeet(int f);
	void setinches(int ich);
	vivoid display();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int f)
{
	feet = f;
}
void CFeet::setinches(int ich)
{
	inches = ich%12;
	feet = feet + inches / 12;
}
void CFeet::display()
{
	cout << "" << feet << "" << inches << "" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyfeet :: public CFeet
{
public:
	void display();
};
void CMyfeet::display()
{
	cout 
}

int main()
{
    return 0;
}


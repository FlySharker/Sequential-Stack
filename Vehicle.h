#pragma once
#include"Assistance.h"
struct Vehicle
{
	string number;
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	Vehicle(string Number, int Year, int Month, int Day, int Hour, int Minute, int Second);
	friend ostream& operator<<(ostream& out, const Vehicle& va);
	friend istream& operator>>(istream& in, Vehicle& va);
};

Vehicle::Vehicle(string Number = "00000000", int Year = 2022, int Month = 12, int Day = 30, int Hour = 8, int Minute = 30, int Second = 50) :number(Number), year(Year), month(Month), day(Day), hour(Hour), minute(Minute), second(Second)
{

}

ostream& operator<<(ostream& out, const Vehicle& va)
{
	out << "车牌号：" << setw(8) << va.number << " 进场时间：" << setw(4) << va.year << "年" << setw(2) << va.month << "月" << setw(2) << va.day << "日" << setw(2) << va.hour << "时" << setw(2) << va.minute << "分" << setw(2) << va.second << "秒" << endl;
	return out;
}

istream& operator>>(istream& in, Vehicle& va)
{
	in >> va.number >> va.year >> va.month >> va.day >> va.hour >> va.minute >> va.second;
	return in;
}
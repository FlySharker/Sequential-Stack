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
	out << "���ƺţ�" << setw(8) << va.number << " ����ʱ�䣺" << setw(4) << va.year << "��" << setw(2) << va.month << "��" << setw(2) << va.day << "��" << setw(2) << va.hour << "ʱ" << setw(2) << va.minute << "��" << setw(2) << va.second << "��" << endl;
	return out;
}

istream& operator>>(istream& in, Vehicle& va)
{
	in >> va.number >> va.year >> va.month >> va.day >> va.hour >> va.minute >> va.second;
	return in;
}
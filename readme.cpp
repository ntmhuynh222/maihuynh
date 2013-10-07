#include "stdafx.h"
#include "date.h"
#include <iostream>
using namespace std;
date::date(){
	day=01;
	month=01;
	year=1900;
}
date::date(int d,int m,int y){
	if (isdate(d,m,y)){
		day=d;month=m;year=y;
	}
	else {day=01;
	month=01;
	year=1900;
	}
}
int date::get_day(){
	return day;
}
int date::get_month(){
	return month;
}
int date::get_year(){
	return year;
}
void date::set_day(int d,int m,int y){
	if(isdate(d,m,y))
		day=d;
}
void date::set_month(int d,int m, int y){
	if(isdate(d,m,y))
		month=m;
}
void date::set_year(int d, int m,int y){
	if(isdate(d,m,y))
		year=y;
}
void date::nhap(){
	do
	{
	cout<<"Nhap ngay, thang , nam: \n";
	cin>> day>>month>>year;
	}
	while(isdate(day,month,year)==0);
}
void date::xuat(){
	if(day<10)
		cout<<0<<day<<"/"<<month<<"/"<<year;
	if(month<10)
		cout<<day<<"/"<<0<<month<<"/"<<year;
	if(day<10&&month<10)
		cout<<0<<day<<"/"<<0<<month<<"/"<<year;
	else
		cout<<day<<month<<year;
}
int date::isdate(int d, int m, int y){
	int songay[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((month==2 )&& (year%4==0)&&(year>=1900)&&(day>0&&day<30))
		return 1;
	if((month>0) && (month<13) && (day>0)&&(day<=songay[month])&&(year>=1900))
		return 1;
	else
		return 0;
}
abc

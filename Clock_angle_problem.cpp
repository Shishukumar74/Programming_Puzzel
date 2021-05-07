#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findAngle(int hours, int minutes){
	int total_hours = (hours*360)/12 + (minutes*360)/(12*60);
	int total_minutes = (minutes*360)/60;
	int angle = abs(total_hours-total_minutes);
	if(angle>180){
		angle = 360-angle;
	}
	return angle;
}
int main()
{
	int hours = 5;
	int minutes = 30;
	cout<<findAngle(hours,minutes);
}


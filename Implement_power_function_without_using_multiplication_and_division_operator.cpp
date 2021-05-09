// Implement power function without using multiplication and division operators
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pow(int a, int b)
{
	if(b==0)
	return 1;
	int result = 0;
	int power = pow(a, b-1);
	for(int i=0;i<a;++i){
		result += power;
	}
	return result;
}
int main()
{
	cout<<pow(5,5);
}
	


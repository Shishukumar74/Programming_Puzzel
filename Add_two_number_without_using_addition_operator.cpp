// using substraction operator
#include<iostream>
using namespace std;
int add(int a, int b){
	return a - (-b);
}
int main(){
	cout<<add(4,4);
}

// using  logarithm and exponential function
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a = 7, b = 8;
	cout<<log(exp(a)*exp(b));
}

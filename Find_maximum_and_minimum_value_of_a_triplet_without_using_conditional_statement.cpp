#include<bits/stdc++.h>
using namespace std;
int maximum(int a, int b, int c){
	int max = a;
	max<b && (max=b);
	max<c && (max=c);
	return max;
}
int minimum(int a, int b, int c){
	int min = a;
	min>b && (min=b);
	min>c && (min=c);
	return min;
}
int main(){
	cout<<maximum(8, 9, 10)<<endl;
	cout<<minimum(3, 89, 45)<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int maximum(int a, int b, int c){
	int max = 0;
	while(a>0 || b>0 || c>0){
		a--, b--, c--, max++;
		
	}
	return max;
    
}
int minimum(int a, int b, int c){
	int min = 0;
	while(a && b && c){
		a--, b--, c--, min++;
	}
	return min;
}
int main()
{
	cout<<maximum(56, 567, 2345)<<endl;
	cout<<minimum(23,65,45)<<endl;
}
	




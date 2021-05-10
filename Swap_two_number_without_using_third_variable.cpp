#include<bits/stdc++.h>
using namespace std;
void swap(int &x, int &y){
	if(x != y){
	
	 x = x^y;
	 y = x^y;
	 x = x^y;
 }
}
int main(){
	int x = 10;
	int y = 20;
	swap(x, y);
	cout<<x<<"  "<<y;
}

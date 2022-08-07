#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1;
	string s2;
	string result;
	cout<<"enter the first text "<<endl;
	getline(cin,s1);
	cout<<"enter the second text "<<endl;
	getline(cin,s2);
	result=s1 + " "+s2;
	cout<<"the sum of two text is "<<endl;
	cout<<result;
	
}
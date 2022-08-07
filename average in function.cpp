#include<iostream>
using namespace std;
float average(float x,float y);
int main(){
	int arr[50];
	float size , total=0;
	cout<<"enter the size of array "<<endl;
	cin>>size;
	cout<<"enter the vales in array "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
		total=total+ arr[i];
	}
	cout<<"the average of array " <<average(total,size);
}
float average (float x,float y){
	float z;
	z=x/y;
	return z;
}
//*
//* *
//* * *
//* * * *
//* * * * *

#include<iostream>
using namespace std;
int main(){
	int i,n,j;
	
	cout<<"enter number of lines\n";
	cin>>n;
	
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	return 0;
}

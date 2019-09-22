#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,s=0,c=0,n1,n2;
	cout<<"enter integer x(0<x<1000) "; cin>>n;
	if((n<1)||(n>999)){
		printf("error");
	}else{
		for(i=1;i<=n/2;i++){
		if(n%i==0)
		s+=i;
	}
	if(s==n){
		cout<<"perfect number";
	}
	if(n%2==0){
		cout<<"even number";
	}
	if(sqrt((float)n)==(int)sqrt((float)n)){
		cout<<"square root";
	}
	if(n<10){
		cout<<" number has one digit";
	}
	if(n%2==1){
		cout<<" odd number";
	}
	if(n>100){
		cout<<" three-digit number";
	}
    if(n>=2){
	    for(i=2;i<=sqrt(n);i++){
			if(n%i==0)
			c++;
		}
		if(c==0){
			cout<<"\nprime number";
		}
    }
    n1=5*pow(n,2)+4;
    n2=n1-8;
    if(sqrt((float)n1)==(int)sqrt((float)n1)||sqrt((float)n2)==(int)sqrt((float)n2)){
    	cout<<"\nfibonacci number";
    }
	}
	return 0;
}

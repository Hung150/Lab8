#include<iostream>
#include<math.h>
using namespace std;
main(){
	double n1,n2,n3; 
	cout<<"enter first number: "; cin>>n1; 
	cout<<"enter second number: "; cin>>n2;
	cout<<"enter third number: "; cin>>n3;
	cout<<"Sum of the two largest numbers of the three numbers: "<<n1+n2+n3-fmin(fmin(n1,n2),n3);
}

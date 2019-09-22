#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b;
	cout<<"enter a"; cin>>a;
	cout<<"enter b"; cin>>b;
	if(a==b){ cout<<"new values of a and b = "<<0;
	}else{ cout<<"new values of a and b = "<<fmax(a,b);
	}
	return 0;
}

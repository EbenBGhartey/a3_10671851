#include<iostream>
using namespace std;

int gcd(int m, int n)
{
	if (m==0)
	return n;
	
	return gcd(n%m, m);
	
}

int main(){
	int m,n;
	cout<<"enter first number,"<<"  "<<"m=";
	cin>>m;
	
		cout<<"enter second number,"<<"  "<<"n=";
	cin>>n;
	cout<<"gcd ("<<m<<","<<n<<")="<<gcd(m,n)<<endl;
}


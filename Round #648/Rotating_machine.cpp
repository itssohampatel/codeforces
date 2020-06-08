#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	long n;
	cin>>n;
	long x;
	long r[n]={0};
	long p[n];

	for(long i=0;i<n;i++){
		cin>>x;
		p[x-1]=i;
	}
	for(long i=0;i<n;i++){
		cin>>x;
		p[x-1]-=i;
		if(p[x-1]<0)
			p[x-1]=n+p[x-1];
		r[p[x-1]]++;
	}
	
	long M1=0;
	for(long i=0;i<n;i++)
		if(r[i]>M1)M1=r[i];
		cout<<M1<<endl;
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int r[n]={0};
		int c[m]={0};
		int x;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				cin>>x;
				if (x==1){
					c[j]=1;
					r[i]=1;
				}
			}
		}
		int max=n>m?n:m;
		int rz=0,cz=0;
		for (int i = 0; i < max; ++i){
			if(i<n){
				rz+=!r[i];
			}
			if(i<m){
				cz+=!c[i];
			}
		}
		int min=rz>cz?cz:rz;
		cout<<(min%2?"Ashish":"Vivek")<<endl;
	}
	return 0;
}

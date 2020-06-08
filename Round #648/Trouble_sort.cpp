#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long n,x;
		cin>>n;
		int no=0;
		long last=-1;
		for (int i = 0; i < n; ++i){
			cin>>x;
			if (x>=last)
				last=x;
			else
				no=1;
		}
		int dif=0;
		if(no){
			last=-1;
			for(int i = 0; i < n; ++i){
				cin>>x;
				if(i==0){
					last=x;
				}else if(dif==0){
					if (last!=x){
						dif=1;
					}
				}
			}
		}else for (int i = 0; i < n; ++i)cin>>x;
		cout<<((no==0 || dif==1)?"Yes":"No")<<endl;
	}
	return 0;
}

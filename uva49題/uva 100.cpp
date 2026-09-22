#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,n=1;
	while(cin>>i>>j){
		n=1;
		cout<<i<<' '<<j<<' ';
		for(int k=min(i,j);k<=max(i,j);k++){
			int kj=k,kn=1;
			while(kj!=1){
				if(kj%2==1){
					kj=kj*3+1;
				}else{
					kj/=2;
				}
				kn+=1;
			}
			n=max(n,kn);
		}
		cout<<n<<endl;
	}
	return 0;
}
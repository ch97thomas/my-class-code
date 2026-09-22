#include<bits/stdc++.h>
using namespace std;
int main(){
	string word;
	int cc=0;
	while(getline(cin,word)){
		for(int i=0;i<(int)word.length();i++){
			if(word[i]=='"'){
				if(cc==0){
					cout<<"``";
					cc=1;
				}else{
					cout<<"''";
					cc=0;
				}
			}else{
				cout<<word[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
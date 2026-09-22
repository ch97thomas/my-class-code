#include<bits/stdc++.h>
using namespace std;
void di(char &dir0,int &dir1){
	if(dir0=='N'){
		dir1=0;
	}else if(dir0=='W'){
		dir1=1;
	}else if(dir0=='S'){
		dir1=2;
	}else{
		dir1=3;
	}
}
int main(){
	int dir[4][2]={{0,1},{-1,0},{0,-1},{1,0}};
	int x,y,x1,y1,dir1=0,cc=0;
	char dir0=0;
	string instr;
	cin>>x>>y;
	vector<vector<int>> a;
	while(cin>>x1>>y1>>dir0>>instr){
		di(dir0,dir1);
		for(int i=0;i<(int)instr.length();i++){
			if(instr[i]=='R'){
				dir1=(dir1+3)%4;
			}else if(instr[i]=='L'){
				dir1=(dir1+1)%4;
			}else{
				if((x1+dir[dir1][0])>x || (x1+dir[dir1][0])<0 || (y1+dir[dir1][1])>y || (y1+dir[dir1][1])<0){
				    for(int j=0;j<(int)a.size();j++){
				    	if(x1==a[j][0]&&y1==a[j][1]){
				    		cc=1;
				    		break;
				    	}
				    }
				    if(cc==1){
				    	cc=0;
				    	continue;
				    }else{
				    	a.push_back({x1,y1});
				    	cout<<x1<<' '<<y1<<' ';
				    	if(dir1==0){
				    		cout<<"N LOST"<<endl;
				    	}else if(dir1==1){
				    		cout<<"W LOST"<<endl;
				    	}else if(dir1==2){
				    		cout<<"S LOST"<<endl;
				    	}else{
				    		cout<<"E LOST"<<endl;
				    	}
				    	cc=1;
				    	break;
				    }	
				}else{
					x1+=dir[dir1][0];
					y1+=dir[dir1][1];
				}
			}
			
		}
		if(cc==0){
			cout<<x1<<' '<<y1<<' ';
			if(dir1==0){
				cout<<"N"<<endl;
			}else if(dir1==1){
				cout<<"W"<<endl;
			}else if(dir1==2){
				cout<<"S"<<endl;
			}else{
				cout<<"E"<<endl;
			}
		}else{
			cc=0;
		}
	}
	return 0;
}
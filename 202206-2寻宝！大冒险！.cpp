#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,L,S;
	scanf("%d %d %d",&n,&L,&S);
	int arr[n][2];
	for(int i=0;i<n;++i){
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	}
	int B[S+1][S+1];
	for(int i=S;i>=0;--i){
		for(int j=0;j<S+1;++j){
			scanf("%d",&B[i][j]);
		}	
	}
	int A[n][n]={0};
	for(int i=0;i<n;++i){
		A[arr[i][0]][arr[i][1]]=1;
	}
	int ans=0;
	bool flag=true;
	for(int i=0;i<n-S;++i){
		for(int j=0;j<=S;++j){
			if(A[arr[i][0]+i][arr[i][1]+j]!=B[i][j]){
				flag=false;break;
			}
		}
		if(flag)++ans;
		flag=true;
	}
	printf("%d",ans);
	return 0;
}

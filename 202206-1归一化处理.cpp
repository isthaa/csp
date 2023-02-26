#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<n;++i){
    	scanf("%d",&arr[i]);
    	sum+=arr[i];
	}
    double avg=sum*1.0/n;
    double dd=0;
	for(int i=0;i<n;++i){
		dd+=(arr[i]-avg)*(arr[i]-avg);
	}
	double D=dd/n;
    double ans[n];
    for(int i=0;i<n;++i){
    	ans[i]=(arr[i]-avg)/pow(D,0.5);
	}
	for(int i=0;i<n;++i){
		printf("%f\n",ans[i]);
	}
    return 0;
}

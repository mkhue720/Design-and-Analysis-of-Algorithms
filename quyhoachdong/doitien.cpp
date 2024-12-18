// code by NMK
#include <bits/stdc++.h>
using namespace std;
int C[100][1000]={},a[100],n,M;
void trace(int n,int M) {
	if(C[n][M]==0) return;
	while(C[n][M]==C[n-1][M]) n--;
	trace(n,M-a[n]);
	cout<<a[n]<<" ";
}
int main() {
	cin>>n>>M; 
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=M;j++) C[0][j]=1e9;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=M;j++) {
		if(j<a[i]) C[i][j]=C[i-1][j];
		else C[i][j]=min(C[i-1][j],1+C[i][j-a[i]]);
	}
	if(C[n][M]==1e9) cout<<"\nKhong doi duoc";
	else {
		cout<<"\nSo to it nhat "<<C[n][M]<<"\n";
		trace(n,M);
	}
}


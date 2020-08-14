#include <bits/stdc++.h>
#define SLAY ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define PI 3.141592653589793238
#define ll long long
#define pii pair<int , int>
#define pll pair<long long , long long>
using namespace std;
int _=1 , tc=1;
int dx[] = { 0 , 0 , 1 , -1};
int dy[] = { 1 , -1 , 0 , 0};
int getmod(int x, int y , int mod ){return (((x - y)%mod)+mod)%mod;}
int MAXN = 46341 + 1;
int spf[46341+1];
int d,x,y;
int gcd(int a , int b){
	if(b==0)return a;
	return gcd(b , a%b);
}
void sieve(){
	for(int i = 1 ; i<MAXN ; i++)spf[i]=i;
	for(int i = 4 ; i<MAXN ; i+=2)spf[i]=2;
	for(int i = 3; i*i<MAXN; i+=2){
		if(spf[i]==i){
			for(int j = i*i ; j<MAXN ; j+=i){
				if(spf[j]==j)spf[j]=i;
			}
		}
	}
}
void extended_gcd(int a , int b){
	if(b==0){
		d=a;
		x=1;
		y=0;
	}else{
		extended_gcd(b,a%b);
		int temp = y;
		y = x - y * (a/b);
		x = temp;	
	}
}
ll gcd(ll a , ll b){
	if(b==0)return a;
	return gcd(b , a%b);
}
ll lcm(ll a, ll b){  
    return (a*b)/gcd(a, b);  
}
void solve(){
	ll r,g,b,w;
	cin>>r>>g>>b>>w;
	bool ok = false , take = false;
	if(g && r && b)take = true;
	
	if(g%2==0 && b%2==0 && w%2==0){
		ok=true;
	}
	if(take){
		if((g-1)%2==0 && (b-1)%2==0 && (w+1)%2==0){
			ok=true;
		}
	}
	
	if(r%2==0 && b%2==0 && w%2==0){
		ok=true;
	}
	if(take){
		if((r-1)%2==0 && (b-1)%2==0 && (w+1)%2==0){
			ok=true;
		}
	}
	
	if(r%2==0 && g%2==0 && w%2==0){
		ok=true;
	}
	if(take){
		if((r-1)%2==0 && (g-1)%2==0 && (w+1)%2==0){
			ok=true;
		}
	}
	
	if(r%2==0 && b%2==0 && g%2==0){
		ok=true;
	}
	if(take){
		if((r-1)%2==0 && (b-1)%2==0 && (g-1)%2==0){
			ok=true;
		}
	}
	
	if(ok)cout<<"Yes";
	else cout<<"No";
	cout<<endl;
	
}
int main(){
	SLAY
	cin>>_;
	while(_--){
		solve();
	}
	return 0;
}
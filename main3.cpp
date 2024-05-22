#include<iostream>
#include<vector>
#define N 1000000
#define ll long long
using namespace std;
void primeSieve(vector<int> &sieve){

	for(int i=1; i<=N; i++){
		sieve[i] = i;
	}
	for(ll i=2; i<=N; i++){
		if(sieve[i]==i){
			for(ll j= i*i; j<=N; j = j + i){
				if(sieve[j]==j){
					sieve[j] = i;
				}
			}
		}
	}

}


int factorOpt(int number, vector<int> &sieve){
	int cnt=0;
	while(number!=1){
		cnt++;
		number = number/sieve[number];
	}
	return cnt;
}


int main(){
    vector<int> sieveArr(N+1,0);
	primeSieve(sieveArr);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int cnt=0;
		for(int i=b+1;i<=a;i++)
		{
			cnt+=factorOpt(i,sieveArr);
		}
		cout<<cnt<<endl;
	}
	

	return 0;
}
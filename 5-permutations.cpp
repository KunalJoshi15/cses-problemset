#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ll n;
	cin>>n;
	if(n<=4){
		if(n==1){
			cout<<"1";
		}
		if(n==4){
			cout<<"2 4 1 3";
		}
		if(n==2||n==3){
			cout<<"NO SOLUTION";
		}
		return 0;
	}
	if(n%2==0){
		int temp = n;
		while(temp!=0){
			cout<<temp<<" ";
			temp = temp-2;
		}
		while(n>0){
			cout<<(n-1)<<" ";
			n = n-2;
		}
	}
	else{
		int temp = n-1;
		while(temp!=0){
			cout<<temp<<" ";
			temp = temp-2; 
		}
		while(n>0){
			cout<<n<<" ";
			n=n-2;
		}
	}
	return 0;
}
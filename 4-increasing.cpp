#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	vector<ll> arr;
	for(int i=0;i<n;i++){
		ll temp;
		cin>>temp;
		arr.push_back(temp);
	}

	ll count=0;
	for(ll i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			count +=  arr[i-1]-arr[i];
			arr[i]=arr[i-1];
		}
	}
	cout<<count;
	return 0;
}
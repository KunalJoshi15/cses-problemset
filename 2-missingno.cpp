#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
	ll n;
	cin>>n;
	vector<ll> arr;
	unordered_set<ll> m;
	for(ll i=0;i<=n-2;i++){
		ll temp;
		cin>>temp;
		arr.push_back(temp);
		m.insert(arr[i]);
	}
	for(ll i=1;i<=n-1;i++){
		if(m.find(i)==m.end()){
			cout<<i;
			return 0;
		}
	}
	cout<<n;
	return 0;
}
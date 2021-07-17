#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
	string s;
	cin>>s;
	int count=1;
	int max_count=INT_MIN;
	for(ll i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			count++;
		}else{
			count=1;
		}
		max_count = max(count,max_count);
	}
	if(max_count==INT_MIN) cout<<count;
	else cout<<max_count;
	return 0;
}
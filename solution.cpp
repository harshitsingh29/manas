#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define endl "\n"
#define r(n) ll n; cin>>n;
#define vl vector<ll>
#define all(x) (x).begin(),(x).end()
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
const ll MOD = 1e9 + 7;
string A="YES";
string B="NO";

void solution()
{
	int n, k; 
	cin>>n>>k;
	vector<int>v(n);
	ll sum = 0;
	for(int i = 0; i < n; i++) {
		cin>>v[i];
		sum += v[i];
	} 
	sort(v.begin(), v.end());
	int i = 0, j = 1, q = n-1;
	for(int t = 0; t < k; t++) {
		if(v[i] + v[j] < v[q]) {
			sum -= (v[i] + v[j]);
			i+=2;
			j+=2;
		}
		else {
			sum -= v[q];
			q--;
		}
	}
	cout<<sum<<endl;
}

int32_t main()
{

    IOS;

    ll t;
    cin>>t;
    while(t--)
    {
        solution();
    }
    return 0;
}

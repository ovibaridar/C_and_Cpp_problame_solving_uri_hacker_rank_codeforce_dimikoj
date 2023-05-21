#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
	#include "dbg.h"
#else
	#define out(...) 42;
#endif

void solve() {
	int n;
	cin>>n;
	vector<int>v(n);
	int cnt = 0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if (v[i] != 1) ++cnt;
	}

	if (cnt & 1) {
		cout << "-1\n";
		return;
	}
	if (cnt > 1) cnt = cnt / 2;
	for (int i = 0; i < n; ++i) {
		if (v[i] == 2) --cnt;
		if (!cnt) {
			cout << i + 1 << endl;
			return;
		}
	}
	// if(n==2){
	// 	if(v[0]==v[1]){
	// 		cout<<1<<endl;
	// 		return ;
	// 	}
	// 	else{
	// 		cout<<-1<<endl;
	// 		return ;
	// 	}
	// }
	// vector<int>fst,snd;
	// int a=1;
	// for(int i=0;i<n;i++){
	// 	a=a*v[i];
	// 	fst.push_back(a);
	// }
	// a=1;
	// for(int i=n-1;i>=0;i--){
	// 	a=a*v[i];
	// 	snd.push_back(a);
	// }

	//out(fst);
	// sort(snd.begin(),snd.end(), greater<int>());
	// //out(snd);
	// int c=5000;

	// for(int i=0;i<n-1;i++){
	// 	if(fst[i]==snd[i+1]){
	// 		c=min(c,i+1);
	// 	}
	// }

	// if(c==5000){
	// 	cout<<-1<<endl;
	// }
	// else if(c==n){
	// 	cout<<-1<<endl;
	// }
	// else{
	// 	cout<<c<<endl;
	// }

}

signed main() {
	ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long int tc=1;
    cin >> tc;

    for (int i = 1; i <= tc; ++i)
        solve ();
}

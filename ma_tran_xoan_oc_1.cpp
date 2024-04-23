#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >>n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		int h1 = 0, h2 = n - 1;
		int c1 = 0, c2 = m - 1;
		while(h1 <= h2 && c1 <= c2){
		// xay dung hang tren
			for(int i = c1; i <= c2; i++){
				cout << a[h1][i] << " ";
			}
			h1++;
			// xay dung cot ben phai
			for(int i = h1; i <= h2; i++){
				cout << a[i][c2] << " ";
			}
			c2--;
			//xay dung hang ben duoi
			if(h1 <= h2){
				for(int i = c2; i >= c1; i--){
					cout << a[h2][i] << " ";
				}
				h2--;
			}
			// xay dung cot ben trai
			if(c1 <= c2){
				for(int i = h2; i >= h1; i--){
					cout << a[i][c1] << " ";
				}
				c1++;
			}
		}
		cout << endl;
	}
	return 0;
}
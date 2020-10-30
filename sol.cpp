#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int mx = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i < j) {
					mx = max(mx, a[i] + a[j]);
				}
			}
		}
		int n1 = 0, n2 = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i < j) {
					if (a[i] + a[j] == mx) {
						n1++;
					}
					n2++;
				}
			}
		}
		cout << fixed << setprecision(8) << (double) n1 / n2 << '\n';
	}
	return 0;
}

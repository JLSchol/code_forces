#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int w;

		cin >> w;
		// ternary operator
		// variable = (condition) ? expressionTrue : expressionFalse;
		cout << (w % 2 == 0 && w != 2 ? "YES" : "NO");

		// shorthand 
		// if (w % 2 == 0 && w != 2) cout << "YES";
		// else cout << "NO";

		// normal 
		// if (w % 2 == 0 && w != 2) {
		// 	cout << "YES";
		// }
		// else{
		// 	cout << "NO";
		// }

		return 0;
}

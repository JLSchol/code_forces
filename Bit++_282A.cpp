#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n;
	int x = 0;
	string statement;

	cin >> n; 
	for (int i = 0; i < n; i++){
		cin >> statement;
		(statement[1] == '+') ? x++ : x--;
	}
	cout << x;

	return 0;
}

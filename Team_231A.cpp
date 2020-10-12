#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int n, petya, basya, tonya;
		cin >> n;

		int solved_problems = 0;

		for (int i = 0; i < n; i++){
			cin >> petya >> basya >> tonya;
			if (petya+basya+tonya > 1){
				solved_problems++;
			}
		}
		cout << solved_problems;

	return 0;
}
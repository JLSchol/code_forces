#include <bits/stdc++.h>
// C:\MinGW\lib\gcc\mingw32\9.2.0\include\c++
using namespace std;


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

		int n, k;
		int next_round = 0;

		cin >> n >> k;

		int ar[50]; std::string str;
		int score;
		for (int i = 0; i < n; i++){
			cin >> ar[i];

			score = ( i + 1 >= k) ? ar[k - 1] : ar[i];
			
			if (ar[i] >= score && score > 0){
				next_round++;
			}
		}
		cout << next_round;


	return 0;
}

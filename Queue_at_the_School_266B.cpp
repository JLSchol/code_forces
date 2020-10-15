#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int n, time;  // 1<= n children, t<=50 seconds
	cin >> n >> time; // 5, 1

	string arrangement; // arrangment boys and girls
	cin >> arrangement; // BGGBG

	// every second girls move one step closer to start and overtake boys
	string new_arrangement = arrangement;
	if (time == 0){
		cout << arrangement;
	}
	else{
		for (int ts = 1; ts <= time; ts++){
			for (int i = 0; i < n; i++){
				if (arrangement[i] == 'B' && arrangement[i+1] == 'G'){
					new_arrangement[i] = 'G';
					new_arrangement[i+1] = 'B';
					i++; // Skip an extra char if the switch is made! optimiziation
				}
				// Without using an extra array!
    			// if(arrangement[i]=='B' && arrangement[i+1]=='G'){
    			// 	char temp=arrangement[i];
    			// 	arrangement[i]=arrangement[i+1];
    			// 	arrangement[i+1]=temp;
    			// 	i++;
    			// }
			}
			if (new_arrangement == arrangement){
				break; // no need to continue, fully sorted
			}
			else{
				arrangement = new_arrangement;
			}
		}
		cout << new_arrangement; // GBGGB
	}

	return 0;
}

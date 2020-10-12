#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int nr; 
	cin >> nr;
	
	string word;
	for(int i = 0; i < nr; i++){

		cin >> word;

		int word_len = word.size();
		if (word_len > 10){
			cout << word[0] << word_len-2 << word[word_len -1] << "\n";
		}
		else{
			cout << word << "\n";
		}
	}



		return 0;
}

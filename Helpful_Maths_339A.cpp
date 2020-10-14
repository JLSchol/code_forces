#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	string str; 
	cin >> str; // 3+2+1+2

	// get numbers only and sort small to large
	str.erase(remove(str.begin(), str.end(), '+'), str.end());
	sort(str.begin(), str.end());

	// add '+' back and return
	cout << str[0];
	for (int i = 1, n = str.size(); i < n; i++){
		cout << '+' << str[i];
	}

	return 0;
}

/* 
remove() doesn't actually delete elements from the container -- 
it only shunts non-deleted elements forwards on top of deleted elements. 
The key is to realise that remove() is designed to work on not just a container but on any arbitrary forward iterator pair: 
that means it can't actually delete the elements, 
because an arbitrary iterator pair doesn't necessarily have the ability to delete elements.
*/

/* 
str = 3+2+1+2
remove(str.begin(), str.eind() , '+') moves all '+'  to the end of container for given range --> 3212+++ 
returns an iterator to the element that follows the last element not removed --> remove(str.begin(), str.eind() , '+') = 4

str.erase(str.start(), str.end()) removes start and end of range you want to get rid off and change the actual size: str.erase(4,6) = 3212
*/


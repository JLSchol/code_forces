#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int n, k; // n number of problems, k minutes to travel to home from contest
	cin >> n >> k; // 10 136

	// contest start at 20:00, want to be home at 24:00
	// needs 5*i minutes to solve the ith problem
	// need k minutes to cycle to home
	// wants to be home at <=24:00
	// how many problems can het solve with max of n problems

	int contest_time = 4*60 - k;
	int problems = 0; 
	int problem_time = 0; 
	do{
		problems++;
		problem_time += 5*problems;		
	}
	while(problem_time <= contest_time && problems <= n);

	// while ( (problem_time + (problems+1)*5 <= contest_time) && (problems+1 <= n) ){
	// 	problems++;
	// 	problem_time += 5*problems;
	// }

	// or use for loop
	// for (int i = 1; i <= n; i++){
	// 	problem_time += 5*i;
	// 	if (problem_time > contest_time) break;
	// 	problems = i;
	// }

	cout << problems; // 5

	return 0;
}

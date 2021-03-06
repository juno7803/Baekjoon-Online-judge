#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int A[1001];
	int DP[1001];

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		DP[i] = 1;
	}

	int length = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (A[i] > A[j] && DP[j]+1 > DP[i])
			{
				DP[i] = DP[j]+1;
			}
		}
		length = max(length, DP[i]);
	}

	cout << length << endl; 
	return 0;
}

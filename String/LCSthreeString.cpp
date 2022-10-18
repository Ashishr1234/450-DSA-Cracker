#include<bits/stdc++.h>
using namespace std;

	string X = "AGGT12";
	string Y = "12TXAYB";
	string Z = "12XBA";

int dp[100][100][100];

/* Returns length of LCS for X[0..m-1], Y[0..n-1]
and Z[0..o-1] */
int lcsOfThreeString(int i, int j,int k)
{
	if(i==-1||j==-1||k==-1)
		return 0;
	if(dp[i][j][k]!=-1)
		return dp[i][j][k];
	
	if(X[i]==Y[j] && Y[j]==Z[k])
		return dp[i][j][k] = 1+lcsOfThreeString(i-1,j-1,k-1);
	else
		return dp[i][j][k] = max(max(lcsOfThreeString(i-1,j,k),
							lcsOfThreeString(i,j-1,k)),lcsOfThreeString(i,j,k-1));
}

// Driver code
int main()
{
	memset(dp, -1,sizeof(dp));
	int m = X.length();
	int n = Y.length();
	int o = Z.length();

	cout << "Length of LCS is " << lcsOfThreeString(m-1,n-1,o-1);

}

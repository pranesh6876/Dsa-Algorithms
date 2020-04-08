#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int topdowndp(int n, int *dp)
{
	if(n==0||n==1)
	{
		dp[n]=n;
		return n;
	}
	else
	{
		if (dp[n]!=-1)
		{
			return dp[n];
		}

		return dp[n]=topdowndp(n-1,dp)+topdowndp(n-2, dp);
	}

}

int bottomupdp(int n)
{
	int *dp = new int[n];
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int bottomupOpt(int n)
{
	int a=0,b=1;
	int c;
	for(int i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

int main()
{
	int dp[100];
	int n=9;
	cout<<fib(n)<<endl;
	for(int i=0;i<100;i++)
	{
		dp[i]=-1;
	}
	cout<<topdowndp(n,dp)<<endl;
	cout<<bottomupdp(n)<<endl;
	cout<<bottomupOpt(n);
}

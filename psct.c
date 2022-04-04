#include<stdio.h>
using namespace std;
const int N = 100002;
int n, m, k, p, q, ans, t, l, r, sum, tot, cnt, a[N], b[N], c[N], d[N], f[N][2];
inline int rd()
{
	int f = 1, x = 0;
	char ch = getchar();
	while (ch < '0' || ch > '9')
	{
		if(ch == '-') f = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9')
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
int calc1() // a1 < a2 > a3 < a4 > a5 < a6
{
	f[1][0] = 0; f[1][1] = 1;
	for (int i = 2; i <= (n + 1) / 2; i++)
	{
		int j = n - i + 1; f[i][0] = f[i][1] = 1e9;
		if(i % 2 == 1 && j % 2 == 1)
		{
			if(a[i] > a[i - 1] && a[j] > a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] > a[j + 1] && a[j] > a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] > a[i - 1] && a[i] > a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] > a[j + 1] && a[i] > a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
		if(i % 2 == 1 && j % 2 == 0)
		{
			if(a[i] > a[i - 1] && a[j] < a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] > a[j + 1] && a[j] < a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] > a[i - 1] && a[i] < a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] > a[j + 1] && a[i] < a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
		if(i % 2 == 0 && j % 2 == 1)
		{
			if(a[i] < a[i - 1] && a[j] > a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] < a[j + 1] && a[j] > a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] < a[i - 1] && a[i] > a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] < a[j + 1] && a[i] > a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
		if(i % 2 == 0 && j % 2 == 0)
		{
			if(a[i] < a[i - 1] && a[j] < a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] < a[j + 1] && a[j] < a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] < a[i - 1] && a[i] < a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] < a[j + 1] && a[i] < a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
	}
	return min(f[(n + 1) / 2][0], f[(n + 1) / 2][1]);
}
int calc2() // a1 > a2 < a3 > a4 < a5 > a6
{
	f[1][0] = 0; f[1][1] = 1;
	for (int i = 2; i <= (n + 1) / 2; i++)
	{
		int j = n - i + 1; f[i][0] = f[i][1] = 1e9;
		if(i % 2 == 1 && j % 2 == 1)
		{
			if(a[i] < a[i - 1] && a[j] < a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] < a[j + 1] && a[j] < a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] < a[i - 1] && a[i] < a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] < a[j + 1] && a[i] < a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
		if(i % 2 == 1 && j % 2 == 0)
		{
			if(a[i] < a[i - 1] && a[j] > a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] < a[j + 1] && a[j] > a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] < a[i - 1] && a[i] > a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] < a[j + 1] && a[i] > a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
		if(i % 2 == 0 && j % 2 == 1)
		{
			if(a[i] > a[i - 1] && a[j] < a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] > a[j + 1] && a[j] < a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] > a[i - 1] && a[i] < a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] > a[j + 1] && a[i] < a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
		if(i % 2 == 0 && j % 2 == 0)
		{
			if(a[i] > a[i - 1] && a[j] > a[j + 1]) f[i][0] = min(f[i][0], f[i - 1][0]);
			if(a[i] > a[j + 1] && a[j] > a[i - 1]) f[i][0] = min(f[i][0], f[i - 1][1]);
			if(a[j] > a[i - 1] && a[i] > a[j + 1]) f[i][1] = min(f[i][1], f[i - 1][0] + 1);
			if(a[j] > a[j + 1] && a[i] > a[i - 1]) f[i][1] = min(f[i][1], f[i - 1][1] + 1);
		}
	}
	return min(f[(n + 1) / 2][0], f[(n + 1) / 2][1]);
}
int main()
{
	int T = rd();
	while (T--)
	{
		n = rd();
		for (int i = 1; i <= n; i++) a[i] = rd();
		if(n == 1 || n == 2)
		{
			if(n == 2 && a[1] == a[2]) puts("-1");
			else puts("0");
			continue;
		}
		ans = calc1();
		ans = min(ans, calc2());
		if(ans ==  1e9) puts("-1");
		else cout << ans << endl;
	}
	return 0;
}
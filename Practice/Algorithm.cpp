#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define ll long long
#define INF 1000000007
#define INTINF 2147483647
ll gcd(ll a, ll b) { return a % b ? gcd(b, a % b) : b; }
ll lcm(ll a, ll b)
{
    int g = gcd(a, b);
    return (a * b) / g;
}
using namespace std;
bool compare(const pair<int, string> &a, const pair<int, string> &b)
{
   
    return a.first < b.first;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int N;
    scanf("%d", &N);
    vector<string> sortIt[201];
    FOR(i, N)
    {
     
    }
    
    for (int i = 0; i < sortIt.size(); i++)
    {
        cout << sortIt[i].first << " " << sortIt[i].second << "\n";
    }

    return 0;
}
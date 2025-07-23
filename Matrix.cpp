#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define INF 10000000
#define ull unsigned long long
#define ll long long
#define MAX 11+4
 
ull m[MAX][MAX], s[MAX][MAX], value[MAX]
ull Solve(int i, int j) {
    if (m[i][j] != INF)
        return m[i][j];
    ull cur = 0;
    for (int k = i; k <= j - 1; k++){
        // Текущее = до k + от k+1  + стоимость перемножения матриц k * k+1
        cur = Solve(i,k) + Solve(k+1,j) + (value[k] * value[j] * value[i-1]);
        if (cur < m[i][j]){
            m[i][j] = cur;
            s[i][j] = k;
        }
    }
    return m[i][j];
}
//функция для печати
string get_string(int left, int right)
{
 return (left == right) ? ("A" + to_string(left)) : ("("+get_string(left,s[left][right])+" x "+get_string(s[left][right]+1,right)+")");
}
int main() {

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    ll n;
    cin>>n;
    for(ll i = 0;i<MAX;i++)
        for(ll j = 0;j<MAX;j++)
            m[i][j]= (i==j) ? 0: INF;
 
    for (ll i = 1; i <= n; i++) {
        cin >> value[i-1];
        cin >> value[i];
    }
    Solve(1, n);
    сout <<(m[1][n]) << "\n";
    cout << ( (n==1) ? "(A1)" :  get_string(1,n));
    return 0;
}

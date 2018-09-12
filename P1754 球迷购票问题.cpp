#include<iostream>
#include<cstdio>
#define ll long long 
#define E 23
using namespace std ;
ll n , f[E] ; 
int main()
{
    cin >> n ;
    f[0] = 1 ; f[1] = 1 ;
    for(int i = 2; i <= n ;i ++)
    for(int j = 0 ;j  < i  ; j ++)
    f[i] += f[j] * f[i - j - 1] ;
    cout << f[n] <<endl;
    return 0 ;
}
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mxx 10010
char T[mxx];
ll RA[mxx], tempRA[mxx];
ll SA[mxx], tempSA[mxx];
ll c[mxx],n;
ll Phi[mxx];
ll PLCP[mxx];
ll LCP[mxx];

void countingSort(ll k)
{
    ll i, sum, maxi = max(300ll, n);
    memset(c, 0, sizeof c);
    for (i = 0; i < n; i++)
        c[i + k < n ? RA[i + k] : 0]++;
    for (i = sum = 0; i < maxi; i++)
    {
        ll t = c[i];
        c[i] = sum;
        sum += t;
    }
    for (i = 0; i < n; i++)
        tempSA[c[SA[i]+k < n ? RA[SA[i]+k] : 0]++] = SA[i];
    for (i = 0; i < n; i++)
        SA[i] = tempSA[i];
}

void constructSA()
{
    ll i, k, r;
    for (i = 0; i < n; i++) RA[i] = T[i];
    for (i = 0; i < n; i++) SA[i] = i;
    for (k = 1; k < n; k <<= 1)
    {
        countingSort(k);
        countingSort(0);
        tempRA[SA[0]] = r = 0;
        for (i = 1; i < n; i++)
            tempRA[SA[i]] =
                (RA[SA[i]] == RA[SA[i-1]] && RA[SA[i]+k] == RA[SA[i-1]+k]) ? r : ++r;
        for (i = 0; i < n; i++)
            RA[i] = tempRA[i];
        if (RA[SA[n-1]] == n-1) break;
    }
}

void computeLCP()
{
    ll i, L;
    Phi[SA[0]] = -1;
    for (i = 1; i < n; i++)
        Phi[SA[i]] = SA[i-1];
    for (i = L = 0; i < n; i++)
    {
        if (Phi[i] == -1)
        {
            PLCP[i] = 0;
            continue;
        }
        while (T[i + L] == T[Phi[i] + L]) L++;
        PLCP[i] = L;
        L = max(L-1, 0ll);
    }
    for (i = 0; i < n; i++)
        LCP[i] = PLCP[SA[i]];
}

int main()
{
    ll tst;
    scanf("%lld",&tst);
    for(ll tt=1; tt<=tst; tt++)
    {
        scanf("%s",T);
        n=strlen(T);
        ll p,q;
        scanf("%lld %lld",&p,&q);
        if(p>q)swap(p,q);

        T[n++] = '$';
        constructSA();
        computeLCP();
        ll res=0;p--;
        for (ll i = 0; i < n; i++)
        {
            ll val = (n-1)-SA[i]-max(LCP[i],p)-((n-1-SA[i])>=q?(n-1-SA[i]-q):0);
            res+=max(0ll,val);
        }
        printf("Case %lld: %lld\n",tt,res);
    }
}

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//#include<bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <assert.h>
#include <new>
#include <sstream>
#include <time.h>


using    namespace __gnu_pbds;
using namespace std;


/*** Typedef ***/
typedef long long ll;
typedef unsigned long long ull;



/*** Input ***/
#define sci1(a) scanf("%d",&a)
#define sci2(a,b) scanf("%d %d",&a,&b)
#define scln1(a) scanf("%lld",&a)
#define scln2(a,b) scanf("%lld %lld",&a,&b)


/*** Output ***/
#define pf1(a) printf("%d\n",a)
#define pf2(a,b) printf("%d %d\n",a,b)
#define pfln1(a) printf("%lld\n",a)
#define pfln2(a,b) printf("%lld %lld\n",a,b)


/*** Loops ***/
#define foR0(num) for(ll i = 0; i < num; i++)
#define foR1(num) for(ll i = 1; i <= num; i++)
#define foRev(num) for(ll i = num - 1; i >= 0; i--)
#define rep(i, x, n) for (ll i = x, _n = (n); i < _n; ++i)
#define forIn(arr, num) for(ll i = 0; i < num; i++) cin>>arr[i];
#define forIn1(arr, num) for(ll i = 1; i <= num; i++) cin>>arr[i];
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');


/*** Define Values ***/

#define     ff                first
#define     ss                second
#define     re                return
#define     MP                make_pair
#define     pb                push_back
#define     SZ(x)             ((ll) (x).size())


#define     EPS               10E-10
#define     mxx               15010
#define     MOD               1000000007
#define     iseq(a,b)         (fabs(a-b)<EPS)
#define     PI                3.141592653589793238462643


#define     Ceil(a,b)         (a+b-1)/b
#define     gcd(a, b)         __gcd(a,b)
#define     min3(a,b,c)       min(a,min(b,c))
#define     max3(a,b,c)       max(a,max(b,c))
#define     lcm(a, b)         ((a)/gcd(a,b))*(b)
#define     min4(a,b,c,d)     min(d,min(a,min(b,c)))
#define     max4(a,b,c,d)     max(d,max(a,max(b,c)))
#define     input             freopen("input.txt","rt", stdin)
#define     output            freopen("output.txt","wt", stdout)


#define     all(v)            v.begin(),v.end()
#define     mem(nam,val)      memset(nam, val, sizeof(nam))
#define     ps(x,y)           fixed<<setprecision(y)<<x
#define     for2D0(n,m)       for(ll i=0;i<n;i++)for(ll j=0;j<m;j++)
#define     for2D1(n,m)       for(ll i=1;i<=n;i++)for(ll j=1;j<=m;j++)
#define     Unique(X)         (X).resize(unique(all(X))-(X).begin())
#define     get_pos(c,x)      (lower_bound(c.begin(),c.end(),x)-c.begin())
#define     get_pos_up(c,x)   (upper_bound(c.begin(),c.end(),x)-c.begin())
#define     IOS               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


/*** STLs ***/
typedef vector <ll> vll;
typedef set <ll> sll;
typedef multiset <ll> msll;
typedef queue <ll> qll;
typedef stack <ll> stll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll, ll> > vpll;
typedef map<string,ll> msl;
typedef priority_queue<ll> pql;
typedef priority_queue<ll,vector<ll>,greater<ll> > npql;


/*** BitWise Operations
///int Set(int N,int pos){return N=N | (1<<pos);}
///int reset(int N,int pos){return N= N & ~(1<<pos);}
///bool check(int N,int pos){return (bool)(N & (1<<pos));}
***/


/*** Grids
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
***/

typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

/*** Functions
///transform(data.begin(), data.end(), data.begin(),[](unsigned char c){ return std::tolower(c); });
///typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
///ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')*k);k*=10;}return n;}
///string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
///bool sortinrev(const pair<ll,ll> &a,const pair<ll,ll> &b)return (a.first > b.first);
///prime[]={2,4,2,4,6,2} //start loop from 29 to do prime factorization
///auto it = lower_bound(my_multiset.begin(), my_multiset.end(), 3);
///const auto pos = distance(my_multiset.begin(), it);
///priority_queue< pll ,vector<pll>,greater<pll> >p;
///lower_bound(all(v),r+1)-lower_bound(all(v),l);
///cout<<*X.find_by_order(0)<<endl;
///cout<<X.order_of_key(-5)<<endl;
///set< pair<int,int> >s;
///pair<int,int> p={3,2};
///auto lb=lower_bound(s.begin(),s.end(),p);
///cout<<(*lb).first<<" "<<(*lb).second<<endl;
***/


/*** Some Prints ***/
#define en cout << '\n';
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'


char T[mxx];
ll RA[mxx],tempRA[mxx];
ll SA[mxx],tempSA[mxx];
ll c[mxx],n;
ll phi[mxx],PLCP[mxx];
ll LCP[mxx];

void countingSort(ll k)
{
    ll i,sum,maxi=max(300ll,n);
    mem(c,0);
    foR0(n)c[i+k<n ? RA[i+k] : 0]++;
    for(ll i=sum=0; i<maxi; i++)
    {
        ll t=c[i];
        c[i]=sum;
        sum+=t;
    }
    foR0(n)tempSA[c[SA[i]+k < n?RA[SA[i]+k]:0]++]=SA[i];
    foR0(n)SA[i]=tempSA[i];
}


void constructSA()
{
    ll r;
    foR0(n)RA[i]=T[i];
    foR0(n)SA[i]=i;
    for(ll k=1; k<n; k <<= 1)
    {
        countingSort(k);
        countingSort(0);
        tempRA[SA[0]]=r=0;
        for(ll i=1; i<n; i++)
        {
            tempRA[SA[i]]=(RA[SA[i]] == RA[SA[i-1]] && RA[SA[i]+k] == RA[SA[i-1]+k])?r:++r;
        }
        foR0(n)RA[i]=tempRA[i];
        if(RA[SA[n-1]] == n-1)break;
    }
}

void computeLCP()
{
    ll i,L;
    phi[SA[0]]=-1;
    rep(i,1,n)phi[SA[i]]=SA[i-1];
    for(ll i=L=0; i<n; i++)
    {
        if(phi[i]==-1)
        {
            PLCP[i]=0;
            continue;
        }
        while(T[i+L] == T[phi[i]+L])L++;
        PLCP[i]=L;
        L=max(L-1,0ll);
    }
    foR0(n)LCP[i]=PLCP[SA[i]];
}


int main()
{
    ll tst=1;
    cin>>tst;
    for(ll tt=1; tt<=tst; tt++)
    {
        //code
        ll flag[10]= {};
        ll pre[mxx]= {};
        ll res=0;
        char ch1[mxx],ch2[mxx],ch3[mxx];
        scanf("%s %s %s",ch1,ch2,ch3);
        strcat(T,ch1);
        strcat(T,"#");
        strcat(T,ch2);
        strcat(T,"$");
        strcat(T,ch3);
        strcat(T,"%");

        n=(int)strlen(T);
        constructSA();
        computeLCP();

        ordered_set s;
        ll i=0,j=-1;
        bool check=false;
        while(1)
        {
            if(j>=n || i>=n)break;
            if(!check)
            {
                j++;
                s.insert(LCP[j]);
                ll len=n-SA[j];
                pre[j]+=3;
                if(len>strlen(ch3)+1)pre[j]+=2;
                if(len>strlen(ch2)+strlen(ch3)+2)pre[j]+=1;
                flag[pre[j]]++;
                if(flag[3] && flag[5] && flag[6])
                {
                    res=max(res,*s.begin());
                    check=true;
                }
            }
            else
            {
                auto lb=lower_bound(all(s),LCP[i]);
                s.erase(lb);
                if(SZ(s)>=2)res=max(res,*s.begin());

                flag[pre[i]]--;
                i++;
                if(!flag[3] || !flag[5] || !flag[6])check=false;
            }

        }
        printf("Case %lld: %lld\n",tt,res);
        mem(T,0);






    }


    return 0;
}

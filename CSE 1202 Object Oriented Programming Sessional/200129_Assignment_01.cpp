/* 200129 _ Md.Raihanul Haque_Problem-01 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class sorting
{
private:
    ll a,b;
public:
    sorting()
    {

    }
    sorting(ll x,ll y)
    {
        a=x;
        b=y;
    }
    int get_a()
    {
        return a;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    sorting arr[5],cpy;
    for(ll i=0; i<5; i++)
    {
        ll p,q;
        cin>>p>>q;
        arr[i]=sorting(p,q);
    }
    for(int i=0; i<5; i++)
    {
        for(ll j=i+1; j<5; j++)
            if(arr[i].get_a()>arr[j].get_a())
            {
                //swap(arr[i],arr[j]);
                cpy=arr[i];
                arr[i]=arr[j];
                arr[j]=cpy;
            }
    }
    for(ll i=0; i<5; i++) arr[i].print();
}

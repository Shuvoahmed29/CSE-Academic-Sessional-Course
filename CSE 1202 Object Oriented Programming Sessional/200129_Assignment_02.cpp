/* 200129 _ Md.Raihanul Haque_Problem-02 */
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class student
{
private:
    string name;
    ll roll;
    double cgpa;
public:
    student()
    {

    }
    student(string str,ll r,double gp)
    {
        name=str;
        roll=r;
        cgpa=gp;
    }
    double get_cgpa()
    {
        return cgpa;
    }
    void print()
    {
        cout<<name<<"   ";
        cout<<roll<<"   ";
        cout<<cgpa<<endl;
    }

};
int main()
{
    student arr[10],cpy;
    string N[10]={"Shuvo Ahmed","Josim Uddin","Rakib Islam","Sakib Khan","Tamim Iqbal","Rohim Mia","Korim Mia","Habib Islam","Mithu Islam","Marsel Mia"};
    for(ll i=0;i<10;i++)
    {
        int R;
        double C;
        cin>>R>>C;
        arr[i]=student(N[i],R,C);
    }
     for(int i=0; i<10; i++)
    {
        for(ll j=i+1; j<10; j++)
            if(arr[i].get_cgpa()<arr[j].get_cgpa())
            {
                //swap(arr[i],arr[j]);
                cpy=arr[i];
                arr[i]=arr[j];
                arr[j]=cpy;
            }
    }
    cout<<"Merit"<<" Name "<<"Roll "<<"CGPA"<<endl;
    cout<<"-------------------------"<<endl;
    for(ll i=0; i<10; i++)
    {
        cout<<i+1<<" -";
        arr[i].print();
    }
}

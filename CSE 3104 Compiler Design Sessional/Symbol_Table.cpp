#include<bits/stdc++.h>

using namespace std;

unordered_set<string>s;

void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
void keywords()
{
    s.insert("int");
    s.insert("float");
    s.insert("double");
}
int main()
{
    code();
    keywords();
    int i;
    string a,b;
    vector<string>vec;
    bool ok=true;
    while(getline(cin,a))
    {
        b.clear();
        for(i=0;i<a.size();i++)
        {
            if(ok==true)
            {
                if(i<=a.size()-2 && a[i]=='/' && a[i+1]=='/') break;
                else if(i<=a.size()-2 && a[i]=='/' && a[i+1]=='*')
                {
                    ok=false;
                    break;
                }
                else b.push_back(a[i]);
            }
            else
            {
                if(i<=a.size() && a[i]=='*' && a[i+1]=='/')
                {
                    ok=true;
                    i++;
                }
            }
        }
        vec.push_back(b);
    }
    string word,w,last,last1,scope="global";
    int j;
    map<pair<string,string>,tuple<string,string,string>>table;
    for(i=0;i<vec.size();i++)
    {
        stringstream ss(vec[i]);
        while(ss>>word)
        {
            for(j=0;j<word.size();j++)
            {
                if((word[j]>='a' && word[j]<='z') || (word[j]>='A' && word[j]<='Z') || (word[j]>='0' && word[j]<='9') || word[j]=='.')
                {
                    w.push_back(word[j]);
                }
                else
                {
                    if(last=="=")
                    {
                        get<2>(table[{last1,scope}])=w;
                    }
                    if(word[j]=='}') scope="global";
                    if(w.size()>0)
                    {
                        if(last!="if" && word[j]=='(' && s.find(last)!=s.end())
                        {
                            table[{w,scope}]=(make_tuple(last,"func","NULL"));
                            scope=w;
                        }
                        else if(s.find(last)!=s.end()) table[{w,scope}]=(make_tuple(last,"var","NULL"));
                        last=w;
                    }
                    w.clear();
                    if(word[j]=='=')
                    {
                        w.push_back(word[j]);
                        last1=last;
                    }
                    if(w.size()>0)
                    {
                        last=w;
                    }
                    w.clear();
                }
            }
            if(w.size()>0)
            {
                if(word[j]=='(' && s.find(last)!=s.end()) table[{w,scope}]=(make_tuple(last,"func","NULL"));
                else if(s.find(last)!=s.end()) table[{w,scope}]=(make_tuple(last,"var","NULL"));
                last=w;
            }
            w.clear();
        }
    }
    for(auto &p : table)
    {
        cout<<p.first.first<<" "<<p.first.second<<" "<<get<0>(p.second)<<" "<<get<1>(p.second)<<" "<<get<2>(p.second)<<endl;
    }
    return 0;
}

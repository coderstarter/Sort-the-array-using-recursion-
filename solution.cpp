
#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>& v,int last_val)
{
    if(v.size()==0 || v[v.size()-1]<=last_val)
    {
        v.push_back(last_val);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,last_val);
    v.push_back(val);
    return;
}
void sortt(vector<int>& v)
{
    if(v.size()==1)
    {
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    sortt(v);
    insert(v,val);
}

int main() {
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int val;
	    cin>>val;
	    v.push_back(val);
	}
	sortt(v);
	for(int val : v)
	{
	    cout<<val<<" ";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> atri;
    atri.push_back(1);
    atri.emplace_back(2);
    atri.emplace_back(3);
    atri.emplace_back(4);
    atri.emplace_back(5);
    atri.emplace_back(6);
    atri.emplace_back(7);
    atri.emplace_back(8);
    vector<int>::iterator ite = atri.begin();
    cout << *ite << endl;
    for (vector<int>::iterator it = atri.begin(); it != atri.end(); it++)
    {
        cout << "At memory location " << &*it << ", element " << *it << " is present" << endl;
    }
    for(auto iter:atri)
    {
        cout<<iter<<" ";
    }
    cout<<endl;
    for (auto i = atri.begin(); i != atri.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl<<sizeof(atri);
    return 0;
}
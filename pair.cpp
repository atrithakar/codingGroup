#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, pair<int, int>> p = {1, {2, 3}};
    pair<int, pair<int, pair<int, int>>> q = {1, {2, {3, 4}}};
    pair<int, int> r = {6, 9};
    cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    cout << q.first << " " << q.second.first << " " << q.second.second.first << " " << q.second.second.second << endl;
    cout << r.first << r.second << endl;
    return 0;
}
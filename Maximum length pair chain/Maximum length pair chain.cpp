
#include <bits/stdc++.h>
using namespace std;

const bool comparator(const pair<int,int>& p1, const pair<int,int>& p2)
{
    return (p1.second < p2.second);
}
int maxLengthChain(vector<pair<int, int>> &p, int n) {
    
   int l = 1;
 
    sort(p.begin(),p.end(),comparator);
 
    int s = p[0].second;
 
    for (int i = 1; i < n; i++) {
 
        if (p[i].first > s) {
            l++;
            s = p[i].second;
        }
    }
 
    
    return l;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> p(n);
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            p[i].first = a;
            p[i].second = b;
        }
        cout << maxLengthChain(p, n) << endl;
    }
    return 0;
}

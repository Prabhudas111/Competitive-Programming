
#include <iostream>
using namespace std;

bool checkOverlappingIntervals(long* start, long* end, int n)
{
  
    if(n==1) return false;
    vector<pair<int,int>> vec;
      for(int i =0;i<n;i++){
          vec.push_back({start[i],end[i]});
      
}
     sort(vec.begin(), vec.end());
    
    for(int i = 1;i<vec.size();i++){

        if(vec[i].first<vec[i-1].second){
return true;
        }
        
    }
    return false;

}


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long *start = new long[n];
        long *end = new long[n];

        for (int i = 0; i < n; ++i)
        {
            cin >> start[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> end[i];
        }

        if (checkOverlappingIntervals(start, end, n))
        {
            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }

        delete start;
        delete end;
    }
}

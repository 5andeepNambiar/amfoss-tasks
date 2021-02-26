
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){

    int count=0;
    int t,n;
    cin >> t;
    
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=1;j<n;j++)
        {
            if(j%3==0||j%5==0)
            {
                count+=j;
            }
        }
        cout<<count<<endl;
        count=0;
    }
    
    return 0;
}



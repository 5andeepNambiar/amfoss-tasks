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
    int t=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int s=1;
        for(int j=1;j<n;j++){
            s=(s*j)/__gcd(s,j);
        }
        cout<<s<<endl;
    }
     return 0;
}
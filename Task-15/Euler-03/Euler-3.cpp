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

    int t;
    int largest;
    int count;
    cin >> t;
    
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
        
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                count++;
            }   
            if(count==0)
            largest=i;
    
        }  
     }
  
    cout<<largest<<endl;  

  }  
}
  

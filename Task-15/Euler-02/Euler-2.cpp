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
    cin >> t;
        int sum = 0;
        int num = 1;
        int a=0;
        int b=1;
        int temp;
        
    for(int i = 0; i < t; i++){
        long n;
        cin >> n;
        
       temp=0;
       for(temp;temp<n;temp+=0)
        {
            if(temp%2==0)
            {
                sum+=temp;
            }
            temp = a+b;
            a = b;
            b = temp;            
        }
        cout<<sum<<endl;
        sum=0;
        a=0;
        b=1;  
    }
   return 0; 
}


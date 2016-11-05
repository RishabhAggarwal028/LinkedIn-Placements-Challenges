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
    int n;
    cin >> n;
    int remainder,quotient;
    int binary[100],i,j;
    quotient = n;
    while(quotient!=0){
         binary[i++]= quotient % 2;
         quotient = quotient / 2;
    }
    int maxLength = 0;
    int tempLength = 0;
    for (int j = 0; j < i ; j++) {
        if (binary[j] == 1) {
            tempLength++;
        } else {
            tempLength = 0;
        }
        if (tempLength > maxLength) {
            maxLength = tempLength;
        }
    }
    cout<<maxLength;
    return 0;
}
